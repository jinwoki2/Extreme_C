#include <iostream>

#include "ExtremeC_examples_chapter6_2.h"

int main(int argc, char** argv) {

	// 객체 변수 생성 및 생성자 호출
	Car car("Renault");

	// 메인 알고리듬
	car.Refuel(100.0);
	std::cout << "Car is refueled, the correct fuel level is " << car.fuel << std::endl;
	while (car.fuel > 0) {
		std::cout << "Car fuel level: " << car.fuel << std::endl;
		if (car.speed < 80) {
			car.Acceclerate();
			std::cout << "Car has been accelerated to the speed: " << car.speed << std::endl;
		} else {
			car.Brake();
			std::cout << "Car has been slowed down to the speed: " << car.speed << std::endl;
		}
	}

	std::cout << "Car ran out of the fuel! Slowing down ..."<< std::endl;
	while (car.speed > 0) {
		car.Brake();
		std::cout << "Car has been slowed down to the speed: " << car.speed << std::endl;
	}
	std::cout << "Car is stopped!" << std::endl;

	// 함수를 떠날 때, 객체 'car'는 자동적으로 소멸된다.
	return 0;
}