#include <iostream>
#include "CProgression.h"
using namespace std;

Progression makeProgression(const float &first, const float &second)
{
	return Progression(first, second);
}

int main()
{
	Progression pgr(13, 3.4);
	cout << pgr << endl;
	cout << "elementJ(5) = " << pgr.elementJ(5) << endl << endl;

	cout << "++pgr: " << ++pgr << endl;
	cout << "--pgr: " << --pgr << endl;
	cout << "pgr++: " << pgr++ << endl;
	cout << "pgr--: " << pgr-- << endl 
		<< endl;

	pgr = Progression(4, 1.1);
	cout << string(pgr) << endl 
		<< endl;

	pgr = Progression(4, 1.1);
	cout << "first = " << pgr.GetFirst() << endl;
	cout << "second = " << pgr.GetSecond() << endl 
		<< endl;

	cout << pgr << endl;
	pgr = makeProgression(1, 2);
	cout << "first = " << pgr.GetFirst() << endl;
	cout << "second = " << pgr.GetSecond() << endl 
		<< endl;

	cin >> pgr;
	cout << pgr 
		<< endl;

	return 0;
}