#include "printing.h"

int main() {
    printing prt;
    int var = -1;
    while(var != 0) {
        prt.print();

        std::cout << "Pick a Formula: ";
        std::cin >> var;
        
        prt.find(var);
        std::cout << "\n\n";
    }
    return 0;
}
