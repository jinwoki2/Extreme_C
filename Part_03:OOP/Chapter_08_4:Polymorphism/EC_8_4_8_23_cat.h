/* Cat 클래스의 공용 인터페이스 */
#ifndef EC_8_4_8_23_CAT_H
# define EC_8_4_8_23_CAT_H

// 전방 선언
struct cat_t;

// 메모리 할당자
struct cat_t	*cat_new(void);

// 생성자
void			cat_ctor(struct cat_t*);

// 소멸자
void			cat_dtor(struct cat_t*);

// 모든 행위 함수는 animal 클래스에서 상속받습니다.

#endif