#include "Header.h"


//5、修改联系人
void modifyperson(addressBooks* abs)
{
	cout << "请输入你要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//姓名
		cout << "请输入你要修改的姓名" << endl;
		string name;
		cin >> name;
		abs->perArray[ret].m_Name = name;
		//性别
		cout << "请输入你要修改的性别" << endl;
		cout << "1、男" << endl;
		cout << "2、女" << endl;
		while (true)
		{
			int sex;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->perArray[ret].m_Sex = sex;
				break;
			}
			cout << "请输入正确的性别！	" << endl;
		}

		//年龄
		cout << "请输入你要修改的年龄" << endl;
		while (true)
		{
			int age = 0;
			cin >> age;
			if (age >= 0)
			{
				abs->perArray[ret].m_Age = age;
				break;
			}
			cout << "你输入的年龄有误！" << endl;
		}

		//电话
		cout << "请输入你要修改的电话号码" << endl;
		string phone;
		cin >> phone;
		abs->perArray[ret].m_Phone = phone;

		//地址
		cout << "请输入你要修改的地址" << endl;
		string addr;
		cin >> addr;
		abs->perArray[ret].m_Addr = addr;

		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}