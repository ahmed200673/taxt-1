#include <iostream >
#include <math.h>
using namespace std;
int main() {

	double x, y, z;
	char sign, sign2;
	cout << " enter the equation :" << endl;
	cin >> x >> sign >> y >> sign2 >> z;

		 if (sign == '+' && sign2 == '+') { cout << x << "+" << y << "+" << z << "=" << x + y + z << endl; }//1

			else if (sign == '-' && sign2 == '-') { cout << x << "-" << y << "-" << z << "=" << x - y - z << endl; }//1

				else if (sign == '*' && sign2 == '*') { cout << x << "*" << y << "*" << z << "=" << x * y * z << endl; }//1
	
					else if (sign == '/' && sign2 == '/') { cout << x << "/" << y << "/" << z << "=" << x / y / z << endl; }//1

						else if (sign == '+' && sign2 == '-') { cout << x << "+" << y << "-" << z << "=" <<x + y - z << endl; }//1

							else if (sign == '-' && sign2 == '+') { cout << x << "-" << y << "+" << z << "=" << x - y + z << endl; }//1

								else if (sign == '+' && sign2 == '*') { cout << x << "+" << y << "*" << z << "=" << x+ y * z << endl; }//1

									else if (sign == '*' && sign2 == '+') { cout << x << "*" << y << "+" << z << "=" << x * y + z << endl; }//1

								else if (sign == '*' && sign2 == '/') { cout << x << "*" << y << "/" << z << "=" << x * y / z << endl; }//1

							else if (sign == '/' && sign2 == '*') { cout << x << "/" << y << "*" << z << "=" << z / y * z << endl; }//1

						else if (sign == '*' && sign2 == '-') { cout << x << "*" << y << "-" << z << "=" << z * y - z << endl; }//1

					else if (sign == '-' && sign2 == '*') { cout << x << "-" << y << "*" << z << "=" << x - y * z << endl; }//1

				else if (sign == '+' && sign2 == '/') { cout << x << "+" << y << "/" << z << "=" << x + y / z << endl; }//1

			else if (sign == '/' && sign2 == '+') { cout << x << "/" << y << "+" << z << "=" <<x / y + z << endl; }//1

		else if (sign == '/' && sign2 == '-') { cout << x << "/" << y << "-" << z << "=" << x / y - z << endl; }//1

	else if (sign == '-' && sign2 == '/') { cout << x << "-" << y << "/" << z << "=" << x - y / z << endl; }//1

		 














	return 0;

}
