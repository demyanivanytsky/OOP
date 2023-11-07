#include "Calendar.h" 
#include <iostream> 
#include <stdexcept> 

Calendar::Calendar()
    : day_(1), month_(1), year_(2000), event_("Special event") {}

Calendar::Calendar(int day, int month, int year, const std::string& event)
    : day_(day), month_(month), year_(year), event_(event) {}

Calendar::Calendar(const Calendar& other)
    : day_(other.day_), month_(other.month_), year_(other.year_), event_(other.event_) {}

Calendar::~Calendar() {
}

void Calendar::SetDate(int day, int month, int year) {

    day_ = day;
    month_ = month;
    year_ = year;
}

void Calendar::SetEvent(const std::string& event) {
    event_ = event;
}

void Calendar::AddDays(int days) {
    day_ += days;
    while (day_ > 31) {
        day_ -= 31;
        AddMonths(1);
    }
}

void Calendar::AddMonths(int months) {
    int totalMonths = year_ * 12 + month_ + months;
    year_ = totalMonths / 12;
    month_ = totalMonths % 12;
}

void Calendar::AddYears(int years) {
    year_ += years;
}

Calendar& Calendar::operator=(const Calendar& other) {
    if (this == &other) {
        return *this;
    }
    day_ = other.day_;
    month_ = other.month_;
    year_ = other.year_;
    event_ = other.event_;
    return *this;
}

Calendar& Calendar::operator+=(int days) {
    // Реалізація додавання днів 
    return *this;
}

Calendar& Calendar::operator-=(int days) {
    // Реалізація віднімання днів 
    return *this;
}

bool Calendar::operator==(const Calendar& other) const {
    // Реалізація порівняння на рівність 
    return (day_ == other.day_ && month_ == other.month_ && year_ == other.year_);
}

bool Calendar::operator!=(const Calendar& other) const {

    return !(*this == other);
}

bool Calendar::operator>(const Calendar& other) const {
    return (year_ > other.year_ || (year_ == other.year_ && (month_ > other.month_ || (month_ == other.month_ && day_ > other.day_))));
}


bool Calendar::operator>=(const Calendar& other) const {
    return (*this == other || *this > other);
}

bool Calendar::operator<(const Calendar& other) const {
    return !(*this >= other);
}

bool Calendar::operator<=(const Calendar& other) const {
    return !(*this > other);
}

bool Calendar::FindEvent(const std::string& event) const {
    return (event_ == event);
}

void Calendar::Print() const {
    std::cout << day_ << "/" << month_ << "/" << year_ << ": " << event_ << std::endl;
}
