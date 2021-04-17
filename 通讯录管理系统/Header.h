#pragma once
#include <iostream>
#include <string>
using namespace std;
#define MAX 1000


//人结构体
struct person
{
	string m_Name; 	//姓名

	int m_Sex; 	//性别 1.男 2.女

	int m_Age; 	//年龄

	string m_Phone; //电话

	string m_Addr;  //住址
};

//通讯录的结构体
struct addressBooks
{
	person perArray[MAX];  //保存的联系人组数
	int m_size;  //通讯录中当前人员个数
};

void showMenu();
int isExist(addressBooks* abs, string name);
void addperson(addressBooks* abs);
void showperson(addressBooks* abs);
void deleteperson(addressBooks* abs);
void findperson(addressBooks* abs);
void modifyperson(addressBooks* abs);
void cleanperson(addressBooks* abs);