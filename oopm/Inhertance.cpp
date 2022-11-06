#include <iostream>
using namespace std;

class Vehicle
{
    private:
    string category;
    long reg_no;

    public:
    void get_data ();
    void put_data ();
};

class Fourwheeler : public Vehicle
{
    string model_no , color , company_name;

    public:
    void get_data ();
    void put_data ();
};

class Twowheeler : public Vehicle
{
    string model_no , color , company_name;

    public:
    void get_data ();
    void put_data ();
};

void Vehicle :: get_data ()
{
    cout << "Enter Category : ";
    cin >> category;

    cout << "Enter Registration No. : ";
    cin >> reg_no;
}

void Fourwheeler :: get_data ()
{
    Vehicle::get_data();
    cout << "Enter Model No. : ";
    cin >> model_no;

    cout << "Enter Color : ";
    cin >> color;

    cout << "Enter Company Name : ";
    cin >> company_name;
    cout << endl;
} 

void Twowheeler :: get_data ()
{
    Vehicle::get_data();
    cout << "Enter Model No. : ";
    cin >> model_no;

    cout << "Enter Color : ";
    cin >> color;

    cout << "Enter Company Name : ";
    cin >> company_name;
    cout << endl;
} 

void Vehicle :: put_data ()
{
    cout << "Category : " << category << endl;
    cout << "Registration No, : " << reg_no << endl;
}

void Fourwheeler :: put_data ()
{   
    Vehicle :: put_data();
    cout << "Model No. : " << model_no << endl;
    cout << "Color : " << color << endl;
    cout << "Company Name : " << company_name << endl;
    cout << endl;
}

void Twowheeler :: put_data ()
{
    Vehicle :: put_data();
    cout << "Model No. : " << model_no << endl;
    cout << "Color : " << color << endl;
    cout << "Company Name : " << company_name << endl;
    cout << endl;
}

int main (void)
{
    Fourwheeler F;
    cout << "Enter data for fourwheeler : " << endl;
    F.get_data();
    
    Twowheeler T;
    cout << "Enter data for twowheeler : " << endl;
    T.get_data();

    cout << "Data of Fourwheeler : " << endl;
    F.put_data();

    cout << "Data of twowheeler : " << endl;
    T.put_data();

    return 0;
}