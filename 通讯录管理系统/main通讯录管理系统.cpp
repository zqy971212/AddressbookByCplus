#include "Header.h"

int main()
{
	//初始化一个通讯录
	addressBooks abs;
	abs.m_size = 0;

	int sellect = 0;

	while (true)
	{
		showMenu();  	//菜单调用
		cin >> sellect;
		switch (sellect)
		{
		case 1:  //1、添加联系人
			addperson(&abs);
			break;
		case 2:  //2、显示联系人
			showperson(&abs);
			break;
		case 3:  // 3、删除联系人
			deleteperson(&abs);
			break;
		case 4:  //4、查找联系人
			findperson(&abs);
			break;
		case 5:  //5、修改联系人
			modifyperson(&abs);
			break;
		case 6:  //6、清空联系人
			cleanperson(&abs);
			break;
		case 0:  //0、退出联系人
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}