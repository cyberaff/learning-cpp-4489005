#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> str;
    std::cout << "Hello " << str << std::endl << std::endl;


    return 0;
}