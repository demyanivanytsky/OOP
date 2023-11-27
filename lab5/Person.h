#pragma once
#include <string>
#include <iostream>
class Person
{
protected:
	int age;
	std::string name;
public:
	Person();
	Person(std::string name, int age);
	virtual void ChangeAge(int age);
	virtual void ShowInfo();
};
