#include"cString.h"

cString::cString()
{
	this->len = 0;
	this->mBuff = new char[1];
	strcpy(this->mBuff,"\0");
}
cString::cString(char* str)
{
	this->len = strlen(str);
	this->mBuff = new char[this->len + 1];
	strcpy(this->mBuff, str);
}
cString::cString(char* str, int len)
{
	//this->len = strlen(str);
	this->mBuff = new char[len + 1];
	strcpy(this->mBuff, str);
}
cString::~cString()
{
	if (this->mBuff != NULL)
	{
		delete[] this->mBuff;
		this->mBuff = NULL;
	}
	cout << "\ncString class destructor....";
	_getch();
}
void cString::setmBuff(char* str)
{
	if (this->mBuff != NULL)
	{
		delete[] this->mBuff;
		this->mBuff = NULL;
	}
	this->len = strlen(str);
	this->mBuff = new char[this->len + 1];
	strcpy(this->mBuff, str);
}
char* cString::getmBuff()
{
	return this->mBuff;
}

void cString::accept()
{
	char temp[20];
	cout << "\nEnter a String: ";
	cin >> temp;
	if (this->mBuff != NULL)
	{
		delete[] this->mBuff;
		this->mBuff = NULL;
	}
	this->len = strlen(temp);
	this->mBuff = new char[this->len + 1];
	strcpy(this->mBuff, temp);
}

void cString::display()
{
	cout << "\n The String is : " << this->mBuff;
}

cString::cString(cString& cs)
{
	this->len = strlen(cs.mBuff);
	this->mBuff = new char[this->len + 1];
	strcpy(this->mBuff, cs.mBuff);
}