#include <iostream>
#include "IntArray.h"

int main(){
    IntArray iA1;
    IntArray iA2{10};

    iA2.replace(0,3);
    
    iA2.replace(8,4);
    iA2.print();
    iA2.swap(0,8);
    std::cout<<iA2.getSize()<<std::endl;
    std::cout<<iA2.getValue(0)<<std::endl;
    iA1.print();
    iA2.print();
    iA2.print();
    
    return 0;
}