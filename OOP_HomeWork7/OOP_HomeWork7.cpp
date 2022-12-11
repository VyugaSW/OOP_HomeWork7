
#include <Windows.h>
#include <iostream>
#include "Overcoat.h"
int main()
{
    //С квартирами тот же код лишь с изменением имен и толикой технический перемен,
    //Поэтому, проверите сами :)
    Overcoat a1((char*)"coat",200);
    Overcoat a2((char*)"jacket",70);
    if (a1 == a2)
        std::cout << "TRUE\n";
    else
        std::cout << "FALSE\n";

    a1 = a2;
    std::cout << a1.getCloth() << std::endl;

    if (a1 > a2)
        std::cout << "TRUE\n";
    else
        std::cout << "FALSE\n";
}

