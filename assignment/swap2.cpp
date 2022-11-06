#include <iostream>
using namespace std;
#define RESET   "\033[0m"
#define GREEN   "\033[32m"

int main (void)
{
    cout<<GREEN<<"!!Program to Swap two numbers without using third variable!!"<<RESET<<endl;
    int a ,b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout << GREEN <<"Swapped Values"<<RESET<<endl;
    cout << "a: "<< a <<endl;
    cout << "b: "<< b <<endl; 
    return 0;
}