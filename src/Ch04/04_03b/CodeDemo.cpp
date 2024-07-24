// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    
    // std::vector<int>::iterator ptr = numbers.begin();
    // zamiast deklarować zmienną std::vector<int>::iterator możemy użyć typu auto
    auto ptr = numbers.begin(); // zaczynamy iterować od początku listy

    // pętla while
    while (ptr != numbers.end()){
        std::cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    std::cout << std::endl;

    // pętla do - while konstrukcja "do something whie condition"
    int i = 0;
    do{  // określamy co ma tu robić pętla
        std::cout << numbers[i] << " ";
        i++;
    }while (i < numbers.size()); // tu określamy warunek do kiedy ma ta pętla działać
    std::cout << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
