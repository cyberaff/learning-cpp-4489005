// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

int main(){
    float flt;
    int32_t sng;
    uint32_t unsng;

    flt = -7.66;
    sng = flt; // jeden sposób rzutowania typów
    unsng = sng;

    cout << "There is a float " << flt << endl;
    cout << "There is a signed int " << sng << endl;
    cout << "There is a unsigned int " << (int32_t)unsng << endl; // drugi sposób rzutowania typów

    std::cout << std::endl << std::endl;
    return (0);
}
