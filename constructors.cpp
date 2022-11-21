#include <iostream>

using namespace std;

class Employee
{
    public:
    string name;
    string company;
    int age;

    Employee()
    {
        name = "";
        company = "";
        age = 0;
    }

    Employee(string n, string c, int a)
    {
        name = n;
        company = c;
        age = a;
    }

    void Introduce_Yourself()
    {
        cout<<"Name - "<<name<<endl;
        cout<<"Company - "<<company<<endl;
        cout<<"Age - "<<age<<endl;
    }
};

int main()
{
    Employee e = Employee("Anuj","Anno Tech", 25);
    e.Introduce_Yourself();
}