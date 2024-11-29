#include <iostream>
using namespace std;
string str;
int size;
void calculateSize();
bool checker();
int main()
{
	cout << "Enter a string: ";
	cin >> str;

	calculateSize();
	if(checker())
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"false";
	}
	return 0;
	
}
void calculateSize()
{
	size = str.length();
}
bool checker()
{
	bool check = false;
	if (size % 2 == 0)
	{
		check = true;
	}
	return check;
}
