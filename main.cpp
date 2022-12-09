#include "formula.h"

int main() {
    formula frm;
    int var = 0;
    frm.print();

    std::cin >> var;
    
    frm.find(var);
    
    return 0;
}
