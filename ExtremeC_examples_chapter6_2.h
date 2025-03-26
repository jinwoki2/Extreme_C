#ifndef EXTREME_C_EXAMPLES_CHAPTER_6_2_H
#define EXTREME_C_EXAMPLES_CHAPTER_6_2_H

class Car {
public:
	// 생성자
	Car(const char *);
	// 소멸자
	~Car();

	void Acceclerate();
	void Brake();
	void Refuel(double);

	// 데이터 멤버 (C에서는 속성)
	char	name[32];
	double	speed;
	double	fuel;
};

#endif