/*
1. �������� ����������� ���� ���������� � �� ���� ���������: �� ������ ��������� � �� ������ ���������.
2. �������� ���� ���������� ������������� �� �������� ���� �����
�����. ��������� ����� ���������� ������� ������ ����������.
3. �� �������� �������� ���������� ������� ���������� �� �������
���.
4. �������� �������� ���������-����������� ���������. ���������
������� ���������� ������ ������ ��������� � ��������� ��.
*/

#include <Windows.h>
#include <iostream>
#include "prymuycyt.h"
#include "base.h"
#include "tochku.h"
#include "storonu.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    base* one = new storonu();
    one->Read();
    one->calc();

    base* two = new tochku();
    two->Read();
    two->calc();

    base* three = new prymuycyt();
    three->Read();
    three->calc();

    return 0;
}
