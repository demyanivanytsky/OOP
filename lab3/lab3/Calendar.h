#ifndef CALENDAR_H 
#define CALENDAR_H 

#include <string> 

class Calendar {
public:
    Calendar();
    Calendar(int day, int month, int year, const std::string& event);
    Calendar(const Calendar& other);
    ~Calendar();

    void SetDate(int day, int month, int year);
    void SetEvent(const std::string& event);
    void AddDays(int days);
    void AddMonths(int months);
    void AddYears(int years);

    // Перевантаження операторів 
    Calendar& operator=(const Calendar& other);
    Calendar& operator+=(int days);
    Calendar& operator-=(int days);
    bool operator==(const Calendar& other) const;
    bool operator!=(const Calendar& other) const;
    bool operator>(const Calendar& other) const;
    bool operator>=(const Calendar& other) const;
    bool operator<(const Calendar& other) const;
    bool operator<=(const Calendar& other) const;

    bool FindEvent(const std::string& event) const;

    void Print() const;

private:
    int day_;
    int month_;
    int year_;
    std::string event_;
};

#endif 