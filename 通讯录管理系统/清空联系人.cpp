#include "Header.h"
//6�������ϵ��
void cleanperson(addressBooks* abs)
{
	cout << "��ȷ��Ҫɾ�����е���ϵ����" << endl;
	cout << "1��ȷ��" << endl;
	cout << "0����" << endl;

	while (true)
	{
		int select;
		cin >> select;
		if (select == 1)
		{
			abs->m_size = 0;  //����ǰͨѶ¼��������Ϊ0�����������
			cout << "ͨѶ¼��ճɹ�" << endl;
			break;
		}
		if (select == 0)
		{
			break;
		}
		cout << "��������ȷ��ָ��" << endl;
	}

	system("pause");
	system("cls");
}
