// my login.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <istream>
#include <fstream>
#include <string>
void login();
void Register();
void Forgot();
using namespace std;
int main()
{
    cout << "*******************************LOGIN******************************\n\n";
    cout << "Select your choices "<<endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Forgot credentials" << endl;
    cout << "4. exit" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1 :
        login();
        break;

    case 2 :
        Register();
        break;

    case 3 :
        Forgot();
        break;
    
    case 4 :
        cout << "Thanks for using the login page "<<endl;
        break;

    default :
        cout << "Sorry, wrong input provided " << endl;
        main();
    }

   
}

void login()
{
    int count=0;
    string user, pass, u, p;
    system("cls");
    cout << "please enter the following details" << endl;
    cout << "USERNAME :";
    cin >> user;
    cout << "\nPASSWORD :";
    cin >> pass;

    ifstream Username("Username.txt");
    ifstream Password("Password.txt");
   
    while (Username >> u && Password >> p)
    {
        if (u == user)
        {
            count = 1;
            if (p == pass)
            {
                cout << "You logged in successfully" << endl;
                cin.get();
                cin.get();
                break;
            }
            else
            {
                cout << "Wrong password entered\n Please try again " << endl;
                main();
            }
        }
    }
    if (count == 0)
    {
        cout << "Username not found\n Please try again"<<endl;
    }
}

void Register()
{
    system("cls");
    string Username, Password ;
    cout << "Enter your Username" << endl;
    cout << "Username : "; 
    cin >> Username;
    cout << "\nCreate your Password" << endl;
    cout << "Password : "; 
    cin>> Password;
    ofstream Reg_user("Username.txt", ios::app);
    ofstream Reg_pass("Password.txt", ios::app);
    Reg_user << Username<<endl;
    Reg_pass << Password<<endl;
    cout << "You're sucessfully registered\n Thank you" << endl;
    cin.get();
    cin.get();
    main();
}
void Forgot()
{
    int count = 0;
    string IUsername, Password, Username;
    cout << "Please enter your username "<<endl;
    cin >> IUsername;
    ifstream checkuser("Username.txt");
    ifstream checkpass("Password.txt");
    while (checkuser >>Username && checkpass>> Password)
    {
        if ( IUsername== Username)
        {
            count = 1;
            cout << "Hurray! Username found\nThe Password is " << Password<<endl;
           
            
        }
    }
    if (count == 0)
    {
        cout << "Username not found\n Please try again" << endl;
    }
    main();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
