#include<iostream>
using namespace std;
class Cuboid
{
private:
	int length;
	int width;
	int high;
	int V;
public:
	void setvalue(Cuboid*p)
	{
		cout << "���볤����ĳ���";
		cin >> p->length;
		cout << "���볤����Ŀ�";
		cin >> p->width;
		cout << "���볤����ĸߣ�";
		cin >> p->high;


	}
	void calculate(Cuboid*p)
	{
		
		p->V = p->length * p->width * p->high;
	}

	void display(Cuboid temp)
	{
		cout << temp.V << endl;;


	}


};
/*int main()
{
	//����
	Cuboid a,b,c;
	Cuboid* pa = &a;
	Cuboid* pb = &b;
	Cuboid* pc = &c;
	//��ֵ
	cout << "�����һ�������������" << endl;
	a.setvalue(pa);
	cout << "����ڶ��������������" << endl;
	a.setvalue(pb);
	cout << "��������������������" << endl;
	a.setvalue(pc);
	//����
	a.calculate(pa);
	a.calculate(pb);
	a.calculate(pc);
	//���
	cout << "��һ������������Ϊ��";
	a.display(a);
	cout << "�ڶ�������������Ϊ��";
	a.display(b);
	cout << "����������������Ϊ��";
	a.display(c);
}*/