#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class cString
{

private:
	char* mBuff;
	int len;
public:
	cString();
	cString(char*);
	cString(char*, int);
	cString(cString&);
	void setmBuff(char*);
	char* getmBuff();
	void accept();
	void display();
	~cString();
};