#include <iostream>

#include "ZOO.h"

using namespace std;

void ZOO::SetDimension(const double value1)
{
    SetDimension(value1, value1);
}

void ZOO::SetDimension(const double value1, const double value2)
{
    m_value1 = value1;
    m_value2 = value2;
}

void ZOO::ShowArea() const
{
    cout << "Cout animals" << endl;
}