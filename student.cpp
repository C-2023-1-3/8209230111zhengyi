//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"    //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(Student* const p)
{

    cout << "������num��" << '\n';
    cin >> p->num;
    cout << "������name��" << '\n';
    cin >> p->name;
    cout << "������sex(����m��ʾ��Ů��f��ʾ����" << '\n';
    cin >> p->sex;
    if (p->sex != 'm' && p->sex != 'f')
    {
        cout << "�����Ա����" << endl;
    }
}