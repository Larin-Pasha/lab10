#pragma once
#include "base.h"
#include <iostream>
using namespace std;

class storonu : public base {
public:

	storonu() {
		AB = 0;
		BC = 0;
		AC = 0;
	}

	void Read() {
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
		if (AB < BC + AC && BC < AC + AB && AC < AB + BC) 
		{
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

		else
			cout << "Трикутника не існує" << endl;
	}
};
