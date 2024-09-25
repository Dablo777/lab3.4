#include <iostream>
#ifndef M_PI
#define M_PI 3.14159265358979323846  // Оголошуємо значення M_PI, якщо його немає
#endif

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if (((y <= (M_PI) / 2) && (y >= (M_PI / 4))) || ((y <= (3 * M_PI) / 2) && (y >= (5 * M_PI) / 4)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
