// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;
    
    average = 0;
    // for loop - inicjalizujemy zmienną iteracyjną; warunek; inkrementacja;
    for (int i = 0; i < numbers.size(); i++)
    {
        average += numbers[i];
    }
    average /= numbers.size();

    std::cout << "Average: " << average << std::endl;

    // inny sposób zapisu pętli for
    average = 0;
    for (int x : numbers){
        average += x;
    }
    average /= numbers.size();

    std::cout << "Average: " << average << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
