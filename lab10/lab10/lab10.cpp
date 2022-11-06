/*
1. Визначте абстрактний клас трикутників і дві його реалізації: за трьома вершинами і за трьома сторонами.
2. Доповніть клас трикутників конструктором за основами його трьох
медіан. Реалізуйте метод обчислення довільної медіани трикутника.
3. За довільною стороною трикутника знайдіть паралельну їй середню
лінію.
4. Визначте ієрархію трикутник-прямокутний трикутник. Реалізуйте
функції обчислення довжин радіусів вписаного і описаного кіл.
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
