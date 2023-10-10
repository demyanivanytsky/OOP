#include <cmath>
#include <iostream>
using namespace std;

class ZavdClass {
public:
    // Обчислення функції b[x, y, z]
    void Fn_b(double x, double y, double z) {
        double b1 = 1 + pow(fabs(y - x), 2) / pow(fabs(z - 1), 1.34) + pow(z - x, 2) / pow(sin(z), 2) + pow(fabs(y - z), 3) / pow(cos(y), 2);
        b = b1;
    }

    // Обчислення функції a[x, y, z, b]
    void Fn_a(double x, double y, double z) {
        double a1 = pow(x + y, 2);
        double a2 = x + pow(z, 3) / (pow(b, 2) + y) * pow(x - y, 3) + exp(-(x - y)) + pow(fabs(z), 0.34);
        double a3 = x / Faktr(2) + exp(z - 2) + pow(y, 2) / Faktr(3);
        a = a1 + a2 / a3;
    }

    // Обчислення факторіалу
    double Faktr(int n) {
        double f = 1;
        if (n > 1)
            for (int i = 2; i <= n; i++)
                f *= i;
        return f;
    }

    // Отримання значення b
    double Get_b() {
        return b;
    }

    // Отримання значення a
    double Get_a() {
        return a;
    }

private:
    double b;
    double a;
};

int getMax(int a, int b) {
    setlocale(LC_ALL, "Ukrainian");
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int a = 5;
    int b = 10;
    int Max = getMax(a, b);

    ZavdClass zavd; // Створення об'єкта класу ZavdClass

    zavd.Fn_b(1.0, 2.0, 3.0); // Виклик методу для обчислення b
    zavd.Fn_a(1.0, 2.0, 3.0); // Виклик методу для обчислення a

    std::cout << "Бiльше число мiж " << a << " і " << b << " - " << Max << std::endl;
    std::cout << "Значення b: " << zavd.Get_b() << std::endl;
    std::cout << "Значення a: " << zavd.Get_a() << std::endl;

    return 0;
}
