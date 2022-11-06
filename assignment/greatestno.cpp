#include <iostream>
#define GREEN   "\033[32m"
#define RESET   "\033[0m"
using namespace std;

int main (void)
{
    cout<<GREEN<<"!!Program to find greater number between two numbers!!"<<RESETi<<endl;
    int num1, num2;
    cout<<"First number: ";
    cin>>num1;
    cout<<"Second Number: ";
    cin>>num2;

    if (num1>num2)
    {
        cout<<num1<<" is greater than "<<num2<<endl;
    }
    else
    {
        cout<<num2<<" is greater than "<<num1<<endl;
    }
    
    return 0;
}