#include<iostream>
using namespace std;
int main()
{
	cout << "+ / - *" << endl;
	short a = 12;
	short b = 6;
	cout << "��a��ֵ" << endl;
	cin >> a;
	cout << "��b��ֵ" << endl;
	cin >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	short c = 21;
	short d = 88;
	cout << "��c��ֵ" << endl;
	cin >> c;
	cout << "��d��ֵ" << endl;
	cin >> d;
	cout << c << "/" << d << "=" << c / d << "......." << c % d << endl;
	short e = 44;
	short f = 87;
	cout << "��e��ֵ" << endl;
	cin >> e;
	cout << "��f��ֵ" << endl;
	cin >> f;
	cout << e << "-" << f << "=" << e - f << endl;
	short s = 33;
	short l = 87;
	cout << "��s��ֵ" << endl;
	cin >> s;
	cout << "��l��ֵ" << endl;
	cin >> l;
	cout << s << "*" << l << "=" << s * l << endl;
	system("pause");
	return 0;
}