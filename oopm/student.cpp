#include <iostream>
using namespace std;

class Student 
{
    private:
    string name , roll_no;
    int year;

    public:
    void get_data ();
    void print_data ();
};

void Student :: get_data ()
{
    cout << "Enter your name : ";
    cin >> name;

    cout << "Enter your roll no. : ";
    cin >> roll_no;

    cout << "You are in which year ? : ";
    cin >> year;

}

void Student :: print_data ()
{
    cout << endl;
    cout  << name << " has roll no. " << roll_no << " is currently in " << year << " year." << endl;
}
int main (void)
{
    Student trideep;
    trideep.get_data ();
    trideep.print_data();

    return 0;
}