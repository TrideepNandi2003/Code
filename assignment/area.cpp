#include <iostream>
using namespace std;
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"      

float ar_circle(int r)
{
    float pi = 3.141592653;
    float area = pi*r*r;
    return area;
}

float ar_square (int side)
{
    float area = side*side;
    return area;
}

float ar_triangle (int base, int height)
{
    float area = 0.5*base*height;
    return area;

}

int main (void)
{
    cout << GREEN <<"!!Program to find area of circl,e square or triangle!!"<<RESET<<endl;
    int s;

    cout << GREEN <<"Find the area of?"<<endl<<"1.Circle\t2.Square\t3.Triangle"<<endl << RED <<"For area of circle press 1"<<endl << "For area of square press 2" <<endl <<"For area of triangle press 3"<<endl;
    cin >> s;
    RESET;

    switch (s)
    {
    case 1:
        int r;
        cout<< RESET << "Radius :";
        cin >> r;

        cout << GREEN << "Area of cicle with radius: "<<r<<" is " <<ar_circle(r) <<" sq. units" << RESET;
        break;

    case 2:
        int side;
        cout << RESET << "Side: ";
        cin >> side ;

        cout << GREEN << "Area of square with side: "<< side <<" is " <<ar_square(side) <<" sq. units"<< RESET;
        break;

    case 3:
        int base, height;
        cout << RESET << "Base: ";
        cin >> base ;

        cout << RESET << "Height: ";
        cin >> height ;

        cout << GREEN <<"Area of triangle with base: "<< base << " and height: "<< height << " is " <<ar_triangle(base, height) <<" sq. units" <<RESET;
    
    
    default:
        break;
    }
    return 0;
}