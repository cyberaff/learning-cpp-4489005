// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>
using namespace std;

int main(){
    int a = 1023;
    bool flag = 0;
    char lttr = 'd';

    if (a > 1000)
        // jeżeli warunek jest jednoliniowy to nie musi być {}
        cout << "Warning: a is over 1000." << endl;

    if (a % 2) // nie musimy waruku porównywać z 0 bo w c++ 0 to fałsz
    // ten zapis jest równy z ((a % 2) == 0)
        cout << "a is odd" << endl;
    else
        cout << "a is even" << endl;

    //Instrukcję warunkową możemy zapisać również w taki sposób:
    cout << "The letter " << lttr << " is ";
    if (lttr != 'a' && lttr != 'A' && 
        lttr != 'e' && lttr != 'E' &&
        lttr != 'i' && lttr != 'I' && 
        lttr != 'o' && lttr != 'O' && 
        lttr != 'u' && lttr != 'U')
        cout << "not";
    cout << " a vowel." << endl;

    if (flag)
        cout << "The flag is true!" << endl;
    else
        cout << "The flag is false!" << endl;

    std::cout << std::endl << std::endl;
    return (0);
}
