// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

// Preprocesory
#define CAPACITY 5000
#define DEBUG // Definicja preprocesora przydatnego do debugowania kodu

using namespace std;

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
// ifdef - warunek jeżeli preprocesor jest zdefiniowany to ta częć kodu jest wykonywana
#ifdef DEBUG 
    cout << "[About to perform the addition" << endl;
#endif
    large += small; // ekwiwalent dla zpisu large = large + small
    cout << "The large integer is " << large << endl;

    std::cout << std::endl << std::endl;
    return (0);
}
