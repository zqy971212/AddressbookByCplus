#pragma once
#include <iostream>
#include <string>
using namespace std;
#define MAX 1000


//�˽ṹ��
struct person
{
	string m_Name; 	//����

	int m_Sex; 	//�Ա� 1.�� 2.Ů

	int m_Age; 	//����

	string m_Phone; //�绰

	string m_Addr;  //סַ
};

//ͨѶ¼�Ľṹ��
struct addressBooks
{
	person perArray[MAX];  //�������ϵ������
	int m_size;  //ͨѶ¼�е�ǰ��Ա����
};

void showMenu();
int isExist(addressBooks* abs, string name);
void addperson(addressBooks* abs);
void showperson(addressBooks* abs);
void deleteperson(addressBooks* abs);
void findperson(addressBooks* abs);
void modifyperson(addressBooks* abs);
void cleanperson(addressBooks* abs);