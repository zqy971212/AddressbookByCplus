#include "Header.h"


//1�������ϵ��
void addperson(addressBooks* abs)
{
	//�ж�ͨѶ¼�Ƿ���Ա
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷�������ӣ�" << endl;
		return;
	}
	else
	{
		//�����ϵ��
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->perArray[abs->m_size].m_Name = name;

		//�Ա�
		int sex;
		cout << "�������Ա�" << endl;
		cout << "1����" << endl;
		cout << "2��Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->perArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "��������ȷ���Ա�" << endl;
		}

		//����
		int age = 0;
		cout << "����������" << endl;
		while (true)
		{
			cin >> age;
			if (age >= 0)
			{
				abs->perArray[abs->m_size].m_Age = age;
				break;
			}
			cout << "��������ȷ�����䣡" << endl;
		}

		//��ϵ�绰
		string phone;
		cout << "��������ϵ�绰" << endl;
		cin >> phone;
		abs->perArray[abs->m_size].m_Phone = phone;

		//��ͥסַ
		string addr;
		cout << "�������ͥסַ" << endl;
		cin >> addr;
		abs->perArray[abs->m_size].m_Addr = addr;

		//��������
		abs->m_size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");  //��������
	}
}