#include <iostream>
#include <vector>

using namespace std;

class Employee{
    private:
        string  Name;
        string Company;
        int Age;
    public:
        void setName(string name){
            Name=name;
        }
        void setCompany(string company){
            Company=company;
        }
        void setAge(int age){
            if(age>=18){
                Age=age;
            }
        }
        string getName(){
            return Name;
        }
        string getCompany(){
            return Company;
        }
        int getAge(){
            return Age;
        }
        void introduce(){
            cout<<"My name is "<<Name;
            cout<<" I work for "<<Company;
            cout<<" and I am "<<Age<<" years old."<<endl;
        }

        // Employee(string name, string company,int age){
        //     Name=name;
        //     Company=company;
        //     Age=age;
        // }

};

int main(){

    // Employee emp1=Employee("Selasi","Amazon",23);
    // emp1.introduce();
    Employee employee;
    // employee.setName("Selasi");
    // employee.setCompany("Netflix");
    // employee.setAge(93);
    // cout<<"Name is "<<employee.getName()<<endl;
    // cout<<"Works at "<<employee.getCompany();

    employee.setAge(25);


    cin.get();
    return 0;
}