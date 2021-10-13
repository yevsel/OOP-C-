#include <iostream>
using namespace std;

class AskForPromotion{
    virtual void askForPromotion()=0;

};

class Employee{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void introduce(){
            cout<<"My name is "<<Name;
            cout<<" I work for "<<Company;
            cout<<" and I am "<<Age<<" years old."<<endl;
        }
        void setName(string name){
            Name=name;
        }
        void setCompany(string company){
            Company=company;
        }
        void setAge(int age){
            if (age>14){
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
        void askForPromotion(){
            if (getAge()>18){
                cout<<"Congratulations "<<getName()<< " you have been promoted.";
            }
            else{
                cout<<"Im sorry "<<getName()<<" no promtion for you"<<endl;
            }
        }
        Employee(string name,string company,int age){
            Name=name;
            Company=company;
            Age=age;
        }
};

class Developer:public Employee{
    public:
        string favProgrammingLanguage;
        Developer(string name,string company,int age,string language):Employee(name,company,age){
            favProgrammingLanguage=language;
        }

    void devIntro(){
        cout<<getName()<<" likes programming in "<<favProgrammingLanguage<<endl;
    }
};

class Teacher:public Employee{
    public:
        string subject;

        Teacher(string name,string company,int age,string sub):Employee(name,company,age){
            subject=sub;
        }
        void prepareLesson(){
            cout<<getName()<<" is preparing lesson from "<<subject<<endl;
        }
};

int main(void){

    // Employee employee=Employee("Yevoo", "Netflix", 23);

    // employee.introduce();
    Developer d=Developer("Celia","church",23,"Javascript");
    // d.askForPromotion();
    

    Teacher t=Teacher("Elizabeth","Facebook",14,"Chemistry");
    t.askForPromotion();
    t.prepareLesson();

    cin.get();
    return 0;
}