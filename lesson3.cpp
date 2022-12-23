#include <iostream>
#include <string>
#include "Person.h"
#include "Car.h"
int main() {
	setlocale(LC_ALL, "Russian");

	Person p1("Alex"), p2("Jeck");
	std::cout<<"Имя р1 - " << p1.getName() << '\n';
	std::cout << "Имя р2 - " << p2.getName() << '\n';
	Person p3 = p1 + p2;
	std::cout << "Имя р3 - " << p3.getName() << '\n';
	//bool result = p1.operator>(p2)
	std::cout << "больше ли р1 чем р2? = " << (p1 > p2) << std::endl;
	
	Car car1("red", 180), car2("blue", 150);
	std::cout << " Максимальная скорость car1 = " << car1.getSpeed() << '\n';
	std::cout << " Максимальная скорость car2 = " << car2.getSpeed() << '\n';
	std::cout << "Равны ли скорости машины 1 и 2? = " << (car1 == car2)<<std::endl;
	return 0;
}