#include"head.h"
//�����Լ��
int GCD(int m, int n)
{
	int t;
	t = m > n ? n : m;
	while (m % t != 0 || n % t != 0)
	{
		t--;
	}

	cout << "���Լ��Ϊ" << t << endl;
	return t;
}
//�����Լ������С������
int GL(int& m, int& n)
{
	int t;
	t = m > n ? n : m;
	while (m % t != 0 || n % t != 0)
	{
		t--;
	}

	cout << "���Լ��Ϊ" << t << endl;
	int k;
	k = m > n ? m : n;
	while (k % m != 0 || k % n != 0)
	{
		k++;
	}
	cout << "��С��Լ��Ϊ" << k << endl;
	return t, k;
}
int main()
{
	int m, n;
	cout << "������Ȼ��m,n " << endl;
	cout << "m= ";
	cin >> m;
	cout << "������Ȼ��m,n" << endl;
	cout << "n= ";
	cin >> n;
	GCD(m, n);
	GL(m, n);
	system("pause");
	system("cls");
}