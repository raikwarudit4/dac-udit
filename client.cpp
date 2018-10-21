#include"cString.h"
char name2[20] = "Persistent";
cString s3(name2);


void main()
{
	int len;
	cString s1;
	s1.display();
	char str1[20] = "www";
	cString s2(str1);
	s2.display();
	char str2[20] = "Infosys";
	s1.setmBuff(str2);
	cout << "\nThe string of s2: " << s1.getmBuff();
	s2.accept();
	s2.display();

	s3.display();
	cString s4(s3);
	s4.display();
	char str3[] = "google doogle";
	cString *s5 = new cString(str3);
	s5->display();
	delete s5;

	len = strlen(str3);
	cString s6(str3,len);
	s6.display();

	_getch();
}