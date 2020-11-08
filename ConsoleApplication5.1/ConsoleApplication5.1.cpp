#include<iostream>
using namespace std;
int sum(int x, int y)
{
	return x + y;
}
int main()
{
	double p, s;
	cout << "p="; cin >> p;
	cout << "s="; cin >> s;
	int c = sum(p, s);
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}