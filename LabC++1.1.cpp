

#include <iostream>

void C() 
{
    std::cout << "called C" << std::endl;
}
void B()
{
    std::cout << "called B" << std::endl;
}
void A()
{
    std::cout << "called A" << std::endl;
    B();
    C();
}

int main()
{
    std::cout << "Hello World!\n";

    A();
}


