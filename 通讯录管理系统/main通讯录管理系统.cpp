#include "Header.h"

int main()
{
	//��ʼ��һ��ͨѶ¼
	addressBooks abs;
	abs.m_size = 0;

	int sellect = 0;

	while (true)
	{
		showMenu();  	//�˵�����
		cin >> sellect;
		switch (sellect)
		{
		case 1:  //1�������ϵ��
			addperson(&abs);
			break;
		case 2:  //2����ʾ��ϵ��
			showperson(&abs);
			break;
		case 3:  // 3��ɾ����ϵ��
			deleteperson(&abs);
			break;
		case 4:  //4��������ϵ��
			findperson(&abs);
			break;
		case 5:  //5���޸���ϵ��
			modifyperson(&abs);
			break;
		case 6:  //6�������ϵ��
			cleanperson(&abs);
			break;
		case 0:  //0���˳���ϵ��
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}