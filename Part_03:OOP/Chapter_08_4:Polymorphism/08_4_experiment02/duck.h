/* Duck 클래스의 공용 인터페이스 */
#ifndef DUCK_H
# define DUCK_H

// 전방 선언
struct duck_t;

// 메모리 할당자
struct duck_t	*duck_new(void);

// 생성자
void			duck_ctor(struct duck_t *);

// 소멸자
void			duck_dtor(struct duck_t *);

// 모든 행위 함수는 animal 클래스에서 상속받습니다.

#endif
