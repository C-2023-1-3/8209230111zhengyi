#include<iostream>
using namespace std;
class student
{
private:
	int id;
	int score;

	friend class group;
};
class group
{
private:
	student arry[5];

public:
	//����������������
	void setvalue(group*pa)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "�����" << i + 1 << "��ѧ����id��";
			cin >> pa->arry[i].id;
			cout << "�����" << i + 1 << "��ѧ���ĳɼ���";
			cin >> pa->arry[i].score;
		}
	}
	
	//ѡ�������з����ߵģ����ѧ��
	void max(group*pa)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = i + 1; j < 5; j++)
			{
				if (pa->arry[i].score < pa->arry[j].score)
				{
					student temp;
					temp = pa->arry[i];
					pa->arry[i] = pa->arry[j];
					pa->arry[j] = temp;
				}
			}

		}
		cout << "�ɼ���ߵ�ѧ��idΪ��";
		cout << pa->arry[0].id << endl;
	}
};
/*int main()
{
	group aa;
	group *pa = &aa;
	aa.setvalue(pa);
	aa.max(pa);



	system("pause");
}*/