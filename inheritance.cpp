#include <iostream>

using namespace std;

class Abstract_Employee
{
    virtual void askForPromotion() = 0;
};

class Employee:Abstract_Employee
{
    private:
    string company;
    int age;

    protected:
    string name;

    public:
    Employee()
    {
        name = "";
        company = "";
        age = 0;
    }

    void setName(string n){
        name = n;
    }

    string getName(){
        return name;
    }

    void setCompany(string c){
        company = c;
    }

    string getCompany(){
        return company;
    }

    void setAge(int a){
        age = a;
    }

    int getAge(){
        return age;
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

    void askForPromotion()
    {
        if(age > 30){
            cout<<name<<" got promoted"<<endl;
        }else{
            cout<<name<<" sorry not promotions available";
        }
    }
};

class Developer:public Employee
{
    public:
    string favProgrammingLang;
    Developer(string name, string company, int age, string lang) : Employee(name,company, age)
    {
        favProgrammingLang = lang;
    }

    void fixBug()
    {
        cout<<name<<" Fixed Bug using "<<favProgrammingLang<<endl;
    }
};

class Teacher: public Employee
{
    public:
    string Subject;
    void prepareLesson()
    {
        cout<<name<<" is preparing "<<Subject<<" Lesson"<<endl;
    };
    Teacher(string name,string company, int age, string subject):Employee(name,company,age)
    {
        Subject = subject;
    }
};

int main()
{
    Employee e = Employee("Anuj","Anno Tech", 31);
    Developer d = Developer("Alex", "Annotech", 21, "C++");
    Teacher t = Teacher("Jeff", "Cool school", 35, "C++");
    t.askForPromotion();
}   