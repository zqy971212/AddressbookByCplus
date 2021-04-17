#include "Header.h"
//6、清空联系人
void cleanperson(addressBooks* abs)
{
	cout << "你确定要删除所有的联系人吗？" << endl;
	cout << "1、确定" << endl;
	cout << "0、否" << endl;

	while (true)
	{
		int select;
		cin >> select;
		if (select == 1)
		{
			abs->m_size = 0;  //将当前通讯录的人数置为0即可清空人数
			cout << "通讯录清空成功" << endl;
			break;
		}
		if (select == 0)
		{
			break;
		}
		cout << "请输入正确的指令" << endl;
	}

	system("pause");
	system("cls");
}
