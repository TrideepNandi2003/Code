#include <iostream>
using namespace std;
class saving_account
{
private:
    string name;
    string id;
    long double balance;
    long double amount;

public:
    void debit()
    {
        cout << "Enter the amount you want to Debit : ";
        cin >> amount;
        if (balance >= amount)
            balance = balance - amount;
        else
            cout << endl << "You have Insufficient Balance : " << endl;
    }
    void credit()
    {
        cout << "Enter the amount you want to Credit : ";
        cin >> amount;
        balance = balance + amount;
    }

    // SETTER

    void set()
    {
        cout << "Enter Account holder Name : ";
        getline(cin, name);
        cout << "Enter Account holder id : ";
        cin >> id;
        cout << "Enter the Balance : ";
        cin >> balance;
    }

    // GETTER

   void get ()
   {
        cout << endl;
        cout << "Account Holder Name is : " << name << endl;
        cout << "Account Holder Id is : " << id << endl;
        cout << "Account Holder Balance is : " << balance << endl;
   }
};

int main()
{
    char ch;
    saving_account account;

    // SETTER

    account.set();
    do
    {
        cout << "\n1.Debit\t2.Credit\t3.Exit\n" << endl;
        cout << "Please Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case '1':
            account.debit();
            break;
        case '2':
            account.credit();
            break;
        case '3':
            cout << "Have a Nice Day\n" << endl;
            break;
        default:
            cout << "Wrong Option!\n" << endl;
        }
    } while (ch != '3');

    cout << "Account Details are : ";
    // GETTER

    account.get ();

    return 0;
}