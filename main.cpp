#include <iostream>


int main() {
    std::string userName;
    std::cout << "Tell me your nickname?: ";
    std::getline(std::cin, userName); //it takes space in input
    std::cout << "Hello " << userName << "\n";
    return 0;
}