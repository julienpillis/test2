#include <iostream>
#include "hello.h"
void hello(){
    std::cout << "Hello, World!" << std::endl;
}

void newfeature(){
    std::cout << "This is the new feature, eheh !";
}


int main() {
    hello();
    newfeature();
    return 0;
}
