#include "ExtremeC_7_2_gun.h"
#include "ExtremeC_7_2_player.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	/* gun 객체를 만들고 생성하기 */
	struct gun_t	*gun;
	gun = gun_new();
	gun_ctor(gun, 3);

	/* player 객체를 만들고 생성하기 */
	struct player_t	*player;
	player = player_new();
	player_ctor(player, "Billy");

	/* 집합 관계가 시작된다 */
	player_pickup_gun(player, gun);

	/* 총알이 남지 않을 때까지 쏜다 */
	while (gun_has_bullets(gun))
		player_shoot(player);

	/* 총을 재장전 합니다 */
	gun_refill(gun);

	/* 합성 관계를 종료한다 */
	player_drop_gun(player);

	/* 플레이어 객체를 소멸 및 해제합니다 */
	player_dtor(player);
	free(player);

	/* 총 객체를 소멸 및 해제합니다 */
	gun_dtor(gun);
	free(gun);

	return (0);
}
