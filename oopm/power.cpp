#include <iostream>
#include  <math.h>
using namespace std;

class Power
{
    private:
    int n , p;

    public:
    Power(int n1 = 9 , int p1 = 3)
    {
        n = n1;
        p = p1;
    }

    void print ()
    {
        cout << n << " power " << p << ": " << pow(n , p) << endl;
    }

};

int main (void)
{
    Power p;
    p.print ();

    Power p1(2, 4);
    p1.print();


    return 0;
}