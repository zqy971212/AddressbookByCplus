#include "Header.h"

//检测联系人是否存在 并返回数值
int isExist(addressBooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->perArray[i].m_Name == name)
		{
			return i;  //找到并返回i值
		}
	}
	return -1;  //未找到
}