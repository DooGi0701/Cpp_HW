#include <iostream>
#include "Ram.h"

int main() {
    Ram ram;
    ram.write(100, 20);     
    ram.write(101, 30);     

    char res = ram.read(100) + ram.read(101);  
    ram.write(102, res);     

    std::cout << "102 ¹øÁöÀÇ °ª = " << (int)ram.read(102) << std::endl;  
    return 0;
}
