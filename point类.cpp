#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	//���캯��
	point(int i=60,int j=80)
	{
		x = i;
		y = j;

	}
	void setPoint(int i, int j)//������ֵ�޸�Ϊ(60+i,80+j)
	{
		x = x + i;
		y = y + j;

	}
	void display(point a)
	{
		cout << "(" << a.x<<"," << a.y << ")" << endl;
	}




};
int main()
{
	int i, j;
	point a;
	cout << "����i=";
	cin >> i;
	cout << "����j=";
	cin >> j;
	a.setPoint(i, j);
	a.display(a);





	system("pause");
}