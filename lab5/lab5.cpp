#include <iostream>
#include <windows.h>
#include "Person.h"
#include "Student.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Person person("Kolya", 18);
    Person* ptr = &person;
    ptr->ChangeAge(20);

    person.ShowInfo();

    Student student("Vasya", 18, 1);
    ptr = &student;
    ptr->ChangeAge(19);

    student.ShowInfo();
}
