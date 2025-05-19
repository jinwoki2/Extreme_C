/* Eatable 인터페이스로 객체를 생성하고 순수 가상 함수를 호출하면 segmentation 오류 발생 */
#include "EC_9_1_9_1.h"

int main(void)
{
	t_eatable *eatable = eatable_new();
	eatable_ctor(eatable);
	t_taste taste = eatable_get_taste(eatable); // segmentation 오류
	free(eatable);
}

