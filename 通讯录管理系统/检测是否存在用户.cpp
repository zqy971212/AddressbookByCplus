#include "Header.h"

//�����ϵ���Ƿ���� ��������ֵ
int isExist(addressBooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->perArray[i].m_Name == name)
		{
			return i;  //�ҵ�������iֵ
		}
	}
	return -1;  //δ�ҵ�
}