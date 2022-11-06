#include <iostream>
using namespace std;

class Base
{
    int x, y, z;

public:
    Base(int x, int y, int z)
        : x{x}, y{y}, z{z}
    {
    }

    void put_data()
    {
        cout << x << " " << y << " " << z << endl;
    }
};

int main(void)
{
    // Base b[3]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     (b)->put_data();
    // }

    int arr[3][2] = {{1,2} , {3,4}, {5 , 6}};
    // for (int i = 0; i < 2 ; i++)
    // {
    //     for(int j = 0 ; j < 3 ; j++)
    //     cout << arr[i][j] << endl;
    // }

    int *ptr = arr[0];

    for (int i = 0 ; i < 6 ; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}