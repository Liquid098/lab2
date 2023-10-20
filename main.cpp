#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
	cout << "\n Inteder24. \n";
	setlocale(LC_ALL, "Russian");

	int K, m;
	cout << "K:";
	cin >> K;
	cout << endl;

	m = K % 7;
	cout << "номер дня недели:" << m;

	cout << "\n Boolean30. \n";
	float a, b, c;
	cout << "a:";
	cin >> a;

	cout << "b:";
	cin >> b;

	cout << "c:";
	cin >> c;

	cout << ((a == b) & (a == c) & (b == c)) << endl;

	cout << "\n Mathematics22. \n";
	float x, y, y1, y2, cx;
	cin >> x;
	cx = cos(x);
	y1 = log(abs(x)) * sqrt(abs(pow(x,2) * pow(sin(x),3) * sqrt(cx)));
	y2 = cx + 1.0 / 5.0 * sqrt(2 * x + sqrt(5 * x));
	y = 1.0 / 4.0 * y1 / y2;
	cout << y;

	return 0;
}
