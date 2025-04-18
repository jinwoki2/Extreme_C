/* Player 클래스의 공용 인터페이스 */
#ifndef EXTREME_C_7_2_PLAYER_H
# define EXTREME_C_7_2_PLAYER_H

// 전방 선언
struct player_t;
struct gun_t;

// 메모리 할당, 생성자, 소멸자
struct player_t		*player_new(void);
void				player_ctor(struct player_t *, const char *);
void				player_dtor(struct player_t *);

// 행위 함수
void				player_pickup_gun(struct player_t *, struct gun_t *);
void				player_shoot(struct player_t *);
void				player_drop_gun(struct player_t *);

#endif