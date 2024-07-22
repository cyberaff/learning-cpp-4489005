// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

using namespace std;
int main(){
    vector<cow> obora;

    obora.push_back(cow("Haidi", 3, cow_purpose::meat)); 
    obora.push_back(cow("Henia", 5, cow_purpose::hide));
    obora.push_back(cow("Genia", 2, cow_purpose::dairy));
    obora.push_back(cow("Klara", 10, cow_purpose::pet));
    
    //pobieramy imię po iteratorze begin
    cout << "The first cow is " << obora.begin()->get_name() << endl;

    //pobieramy imię po indeksie
    cout << "The second cow is " << obora[1].get_name() << endl;

    //pobieramy imię po iteratorze prev
    cout << "The next to last cow is " << prev(obora.end(), 2)->get_name() << endl;

    //pobieramy imię po iteratorze end
    cout << "The last cow is " << (obora.end() -1)->get_name() << endl;
    std::cout << std::endl << std::endl;
    return (0);
}
