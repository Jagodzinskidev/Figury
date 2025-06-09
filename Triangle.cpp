//
// Created by student on 09.06.2025.
//

#include "Triangle.h"

Triangle::Triangle(string name, float a) : Figure(name)
{
    m_a = a;
}

float Triangle::Area() const
{
    return m_area;
}

float Triangle::Perimeter() const
{
    return m_perimeter;
}

void Triangle::Info() const
{
    cout << "Rectangle: " << Name() << endl;
    cout << "Sides length: " << m_a << endl;
    cout << "Area: " << m_area << endl;
    cout << "Perimeter: " << m_perimeter << endl;
}