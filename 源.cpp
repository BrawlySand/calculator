#include<iostream>
using namespace std;
int main()
{
	cout << "+ / - *" << endl;
	short a = 12;
	short b = 6;
	cout << "给a赋值" << endl;
	cin >> a;
	cout << "给b赋值" << endl;
	cin >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	short c = 21;
	short d = 88;
	cout << "给c赋值" << endl;
	cin >> c;
	cout << "给d赋值" << endl;
	cin >> d;
	cout << c << "/" << d << "=" << c / d << "......." << c % d << endl;
	short e = 44;
	short f = 87;
	cout << "给e赋值" << endl;
	cin >> e;
	cout << "给f赋值" << endl;
	cin >> f;
	cout << e << "-" << f << "=" << e - f << endl;
	short s = 33;
	short l = 87;
	cout << "给s赋值" << endl;
	cin >> s;
	cout << "给l赋值" << endl;
	cin >> l;
	cout << s << "*" << l << "=" << s * l << endl;
	system("pause");
	return 0;
}