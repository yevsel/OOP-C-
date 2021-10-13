#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// RULES FOR SETTING A CONSTRUCTOR
// 1) Its just a method but it does not have return type
// 2) It has the same name as the class it belongs to
// 3) Constructors must be public for now

class Employee{
    public:
        string Name;
        string Company;
        int Age;

        void introduce(){
            cout<<"My name is "<<Name;
            cout<<" I work for "<<Company;
            cout<<" and I am "<<Age<<" years old."<<endl;
        }

        // Constructor
        Employee(string name,string company,int age){
            Name=name;
            Company=company;
            Age=age;
            // introduce();
        }
};

int main(void){

    Employee employee1=Employee("Selasi","Microsoft",23);
    Employee employee2=Employee("Celia","Facebook",22);
    employee1.introduce();
    employee2.introduce();


    cin.get();
    return 0;
}