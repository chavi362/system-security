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

    cout << "Security System" << endl << endl;
    cout << "______________________________________" << endl;
    cout << "| 1. register |" << endl;
    cout << "| 2. login |" << endl;
    cout << "| 3. change password |" << endl;
    cout << "| 4. End program |" << endl;
    cout << "______________________________________" << endl;
    do {
        cout << endl;
        cout << "Enter your choice: ";
        cin >> a;
        switch (a)
        {
            case 1: {
                cout << "______________________________________" << endl;
                cout << "| register |" << endl;
                cout << "Please enter username: ";
                cin >> name;
                cout << "Please enter the password: ";
                cin >> password;
                cout << "Please enter your age: ";
                cin >> age;
                ofstream of1;
                of1.open("users.txt");
                if (of1.is_open())
                {
                    of1 << name << "\n";
                    of1 << password << "\n";
                    of1 << age << "\n";
                    cout << "Registration success!" << endl;
                }
                of1.close();
                break;
            }
            case 2:
            {
                i = 0;
                cout << "______________________________________" << endl;
                cout << "| login |" << endl;
                ifstream of2;
                of2.open("users.txt");
                cout << "Please enter your username: ";
                cin >> user;
                cout << "Please enter the password: ";
                cin >> pass;
                if (of2.is_open())
                {
                    while (!of2.eof())
                    {
                        getline(of2, creds[i]);
                        i++;
                    }
                    if (creds[0] == user && creds[1] == pass)
                    {
                        cout << "Login success!" << endl;
                    }
                    else
                    {
                        cout << "Invalid username or password." << endl;
                    }
                }
                of2.close();
                break;
            }
            case 3:
            {
                cout << "______________________________________" << endl;
                cout << "| change password |" << endl;
                ifstream of2;
                of2.open("users.txt");
                cout << "Please enter your username: ";
                cin >> user;
                cout << "Please enter the old password: ";
                cin >> old;
                cout << "Please enter the new password: ";
                cin >> password;
                if (of2.is_open())
                {
                    while (!of2.eof())
                    {
                        getline(of2, creds[i]);
                        i++;
                    }
                    if (creds[0] == user && creds[1] == old)
                    {
                        ofstream of1;
                        of1.open("users.txt");
                        if (of1.is_open())
                        {
                            of1 << user << "\n";
                            of1 << password << "\n";
                            cout << "Password changed successfully!" << endl;
                        }
                        of1.close();
                    }
                    else
                    {
                        cout << "Invalid username or password." << endl;
                    }
                }
                of2.close();
                break;
            }
            case 4:
            {
                cout << "Program ended." << endl;
                return 0;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (a != 4);

    return 0;
}
