#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string old, name, password0, user, pass, text, word, age1, word1, password1, password2;
    string cred[3], cp[3];
    int age, i = 0, flag = 0;
    int x, y;

    cout << "           \t\t\t\tSecurity System " << endl
         << endl;
    cout << "\t\t\t\t __ __ __ __ __ __ __ __ __ __ __" << endl;
    cout << "\t\t\t\t|                                | " << endl;
    cout << "\t\t\t\t|      1. Register               |" << endl;
    cout << "\t\t\t\t|      2. Login                  |" << endl;
    cout << "\t\t\t\t|      3. Change Password        |" << endl;
    cout << "\t\t\t\t|      4. Exit                   |" << endl;
    cout << "\t\t\t\t|__ __ __ __ __ __ __ __ __ __ __|" << endl;
    int a;
    cout << endl
         << endl;
    cout << "                    \t\tPlease Enter Your Choice : ";
    cin >> a;
    do
    {
        switch (a)
        {
        case 1:
        {
            cout << "                   \t\t\t __ __ __ __ __" << endl;
            cout << "                   \t\t\t|              |" << endl;
            cout << "                   \t\t\t|   Register   |" << endl;
            cout << "                   \t\t\t|__ __ __ __ __|" << endl
                 << endl;
            cout << "                    \t\t Please Enter Your Username : ";
            cin >> name;
            cout << "                     \t\tPlease Enter Your Password : ";
            cin >> password0;
            do
            {
                cout << "                      \t\t Please Enter Your Age : ";
                cin >> age;
                if (age < 18)
                {
                    cout << "                     \t\t You are a minor !! Try Again !!" << endl;
                }
            } while (age < 18);

            ofstream of1;
            of1.open("File.txt");
            if (of1.is_open())
            {
                of1 << name << endl;
                of1 << password0 << endl;
                of1 << age << endl;
                cout << "                         \t\t Registration Successfull !! " << endl
                     << endl
                     << endl;
                a = 2;
            }
            cout << "\t\t\t\t __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl;
            cout << "\t\t\t\t|                                            | " << endl;
            cout << "\t\t\t\t|      1. Press 2 for Login                  |" << endl;
            cout << "\t\t\t\t|      2. Press 3 for Change Password        |" << endl;
            cout << "\t\t\t\t|__ __ __ __ __ __ __ __ __ __ __ __ __ __ __|" << endl
                 << endl;
            cout << "               \t\tPress : ";
            cin >> a;
            break;
        }
        case 2:
        {
            i = 0;
            cout << "                                \t\t __ __ __ __ __ " << endl;
            cout << "                                \t\t|              |" << endl;
            cout << "                                \t\t|    Login     |" << endl;
            cout << "                                \t\t|__ __ __ __ __|" << endl
                 << endl;
            ifstream of2;
            of2.open("File.txt");
            cout << "                               \t\t Please Enter Your Username : ";
            cin >> user;
            cout << "                               \t\t Please Enter Your Password : ";
            cin >> pass;
            cout << "                               \t\t Please Enter Your Age : ";
            cin >> age1;

            if (of2.is_open())
            {
                while (!of2.eof())
                {
                    while (getline(of2, text))
                    {                            // read line by line
                        istringstream iss(text); // extract the text
                        iss >> word;
                        cred[i] = word;
                        i++;
                    }
                    if (user == cred[0] && pass == cred[1] && age1 == cred[2])
                    {
                        cout << "                      \t\t\t-----Login Successful ------" << endl
                             << endl;
                        cout << "                          \t\t\t ----Details --- " << endl
                             << endl
                             << endl;
                        cout << "                          \t\t\t UseName : " << name << endl;
                        cout << "                          \t\t\t Password : " << "*****" << endl;
                        cout << "                          \t\t\t Age : " << age1 << endl
                             << endl
                             << endl;
                        cout << "\t\t\t\t __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl;
                        cout << "\t\t\t\t|                                            | " << endl;
                        cout << "\t\t\t\t|       1. Press 3 for Change Password       |" << endl;
                        cout << "\t\t\t\t|       2. press 4 for exit                  |" << endl;
                        cout << "\t\t\t\t|__ __ __ __ __ __ __ __ __ __ __ __ __ __ __|" << endl
                             << endl;
                        cout << "                               \t\tpress:";
                        cin >> a;

                        break;
                    }
                    else
                    {
                        cout << endl
                             << endl;

                        cout << "                      \t\t\t Wrong Credential !! " << endl
                             << endl;
                        cout << "\t\t\t\t __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl;
                        cout << "\t\t\t\t|                                            | " << endl;
                        cout << "\t\t\t\t|      1. Press 2 for Login                  |" << endl;
                        cout << "\t\t\t\t|      2. Press 3 for Change Password        |" << endl;
                        cout << "\t\t\t\t|__ __ __ __ __ __ __ __ __ __ __ __ __ __ __|" << endl
                             << endl;
                        cout << "            \t\tpress : ";
                        cin >> a;
                        break;
                    }
                }
            }
            break;
        }
        case 3:
        {
            i = 0;
            ifstream of0;

            cout << "                         \t\t -----Change Password-----" << endl
                 << endl;
            cout << "                         \t\tEnter Your Current Password :";
            cin >> old;
            cout << endl
                 << endl;
            of0.open("File.txt");
            if (of0.is_open())
            {

                while (!of0.eof())
                {
                    getline(of0, text);
                    istringstream iss(text);
                    iss >> word1;
                    cp[i] = word1;
                    i++;
                }
            }
            of0.close();
            if (old == cp[1])
            {

                ofstream of1;
                of1.open("File.txt");
                if (of1.is_open())
                {
                    cout << "                \t\t\tEnter Your new Password : ";
                    cin >> password1;
                    cout << "                \t\t\tEnter The Password Again : ";
                    cin >> password2;

                    if (password1 == password2)
                    {

                        of1 << cp[0] << endl;
                        of1 << password1 << endl;
                        of1 << cp[2] << endl;
                        cout << "                \t\t\tPassword Changed Successfully : " << endl
                             << endl;
                        cout << "                 \t\t\t _____Details ____" << endl
                             << endl;
                        cout << "                  \t\tUser Name : " << cp[0] << endl;
                        cout << "                 \t\tPassword : " << password1 << endl;
                        cout << "                 \t\tAge :" << cp[2] << endl
                             << endl;
                        cout << "\t\t\t\t __ __ __ __ __ __ __ __ __ __ __ __ __ __ __" << endl;
                        cout << "\t\t\t\t|                                            | " << endl;
                        cout << "\t\t\t\t|      1. Press 2 for Login                  |" << endl;
                        cout << "\t\t\t\t|      2. Press 4 for exit                   |" << endl;
                        cout << "\t\t\t\t|__ __ __ __ __ __ __ __ __ __ __ __ __ __ __|" << endl
                             << endl;
                        cout << "                      \t\tpress : ";
                        cin >> a;
                        break;
                    }

                    else
                    {
                        of1 << cp[0] << endl;
                        of1 << old << endl;
                        of1 << cp[2] << endl;
                        cout << "               \t\t\tPassword doesn't match !!! : " << endl
                             << endl;
                        cout << "                \t\tTry Again !!" << endl;
                        a = 3;
                    }
                }
            }
            else
            {
                cout << "                     \t\t\tEnter the valid Password " << endl;
            }

            break;
        }
        case 4:
        {

            break;
        }
        default:
        {
            cout << "                           \t\t Enter a valid Option !!" << endl;
            break;
        }
        }
    } while (a < 4);
}
