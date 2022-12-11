#ifndef FORMULA_H
#define FORMULA_H

#include <iostream>
#include <vector>

class formula {
    public:
        std::vector<int> hold;

        double add(double, double);
        double subtract(double, double);
        double multiply(double, double);
        double divide(double, double);
        
        std::vector<int> collatzConjecture(int);
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

std::vector<int> formula::collatzConjecture(int x) {
    formula frm;
    int total = x;
    while(total != 1) {
        if(total % 2 == 0) {
            hold.push_back(total);
            total = frm.divide(total, 2);
        } else {
            hold.push_back(total);
            total = frm.multiply(total, 3);
            total = frm.add(total, 1);
        }
    }
    hold.push_back(total);
    return hold;
}

#endif