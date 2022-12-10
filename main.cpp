#include "printing.h"

int main() {
    printing prt;
    int var = 0;
    prt.print();

    std::cout << "Pick a Formula: ";
    std::cin >> var;
    
    prt.find(var);
    
    return 0;
}
