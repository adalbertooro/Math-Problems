#ifndef FORMULA_H
#define FORMULA_H

#include <iostream>

class formula {
    public:
        double add(double, double);
        double subtract(double, double);
        double multiply(double, double);
        double divide(double, double);
        int collatzConjecture(int);

    private:
};

double formula::add(double a, double b) {
    double sum = a + b;
    return sum;
}

double formula::subtract(double a, double b) {
    double sum = a - b;
    return sum;
}

double formula::multiply(double a, double b) {
    double sum = a * b;
    return sum;
}

double formula::divide(double a, double b) {
    double sum = a / b;
    return sum;
}
int formula::collatzConjecture(int x) {
    formula frm;
    int total = x;
    int sum = 0;
    while(total != 1) {
        if(total % 2 == 0) {
            sum = total;
            total = frm.divide(total, 2);
            std::cout << total <<"\n";
        } else {
            total = frm.multiply(total, 3);
            total = frm.add(total, 1);
            std::cout << total <<"\n";
        }
    }
    return sum;
}

#endif