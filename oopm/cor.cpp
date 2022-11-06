#include <iostream>
using namespace std;

class Coordinate
{
    friend void swap (Coordinate &obj);
    int x , y;
    public:
    Coordinate ()
    {
        cout << "Enter coordinate x : "; cin >> x;
        cout << "Enter coordinate y : "; cin >> y;
    }

    void display ()
    {
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
    }
};

void swap (Coordinate &obj)
{
    int temp;
    temp = obj.x;
    obj.x = obj.y;
    obj.y = temp;
}

int main (void)
{
    Coordinate c; cout << "Before" << endl;
    c.display ();
    swap (c); cout << "After" << endl;
    c.display();
    string name;
    getline(cin , name);

    return 0;
}