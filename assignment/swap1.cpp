#include <iostream>
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
using namespace std;

int main (void)
{
    cout<<GREEN<<"!!Program to Swap two numbers using third variable!!"<<RESET<<endl;
    int a, b, c;
    cout << "a: ";
    cin >> a;

    cout<<"b: ";
    cin>> b;;

    c = a;
    a = b;
    b = c;

    cout<<GREEN<<"Swapped Values "<<RESET<<endl;
    cout << "a: " << a <<endl;
    cout << "b: " << b <<endl;
    return 0;
}