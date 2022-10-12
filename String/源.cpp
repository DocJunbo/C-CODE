#include <iostream>
#include <string>
using namespace std;

void strtypr4(void);

int main()
{
	cout << "C++ START" << endl;

	strtypr4();

	return 0;
}

void strtypr4(void)
{
	char charr[20];
	string str;

	cout << "Length of string in charr before input:" << strlen(charr) << endl;
		
	cout << "Length of string in str before input:" << str.size() << endl;
		
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);	// indicate maximun length	表示最大长度
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of the text:\n";
	getline(cin, str);	// cin now an argument;no length specifier
	cout << "You entered: " << str << endl;
	cout << "Length of string in charr after input:" << strlen(charr) << endl;
		
	cout << "Length of string in str after input:" << str.size() << endl;
}
