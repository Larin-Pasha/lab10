#pragma once
#include "base.h"
#include <iostream>
using namespace std;

class tochku : public base {
public:

	tochku() {
		ax = 0;
		ay = 0;
		bx = 0;
		by = 0;
		cx = 0;
		cy = 0;
	}

	void Read() {
		cout << endl;
		cout << "������ ���������� ����� ����������" << endl;
		cout << "Ax =\t";
		cin >> ax;
		cout << "Ay =\t";
		cin >> ay;
		cout << "Bx =\t";
		cin >> bx;
		cout << "By =\t";
		cin >> by;
		cout << "Cx =\t";
		cin >> cx;
		cout << "Cy =\t";
		cin >> cy;
	}

	void calc() {
		AB = sqrt(pow((bx - ax), 2) - pow((by - ay), 2));
		BC = sqrt(pow((cx - bx), 2) - pow((cy - by), 2));
		AC = sqrt(pow((cx - ax), 2) - pow((cy - ay), 2));
		cout << endl;
		if (AB <= 0)
			cout << "AB = " << AB << " - ���������� �� ����" << endl;
			else 
				if (BC <= 0)
					cout << "BC = " << BC << " - ���������� �� ����" << endl;
				else 
					if (AC <= 0)
						cout << "AC = " << AC << " - ���������� �� ����" << endl;
					else 
						if (AB > BC + AC || AC > AB + BC || BC > AB + AC)
							cout << "\n���������� �� ����" << endl;
						else {
							cout << "AB = " << AB << " ��." << endl;
							cout << "BC = " << BC << " ��." << endl;
							cout << "AC = " << AC << " ��." << endl;
							if (AB == BC)
								cout << "��������� ������������ - AB = BC\t" << AB << " = " << BC << endl;
							else 
								if (AB == AC)
									cout << "��������� ������������ - AB = AC\t" << AB << " = " << AC << endl;
								else 
									if (AC == BC)
										cout << "��������� ������������ - AC = BC\t" << AC << " = " << BC << endl;
									else 
										if (AB == BC && AB == AC && BC == AC)
											cout << "��������� ������������ - ������� AB, BC i AC ��� �� �����" << endl;
										else
											cout << "��������� ��������." << endl;
			cout << "������� ��� NM (���������� �� BC)" << "\nNM = " << BC / 2 << " ��." << endl;
			cout << "������ AK (�� ������� AC)" << "\nAK = " << sqrt(pow(AB, 2) / 2 + pow(BC, 2) / 2 - pow(AC, 2) / 4) << " ��." << endl;
		}
	}
};
