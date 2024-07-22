// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a =37;
    int *ptr;

    ptr = &a;

    cout << "           The content of a is " << a << endl;
    cout << "    ptr is pointing to address " << ptr << endl;
    cout << "           The address of a is " << &a << endl;
    cout << "         The address of ptr is " << &ptr << endl;
    cout << "Where ptr is pointing, we have " << *ptr << endl;
    std::cout << std::endl << std::endl;
    return (0);
}
