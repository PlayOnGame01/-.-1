#pragma once

#include "ZOO.h"

class Pingvin :
    public ZOO
{
public:

    void ShowArea(const double value1, const double value2);
};

void Pingvin::ShowArea(const double value1, const double value2)
{
    int png, cout;

    cout << "������� ���������� ���������:";
    cin >> png;

    cout = png * 1;

    cout << "���������� ���������: " << cout << endl;
}