#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	Time(){}
	void input(Time& input_t)//������������
	{
		Time temp;
		cout << "����hour:" << '\t';
		cin >> temp.hour;
		if (temp.hour > 23 || temp.hour < 0)
		{
			cout << "�������" << endl;
			system("pause");
		}
		cout << "����minute:" << '\t';
		cin >> temp.minute;
		if (temp.minute < 0 || temp.minute>60)
		{
			cout << "�������" << endl;
			system("pause");
		}
		cout << "����sec:" << '\t';
		cin >> temp.sec;
		if (temp.sec < 0 || temp.sec>60)
		{
			cout << "�������" << endl;
			system("pause");
		}
		input_t = temp;


	}
	void output(Time output_t)//�������
	{
		cout << output_t.hour <<":";
		cout << output_t.minute << ":";
		cout << output_t.sec << endl;


	}
};
int main()
{
	Time tl;    //����t1ΪTime�����

	tl.input(tl);

	tl.output(tl);
	return 0;
}