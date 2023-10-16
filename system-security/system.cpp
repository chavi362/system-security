#include <iostream>
#include <fstream>
#include <sstream>

#include <string>
using namespace std;

int main()
{
	int a, i = 0, age;
	string text, old, password, password2, pass, name, user, word, word1;
	string creds[2], cp[2];

	cout << " Securiy System" << endl<<endl;
	cout << "_____________________________________" << endl;
	cout << "|             1. register           |" << endl;
	cout << "|             2. login              |" << endl;
	cout << "|             3. change password    |" << endl;
	cout << "|             4. End program        |" << endl;
	cout << "|             1. register           |" << endl;
	do {
		cout << endl;
		cout << "enter your choice" << endl;
		cin >> a;
		switch (a)
		{
		case 1: {
			cout << "_____________________________________" << endl;
			cout << "|               register           |" << endl;
			cout << "pleaseenter username" << endl;
			cin >> name;
			cout << "please enter the password: -";
			cin >> password;
			cout < "please your age";
			cin >> age;
			ofstream of1;
			of1.open("users.txt");
				if (of1.is_open())
				{
					of1 << name << "\n";
					of1 << password;
					cout << "registeraion success!" << endl;
				}
			break;
		}case 2:
		{
			i = 0;
			cout << "_____________________________________" << endl;
			cout << "|               login           |" << endl;
			ifstream of2;
			of2.open("users.txt");
			cout << "please enter your username";
			cout << " please enter the password";
			cin >> pass;
			if(of2.is_open())
				while (!of2.eof())
				{

				}

		}

		}
	}


}