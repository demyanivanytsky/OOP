#include "Student.h"

Student::Student(std::string name, int age, int course) : Person(name, age), course(course) {}
    void Student::ChangeAge(int new_age)
    {
        Person::ChangeAge(new_age);
        course = (age - 18) + 1; 
    }


void Student::ShowInfo()
{
    std::cout << "Name: " << name << "\n" << "Age: " << age << "\n" << "Course: " << course << std::endl;
}
