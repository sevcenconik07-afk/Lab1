#include <iostream>

int main()
{
    int i = 69;
    int number = 72;
    i += number;
    
    int arrayi[3] {0,0,0};
    int* iPointer = &i;
    number = *iPointer;
    *iPointer = 15;
    std::cout<<*iPointer;
    std::cout << std::endl;
    iPointer = arrayi;
    iPointer = iPointer + 2;
    arrayi[0] = 5;
    *iPointer = 6;
    std::cout<< *iPointer;
    std::cout << std::endl;
    return 0;
}
