#include"head.h"
void sort( int arr[],int n)
{
	for(int i=0;i<n;i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem;
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;

			}
		}



}
/*int main()
{
	int n;
	cout << "��������Ԫ�صĸ�����";
	cin >> n;
	int* arr = new int[n];
	cout << "��������Ԫ��Ϊ��";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr,n);
	cout << "���к������Ϊ��";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}

	system("pause");
}*/