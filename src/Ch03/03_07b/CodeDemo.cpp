// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){ 
    // Wskaźnik dla nowego obiektu klasy cow
    cow *my_cow;
    // Aby odnieść się do metod dla wskaźnika używamy operatora ->
    // tworzenie nowego obiektu za pomocą new
    my_cow = new cow("Genia", 3, cow_purpose::hide);
    std::cout << my_cow -> get_name() << " is a type-" << (int) my_cow -> get_purpose() << " cow." << std::endl;
    std::cout << my_cow -> get_name() << " is " << my_cow -> get_age() << " years old." << std::endl;

    // Usuwanie dynamicznie stworzonego obiektu jak już nie jest potrzebny w celu uwolnienia pamięci
    delete my_cow;
    
    std::cout << std::endl << std::endl;
    return (0);
}
