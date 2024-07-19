// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

int main(){
    int farenheit = 100;
    int celsius;

    celsius = ((float)5 / 9.0) * (farenheit - 32); // casting int na float

    cout << "farenheit: " << farenheit << endl;
    cout << "Celsius  : " << celsius << endl << endl;

    float weight = 10.99;

    cout << "Weight = " << weight << endl;
    cout << "Float part      : " << weight << endl;
    cout << "Integer part    : " << (int)weight << endl;
    cout << "Fractional part : " << (int)((weight - (int)weight) * 1000000000) << endl;

    std::cout << std::endl << std::endl;
    return (0);
}
