#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

double h(const double a, const double b);

int main() {
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (pow(h(pow(t , 2),1),3)+h(1, t * pow(s, 2)))/(1+pow(h(s, t),2));
	cout << "c = " << c << endl;
	return 0;
}

double h(const double a, const double b) {
	return (pow(a , 2)*sin(b)+pow(b , 2)*cos(a));
}