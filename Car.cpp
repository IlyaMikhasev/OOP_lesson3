#include "Car.h"

Car::Car(const std::string& color, int speed):_color(color),_maxSpeed(speed) {}

Car::Car():_color("white"),_maxSpeed(180) {}

const std::string& Car::getColor()const 
{
	return _color;
}

void Car::setColor(const std::string& color)
{
	_color = color;
}

int Car::getSpeed()const
{
	return _maxSpeed;
}

void Car::setMaxSpeed(int speed)
{
	_maxSpeed = speed;
}

bool Car::operator==(const Car& obj)
{

	return _maxSpeed == obj._maxSpeed;
}
