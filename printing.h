#ifndef PRINTING_H
#define PRINTING_H

#include "formula.h"

class printing {
    public:
        void print();
        void find(int);
    private:

};

void printing::print() {
    std::cout << "Enter the number of what equation you would like to use.\n\n";
    std::cout << "1. Add.\n";
    std::cout << "2. subtract.\n";
    std::cout << "3. Multiply.\n";
    std::cout << "4. divide.\n";
    std::cout << "5. Collatz Conjecture.\n";
    std::cout << "\n";
}

void printing::find(int var) {
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

#endif