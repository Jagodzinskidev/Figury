#include <iostream>

#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

int main()
{
    Rectangle R1("R1", 2.0, 3.0);
    Rectangle R2("R2", 3.0, 4.0);
    Rectangle R3;
    Square S1("S1", 5.0);
    Circle C1("C1", 5.0);


    R1.Info();
    std::cout << std::endl;
    R2.Info();
    std::cout << std::endl;
    R3.Info();
    std::cout << std::endl;
    S1.Info();
    std::cout << std::endl;
    C1.Info();

    std::cout << "Wykorzystanie wskaznika" << std::endl;
    Figure* pointer_s = &S1;
    Figure* pointer_r = &R1;
    std::cout << std::endl;
    pointer_s->Info();
    std::cout << std::endl;
    pointer_r->Info();

    std::cout << "Wykorzystanie referencji" << std::endl;
    Figure& ref_s = S1;
    Figure& ref_r = R1;
    std::cout << std::endl;
    ref_s.Info();
    std::cout << std::endl;
    ref_r.Info();

}