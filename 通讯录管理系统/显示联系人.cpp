#include "Header.h"
//2����ʾ��ϵ��
void showperson(addressBooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "��ǰû����ϵ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "������" << abs->perArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->perArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->perArray[i].m_Age << "\t";
			cout << "�绰��" << abs->perArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->perArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}