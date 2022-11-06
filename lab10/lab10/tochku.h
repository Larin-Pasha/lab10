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
		cout << "Введіть координати точок трикутника" << endl;
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
			cout << "AB = " << AB << " - трикутника не існує" << endl;
			else 
				if (BC <= 0)
					cout << "BC = " << BC << " - трикутника не існує" << endl;
				else 
					if (AC <= 0)
						cout << "AC = " << AC << " - трикутника не існує" << endl;
					else 
						if (AB > BC + AC || AC > AB + BC || BC > AB + AC)
							cout << "\nТрикутника не існує" << endl;
						else {
							cout << "AB = " << AB << " см." << endl;
							cout << "BC = " << BC << " см." << endl;
							cout << "AC = " << AC << " см." << endl;
							if (AB == BC)
								cout << "Трикутник рівнобедрений - AB = BC\t" << AB << " = " << BC << endl;
							else 
								if (AB == AC)
									cout << "Трикутник рівнобедрений - AB = AC\t" << AB << " = " << AC << endl;
								else 
									if (AC == BC)
										cout << "Трикутник рівнобедрений - AC = BC\t" << AC << " = " << BC << endl;
									else 
										if (AB == BC && AB == AC && BC == AC)
											cout << "Трикутник рівносторонній - сторони AB, BC i AC рівні між собою" << endl;
										else
											cout << "Трикутний довільний." << endl;
			cout << "Середня лінія NM (паралельна до BC)" << "\nNM = " << BC / 2 << " см." << endl;
			cout << "Медіана AK (до сторони AC)" << "\nAK = " << sqrt(pow(AB, 2) / 2 + pow(BC, 2) / 2 - pow(AC, 2) / 4) << " см." << endl;
		}
	}
};
