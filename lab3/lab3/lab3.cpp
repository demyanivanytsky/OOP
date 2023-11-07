#include "Calendar.h"
#include <iostream>

int main() {
    Calendar date1(22, 10, 2023, "Event 1");
    Calendar date2(20, 10, 2023, "Event 2");

    // Додамо 10 днів, 2 місяці та 1 рік до date1
    date1.AddDays(10);
    date1.AddMonths(2);
    date1.AddYears(1);

    date1.Print();
    date2.Print();

    if (date1 == date2) {
        std::cout << "Date1 is equal to date2." << std::endl;
    }
    else {
        std::cout << "Date1 is not equal to date2." << std::endl;
    }

    date1 += 1;
    date1.Print();

    if (date1 > date2) {
        std::cout << "Date1 is later than date2." << std::endl;
    }
    else {
        std::cout << "Date1 is earlier than date2." << std::endl;
    }

    return 0;
}
