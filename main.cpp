#include <iostream>
#include "hello.h"
void hello(){
    std::cout << "Hello, World!" << std::endl;
}

void newfeature(){
    std::cout << "This is the new feature, eheh !";
}


int main() {
    std::cout << "This is the new feature, eheh !";
    hello();
    newfeature();
    return 0;
}
