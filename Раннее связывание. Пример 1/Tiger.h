#pragma once

#include "ZOO.h"

class Tiger :
    public ZOO
{
public:

    void ShowArea(const double value1, const double value2);

void ShowArea(const double value1, const double value2)
{
    int tig, cout;

    cout << "������� ���������� ������:";
    cin >> tig;

    cout = tig * 1;

    cout << "���������� ������: " << cout << endl;
}