#include "Header.h"


//3��ɾ����ϵ��
void deleteperson(addressBooks* abs)
{
	cout << "��������Ҫɾ������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)  //ret==-1δ�鵽
	{
		//�鵽���ˣ�����ǰ��
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->perArray[i] = abs->perArray[i + 1];
		}
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
