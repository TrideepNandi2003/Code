#include <iostream>
using namespace std;

class Coordinate
{
    private:
    float x , y;

    public:

    Coordinate ();
    Coordinate (const Coordinate &source);

    void print ();

};

Coordinate :: Coordinate ()
{
    cout << "Enter X co ordinate : ";
    cin >> x;

    cout << "Enter Y co ordinate : ";
    cin >> y;
}

Coordinate :: Coordinate (const Coordinate &source)
{
    x = source.x;
    y = source.y;
}

void Coordinate:: print ()
{
    cout << "X co-ordinate : " << x << endl;
    cout << "Y co-ordinate : " << y << endl;
}

int main (void)
{   
    Coordinate c;
    cout << "\nFor C" << endl;
    c.print();

    Coordinate c1 (c);
    cout << "\nFor C1" << endl;
    c1.print();

    return 0;
}