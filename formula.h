#ifndef FORMULA_H
#define FORMULA_H


#include <iostream>
class formula {
public:
    void find(int);

    int add(int, int);
    int subtract(int, int);
    int multiply(int, int);
    int divide(int, int);
    int collatzConjecture(int);

private:

};

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
    } else if(var == 5) {
        int x = 0;
        std::cout << "\nPick a number for the Coolatz Conjecture.\n";
        std::cout << "Number: ";
        std::cin >> x;
        total = frm.collatzConjecture(x);
        std::cout << total << '\n';
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
int formula::collatzConjecture(int x) {
    formula frm;
    int sum = 0;

    if(x % 2 == 0) {
        std::cout << "Even\n";
    } else {
        sum = frm.multiply(x, 3);
        sum = frm.add(sum, 1);
    }
    return sum;
}

#endif