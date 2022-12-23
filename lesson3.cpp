#include <iostream>
#include <string>
#include "Person.h"
#include "Car.h"
int main() {
	setlocale(LC_ALL, "Russian");

	Person p1("Alex"), p2("Jeck");
	std::cout<<"��� �1 - " << p1.getName() << '\n';
	std::cout << "��� �2 - " << p2.getName() << '\n';
	Person p3 = p1 + p2;
	std::cout << "��� �3 - " << p3.getName() << '\n';
	//bool result = p1.operator>(p2)
	std::cout << "������ �� �1 ��� �2? = " << (p1 > p2) << std::endl;
	
	Car car1("red", 180), car2("blue", 150);
	std::cout << " ������������ �������� car1 = " << car1.getSpeed() << '\n';
	std::cout << " ������������ �������� car2 = " << car2.getSpeed() << '\n';
	std::cout << "����� �� �������� ������ 1 � 2? = " << (car1 == car2)<<std::endl;
	return 0;
}