/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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