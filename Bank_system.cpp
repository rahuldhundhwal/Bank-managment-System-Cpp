#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class Bank
{
    int balance = 0;
    vector<int> transaction;
    char Name[100], address[100], Pancard[16];

public:
    void createAccount();
    void deposite_amount();
    void withdraw_amount();
    void display_details();
    void transaction_details();
};
void Bank::createAccount()
{
    int balance;
    cout << " Enter Your Full Name : ";
    cin.ignore();
    cin.getline(Name, 100);
    cout << "Enter Your Full Address : ";
    cin.ignore();
    cin.getline(address, 100);
    cout << "Enter Your Pancard Number(16-digit) : ";
    cin >> Pancard;
    cout << "Enter THe Amount You Want To deposite(Min. INR500) : ";
    cin >> balance;
    this->balance = balance;

    // Review YOur Acoount
    cout << "Please Review YOur Account Deatils " << endl;
    display_details();
}
void Bank::deposite_amount()
{
    int b;
    cout << "Enter The amount You Want To Deposite(In INR only)" << endl;
    cin >> b;
    this->balance = this->balance + b;
    transaction.push_back(b);
    cout << "Your Amount has Been Deposited" << endl
         << "Your Current Balance : " << balance << endl
         << " Thanks For Visiting Us" << endl;
}
void Bank::withdraw_amount()
{
    int a;
    cout << " Enter the amount you want to withdraw (In INR only)" << endl;
    cin >> a;
    this->balance -= a;
    transaction.push_back(-a);
    cout << ":::::::::Transaction Success:::::::::" << endl;
    cout << "    Your Current Balance : " << balance << endl;
}
void Bank::display_details()
{
    cout << "Your Name : " << Name << endl;
    cout << "Your Address : " << address << endl;
    cout << "Your Pancard Number : " << Pancard << endl;
    cout << "Your Current Balance : " << balance << endl;
}
void Bank::transaction_details()
{
    cout << "Your previous Transactions Are : " << endl;
    for (int i = transaction.size() - 1; i >= 0; i--)
    {
        cout << transaction[i] << endl;
    }
}
int main()
{
    char conitnueOrnot;
    int option;
    Bank obj;
    cout << "WELCOME TO XYZ BANK" << endl;
    cout << "CHOOSE THE OPTION BELOW :-" << endl;
    do
    {
        cout << "1> Create An Account\n";
        cout << "2> Deposite Money\n";
        cout << "3> Withdraw Money\n";
        cout << "4> Show My account Details\n";
        cout << "5> Exit\n";
        cin >> option;
        switch (option)
        {
        case 1 :
            obj.createAccount();
            break;
        case 2:
            obj.deposite_amount();
            break;
        case 3:
            obj.withdraw_amount();
            break;
        case 4:
            obj.display_details();
            obj.transaction_details();
            break;

        case 5:
            if (option == 5)
            {
                exit(1);
            }
            break;
        default:
            cout << "Choice Is Wrong Select The Right Choice \n " << endl;
            break;
        }
        cout << endl
             << endl
             << "To continue Again Select :: Y "
             << endl
             <<endl
             << " If want to exit Press:: N" << endl;
        conitnueOrnot = getch();

        if (conitnueOrnot == 'N' || conitnueOrnot == 'n')
        {
            exit(0);
        }

    } while (conitnueOrnot == 'Y' || conitnueOrnot == 'y');
    getch();
    return 0;
}