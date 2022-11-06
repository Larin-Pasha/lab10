#pragma once
#include "base.h"
using namespace std;

class prymuycyt : public base {
	float R, r;

public:

	prymuycyt() {
		AB = 0;
		BC = 0;
		AC = 0;
		R = 0;
		r = 0;
	}

	void Read() {
		cout << endl;
		cout << "Введіть сторони трикутника" << endl;
		cout << "AB = ";
		cin >> AB;
		cout << "BC = ";
		cin >> BC;
		cout << "AC = ";
		cin >> AC;
		cout << endl;
	}

	void calc() {
		if (AB < BC + AC && BC < AC + AB && AC < AB + BC) {
			if (AB == sqrt(pow(AC, 2) + pow(BC, 2))) {
				cout << "Гіпотенуза - сторона AB з довжиною " << AB << " см." << endl;
				R = AB / 2;
				r = (BC + AC - AB) / 2;
				cout << "Радіус описаного кола R = " << R << " см." << endl;
				cout << "Радіус вписаного кола r = " << r << " см." << endl;
			}
			else if (AC == sqrt(pow(AB, 2) + pow(BC, 2))) {
				cout << "Гіпотенуза - сторона AC із довжиною " << AC << " см." << endl;
				R = AC / 2;
				r = (AB + BC - AC) / 2;
				cout << "Радіус описаного кола R = " << R << " см." << endl;
				cout << "Радіус вписаного кола r = " << r << " см." << endl;
			}
			else if (BC == sqrt(pow(AC, 2) + pow(AB, 2))) {
				cout << "Гіпотенуза - сторона BC із довжиною " << BC << " см." << endl;
				R = BC / 2;
				r = (AB + AC - BC) / 2;
				cout << "Радіус описаного кола R = " << R << " см." << endl;
				cout << "Радіус вписаного кола r = " << r << " см." << endl;
			}
			else
				cout << "Трикутник не прямокутний." << endl;
		}

		else
			cout << "Трикутника не існує" << endl;
	}
};
