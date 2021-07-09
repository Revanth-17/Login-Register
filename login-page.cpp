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
    int count;
    string user, pass, u, p;
    system("cls");
    cout << "please enter the following details" << endl;
    cout << "USERNAME :";
    cin >> user;
    cout << "\nPASSWORD :";
    cin >> pass;

    ifstream input("database.txt");
    while (input >> u >> p)
    {
        if (u == user && p == pass)

        {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if (count == 1)
    {
        cout << "\nHello" << user << "\nLOGIN SUCESSFULL\nWe're glad that you're here.\nThanks for logging in\n";
        cin.get();
        cin.get();
        main();
    }
    else
    {
        cout << "\nLOGIN ERROR\nPlease check your username and password\n";
        main();
    }
}

void Register()
{
    string Reguser;
}
