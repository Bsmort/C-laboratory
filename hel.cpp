#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name; 
	int number;
	
	cout << "Hi, what's your name?" << endl;
	cin >> name;
	
	cout << "And how many personalities do you have?" << endl;
	cin >> number; 
	
	for (int i = 0; i < number; i++)
	{
	    cout << "Nice to meet you, " << name << endl;
	}
	 
	return 0;
}
