#include <iostream>

using namespace std;

class Employee
{
    public:
    string name;
    string company;
    int age;

    void Introduce_Yourself(){
        cout<<"Name - "<<name<<endl;
        cout<<"Company - "<<company<<endl;
        cout<<"Age - "<<age<<endl;
    }
};

int main()
{
    Employee e;
    e.name = "Anuj";
    e.company = "Anno Tech";
    e.age = 20;
    e.Introduce_Yourself();
}