#include <iostream>
#include <string>
#include <windows.h>

#include "greeter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);

    Greeter greeter;
    std::cout << greeter.greet(name) << std::endl;

    return 0;
}
