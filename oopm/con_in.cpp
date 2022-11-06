#include <iostream>
using namespace std;

class Alpha
{
    protected:
    int value_x;

    public:
    Alpha ()
        : value_x {0}
    {
        cout << "Alpha no-arg constructor" << endl;
    }

    Alpha (int x)
        : value_x {x}
    {
       cout << "Alpha one-arg constructor" << endl; 
    }
};

class Beta
{
    protected:
    int value_y;

    public:
    Beta ()
        : value_y {0}
    {
        cout << "Beta no-arg constructor" << endl;
    }

    Beta (int y)
        : value_y {y}
    {
       cout << "Beta one-arg constructor" << endl; 
    }
};

class Gamma : public Alpha , public Beta
{
    int doubled_value_x;
    int doubled_value_y;

    public:
    Gamma ()
        : doubled_value_x {0} , doubled_value_y {0}
    {
        cout << "Gamma no-arg constructor" << endl;
        cout << "Value of x : " << value_x << endl;
        cout << "Value of y : " << value_y << endl;
        cout << "Value of doubled x : " << doubled_value_x << endl;
        cout << "Value of doubled y : " << doubled_value_y << endl;

    }

    Gamma (int x , int y)
        : Alpha (x) , Beta (y), doubled_value_x{2*x} , doubled_value_y {2*y}
    {
        cout << "Gamma one-arg constructor" << endl;
        cout << "Value of x : " << value_x << endl;
        cout << "Value of y : " << value_y << endl;
        cout << "Value of doubled x : " << doubled_value_x << endl;
        cout << "Value of doubled y : " << doubled_value_y << endl;
    }
};

int main (void)
{
    cout << "Details for Default -->" << endl;
    Gamma obj1;
    cout << endl;
    cout << "Details for Paramaterized -->" << endl;
    Gamma obj2 {100 , 200};

    return 0;
}