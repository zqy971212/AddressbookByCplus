#include "Header.h"


//4��������ϵ��
void findperson(addressBooks* abs)
{
	string name;
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->perArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->perArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->perArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->perArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->perArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
