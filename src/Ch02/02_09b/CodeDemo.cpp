// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    const size_t LENGHT1 = 25;

    char array_str1[LENGHT1] = "Hey guys! ";
    char array_str2[] = "Wats up?";

    string std_str1 = "Hi everybody! ";
    string std_str2 = "How's the going?";

    strncat(array_str1, array_str2, LENGHT1); // z języka c z biblioteki cstring
    cout << array_str1 << endl;
    cout << std_str1 + std_str2 << endl; // w c++ dajemy + jak w pythonie
    
    std::cout << std::endl << std::endl;
    return (0);
}
