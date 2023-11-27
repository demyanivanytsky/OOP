#include "Person.h"

Person::Person()
{
	age = 0;
	name = "";
}

Person::Person(std::string name, int age) : name(name), age(age) {}

void Person::ChangeAge(int new_age)
{
	age = new_age;
}

void Person::ShowInfo()
{
	std::cout << "Name: " << name << "\n" << "Age: " << age << std::endl;
}
