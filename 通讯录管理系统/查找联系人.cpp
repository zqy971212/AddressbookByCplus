#include "Header.h"


//4、查找联系人
void findperson(addressBooks* abs)
{
	string name;
	cout << "请输入你要查找的联系人" << endl;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->perArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->perArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->perArray[ret].m_Age << "\t";
		cout << "电话：" << abs->perArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->perArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
