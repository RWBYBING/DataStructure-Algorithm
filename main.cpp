#include <iostream>
#include <string>

int main(int, char**)
{
    std::cout << "Choose the specific vector and algorithm" << std::endl;
    int index;
    std::cin >> index;
    switch (index)
    {
    case 0:
        std::cout << "vector" << std::endl;
        break;
    
    default:
        break;
    }
}