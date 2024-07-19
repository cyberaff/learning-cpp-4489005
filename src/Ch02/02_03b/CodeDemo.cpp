// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int a, b = 5; 
/*
zmienne tego samego typu możemy deklarwać w tej 
samej linii
*/ 

int main(){
    bool my_flag;
    a =7;
    my_flag = false;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "flag = " << my_flag << endl << endl;
    
    my_flag = true; // nadpisanie zmiennej
    cout << "flag = " << my_flag << endl;
    cout << "a + b = " << a + b << endl;
    cout << "b - a = " << b - a  << endl << endl;

    unsigned int positive;
    positive = b - a;
    cout << "b - a (unsigned) = " << positive << endl << endl; 


    return (0);
}
