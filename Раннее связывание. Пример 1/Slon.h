#pragma once

#include "ZOO.h"

class Slon :
    public ZOO
{
public:

    void ShowArea(const double value1,const double value2);

};


void Slon::ShowArea(const double value1, const double value2)
{
    int sln, cout;

    cout << "������� ���������� ������:";
    cin >> sln;

    cout = sln * 1;

    cout << "���������� ������: " << cout << endl;
}