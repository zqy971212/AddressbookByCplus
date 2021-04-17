#include "Header.h"


//1、添加联系人
void addperson(addressBooks* abs)
{
	//判断通讯录是否满员
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法继续添加！" << endl;
		return;
	}
	else
	{
		//添加联系人
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->perArray[abs->m_size].m_Name = name;

		//性别
		int sex;
		cout << "请输入性别" << endl;
		cout << "1、男" << endl;
		cout << "2、女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->perArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "请输入正确的性别" << endl;
		}

		//年龄
		int age = 0;
		cout << "请输入年龄" << endl;
		while (true)
		{
			cin >> age;
			if (age >= 0)
			{
				abs->perArray[abs->m_size].m_Age = age;
				break;
			}
			cout << "请输入正确的年龄！" << endl;
		}

		//联系电话
		string phone;
		cout << "请输入联系电话" << endl;
		cin >> phone;
		abs->perArray[abs->m_size].m_Phone = phone;

		//家庭住址
		string addr;
		cout << "请输入家庭住址" << endl;
		cin >> addr;
		abs->perArray[abs->m_size].m_Addr = addr;

		//更新人数
		abs->m_size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");  //清屏操作
	}
}