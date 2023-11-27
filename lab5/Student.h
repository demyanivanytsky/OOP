#pragma once
#include "Person.h"
class Student : public Person
{
private:
	int course;
public:
	Student(std::string name, int age, int course);
	void ChangeAge(int age) override;
	void ShowInfo() override;
};
