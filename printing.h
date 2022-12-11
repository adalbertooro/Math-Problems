#ifndef PRINTING_H
#define PRINTING_H

#include "formula.h"

#include<iomanip>

class printing {
    public:
        void print();
        void find(int);
        void printAdd(double, double, double);
        void printSubtract(double, double, double);
        void printMultiply(double, double, double);
        void printDivide(double, double, double);
        void printCollatz(std::vector<int>);
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
    printing prt;
    std::cout.precision(5);
    double total = 0.0;
    std::vector<int> hold;
    if(var == 1) {
        double a = 0;
        double b = 0;
        std::cout << "\npick two numbers to add together.\n";
        std::cout << "First Number: ";
        std::cin >> a;
        std::cout << "Second Number: ";
        std::cin >> b;
        total = frm.add(a, b);
        prt.printAdd(a, b, total);
    } else if(var == 2) {
        double a = 0;
        double b = 0;
        std::cout << "\npick two numbers to subtract together.\n";
        std::cout << "First Number: ";
        std::cin >> a;
        std::cout << "Second Number: ";
        std::cin >> b;
        total = frm.subtract(a, b);
        prt.printSubtract(a, b, total);
    } else if(var == 3) {
        double a = 0;
        double b = 0;
        std::cout << "\npick two numbers to multiply together.\n";
        std::cout << "First Number: ";
        std::cin >> a;
        std::cout << "Second Number: ";
        std::cin >> b;
        total = frm.multiply(a, b);
        prt.printMultiply(a, b, total);
    } else if(var == 4) {
        double a = 0;
        double b = 0;
        std::cout << "\npick two numbers to divide together.\n";
        std::cout << "First Number: ";
        std::cin >> a;
        std::cout << "Second Number: ";
        std::cin >> b;
        total = frm.divide(a, b);
        prt.printDivide(a, b, total);
    } else if(var == 5) {
        double x = 0;
        std::cout << "\nPick a number for the Coolatz Conjecture.\n";
        std::cout << "Number: ";
        std::cin >> x;
        hold = frm.collatzConjecture(x);
        prt.printCollatz(hold);
    }
}

void printing::printAdd(double a, double b, double total) {
    std::cout << total << " = " << a << " + " << b; 
    std::cout << "\n";
}

void printing::printSubtract(double a, double b, double total) {
    std::cout << total << " = " << a << " - " << b; 
    std::cout << "\n";
}

void printing::printMultiply(double a, double b, double total) {
    std::cout << total << " = " << a << " * " << b; 
    std::cout << "\n";
}

void printing::printDivide(double a, double b, double total) {
    std::cout << total << " = " << a << " / " << b; 
    std::cout << "\n";
}

void printing::printCollatz(std::vector<int> info) {
    for(long unsigned int i = 0; i < info.size(); ++i) {
        if(info.at(i) == 1) {
            std::cout << std::setw(4) << info.at(i - 2) << " = " << info.at(i) << " * 3 + 1" << '\n';
            break;
        }
        if(info.at(i) % 2 != 0) {
            std::cout << std::setw(4) << info.at(i) << " = " << info.at(i + 1) << " * 3 + 1" << '\n';
        } else {
            std::cout << std::setw(4) << info.at(i) << " = " << info.at(i + 1) << " / 2" << '\n';
        }
    }
}

#endif