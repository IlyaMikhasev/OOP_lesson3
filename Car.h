#pragma once
#include <string>
class Car
{
public:
	Car(const std::string& color, int speed);
	Car();
	const std::string& getColor() const;
	void setColor(const std::string& color);
	int getSpeed() const;
	void setMaxSpeed(int speed);
	bool operator==(const Car& obj);
private:
	std::string _color;
	int _maxSpeed;
};

