/* Player Class에 대한 정의 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "EC_7_2_7_8_gun.h"

// 속성 구조체
typedef struct
{
	char			*name;
	struct gun_t	*gun;
}					player_t;

// 메모리 할당자
player_t			*player_new(void)
{
	return (player_t *)malloc(sizeof(player_t));
}

// 생성자
void				player_ctor(player_t *player, const char *name)
{
	player->name = (char *)malloc(strlen(name + 1) * sizeof(char));
	strcpy(player->name, name);
	// 중요한 부분. 생성자에서 집합 포인터가 설정되지 않은 경우, 집합 포인터를 NULL로 두어야 한다.
	player->gun = NULL; 
}

// 소멸자
void				player_dtor(player_t *player)
{
	free(player->name);
}

// 행위 함수
void				player_pickup_gun(player_t *player, struct gun_t *gun)
{
	// 다음 행 이후, 집합 관계가 시작된다. 
	player->gun = gun;
}

void				player_shoot(player_t *player)
{
	// 플레이어가 총을 들었는지 확인해야 한다.
	// 총을 들지 않았다면, 발사가 무의미하다.
	if (player->gun)
		gun_trigger(player->gun);
	else
	{
		printf("플레이어는 쏘고 싶지만 총이 없다!");
		exit(1);
	}
}

void				player_drop_gun(player_t *player)
{
	// 다음 행 이후 두 객체 간 집합관계가 종료된다.
	// 총 객체는 해제하면 안 된다.
	// 플레이어 객체는 집합 때처럼 총 객체의 소유자가 아니기 때문이다.
	player->gun = NULL;
}