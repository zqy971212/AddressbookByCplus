#include "Header.h"


//5���޸���ϵ��
void modifyperson(addressBooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//����
		cout << "��������Ҫ�޸ĵ�����" << endl;
		string name;
		cin >> name;
		abs->perArray[ret].m_Name = name;
		//�Ա�
		cout << "��������Ҫ�޸ĵ��Ա�" << endl;
		cout << "1����" << endl;
		cout << "2��Ů" << endl;
		while (true)
		{
			int sex;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->perArray[ret].m_Sex = sex;
				break;
			}
			cout << "��������ȷ���Ա�	" << endl;
		}

		//����
		cout << "��������Ҫ�޸ĵ�����" << endl;
		while (true)
		{
			int age = 0;
			cin >> age;
			if (age >= 0)
			{
				abs->perArray[ret].m_Age = age;
				break;
			}
			cout << "���������������" << endl;
		}

		//�绰
		cout << "��������Ҫ�޸ĵĵ绰����" << endl;
		string phone;
		cin >> phone;
		abs->perArray[ret].m_Phone = phone;

		//��ַ
		cout << "��������Ҫ�޸ĵĵ�ַ" << endl;
		string addr;
		cin >> addr;
		abs->perArray[ret].m_Addr = addr;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}