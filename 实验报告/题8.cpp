#include<iostream>
using namespace std;
int main()
{
	int a, b, c,d;
	cin >> a >> b;
	c = a > b ? a : b;
	while (c % a != 0 || c % b != 0)
	{
		c++;
	}
	cout <<"��С������="<< c << endl;
	d = a < b ? a : b;
	while(a%d!=0||b%d!=0)
	{
		d--;
	}
	cout << "���Լ��="<< d << endl;


	return 0;
}