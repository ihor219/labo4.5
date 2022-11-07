#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;

		if ((x + x + y * y <= R * R && y >= 0) || (y >= -R && y <= x && x >= -R && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - R;
		y = 6. * rand() / RAND_MAX - R;
		if ((x + x + y * y <= R * R && y >= 0) || (y >= -R && y <= x && x >= -R && x <= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " "
			<< setw(8) << setprecision(4) << R << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " "
			<< setw(8) << setprecision(4) << R << " " << "no" << endl;

	}
	return 0;
}
