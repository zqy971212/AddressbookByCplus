#include "Header.h"
//2、显示联系人
void showperson(addressBooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "当前没有联系人" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名：" << abs->perArray[i].m_Name << "\t";
			cout << "性别：" << (abs->perArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->perArray[i].m_Age << "\t";
			cout << "电话：" << abs->perArray[i].m_Phone << "\t";
			cout << "住址：" << abs->perArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}