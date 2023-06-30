#include<iostream>
int gcd(int x, int y)
{
	int i = x % y;
	if (i == 0)
		return y;
	else return gcd(y, i);

}
int main()
{
	int a, b, c;
	cout << "Please input 2 numbers:\n";
	cin >> a;
	while (a != 0)
	{
		cin >> b;
		c = gcd(a, b);
		cout << "GCD=" << c << endl;
		cout << "Please input 2 numbers:\n";
	}
}