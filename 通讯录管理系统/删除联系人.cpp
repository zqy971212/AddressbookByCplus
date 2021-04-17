#include "Header.h"


//3、删除联系人
void deleteperson(addressBooks* abs)
{
	cout << "请输入你要删除的人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)  //ret==-1未查到
	{
		//查到此人，数据前移
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->perArray[i] = abs->perArray[i + 1];
		}
		abs->m_size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
