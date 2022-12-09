#ifndef FORMULA_H
#define FORMULA_H

#include <iostream>
class formula {
public:
    void print();
    void find(int);
    int add(int, int);
    int subtract(int, int);
    int multiply(int, int);
    int divide(int, int);
private:

};


void formula::print() {
    std::cout << "Enter the number of what equation you would like to use.\n\n";
    std::cout << "1. Add.\n";
    std::cout << "2. subtract.\n";
    std::cout << "3. Multiply.\n";
    std::cout << "4. divide.\n";
    std::cout << "\n";
}

void formula::find(int var) {
    formula frm;
    int total = 0;
    if(var == 1) {
        int a = 0;
        int b = 0;
        std::cout << "\npick two numbers to add together.\n";
        std::cout << "First Number: ";
        std::cin >> a;
        std::cout << "Second Number: ";
        std::cin >> b;
        total = frm.add(a, b);
        std::cout << "The sum of the " << a << " + " << b << " = " << total; 
        std::cout << "\n";
    } else if(var == 2) {
        int a = 0;
        int b = 0;
        std::cout << "\npick two numbers to subtract together.\n";
        std::cout << "First Number: ";
        std::cin >> a;
        std::cout << "Second Number: ";
        std::cin >> b;
        total = frm.subtract(a, b);
        std::cout << "The sum of the " << a << " - " << b << " = " << total; 
        std::cout << "\n";
    } else if(var == 3) {
        int a = 0;
        int b = 0;
        std::cout << "\npick two numbers to multiply together.\n";
        std::cout << "First Number: ";
        std::cin >> a;
        std::cout << "Second Number: ";
        std::cin >> b;
        total = frm.multiply(a, b);
        std::cout << "The sum of the " << a << " * " << b << " = " << total; 
        std::cout << "\n";
    } else if(var == 4) {
        int a = 0;
        int b = 0;
        std::cout << "\npick two numbers to divide together.\n";
        std::cout << "First Number: ";
        std::cin >> a;
        std::cout << "Second Number: ";
        std::cin >> b;
        total = frm.divide(a, b);
        std::cout << "The sum of the " << a << " / " << b << " = " << total; 
        std::cout << "\n";
    }
}

int formula::add(int a, int b) {
    int sum = a + b;
    return sum;
}

int formula::subtract(int a, int b) {
    int sum = a - b;
    return sum;
}

int formula::multiply(int a, int b) {
    int sum = a * b;
    return sum;
}

int formula::divide(int a, int b) {
    int sum = a / b;
    return sum;
}

#endif