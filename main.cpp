#include <iostream>
#include "hello.h"
void hello(){
    std::cout << "Hello, World!" << std::endl;
}

void newfeature(){
    std::cout << "This is the new feature !" ;
}

int main() {
    std::cout<<"What zz?";
    hello();
    return 0;
}
