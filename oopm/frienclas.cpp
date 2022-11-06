#include <iostream>
using namespace std;

class Student 
{
    friend class Average;

    int x , y, z;

    public:
    void getdata ()
    {
        cin >> x;
        cin >> y;
        cin >> z;
    }

    void display ()
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
};

class Average
{
    public:
    void average(Student &s1)
    {
        int sum = 0;
        float avg ;
        sum = s1.x + s1.y + s1.z;
        avg = (float)sum / 3;
        cout << avg << endl;
    }
};
int main (void)
{
    Student s;
    Average s1;
    cout << endl;
    s.getdata ();
    s.display();
    s1.average(s);
    return 0;

    return 0;
}