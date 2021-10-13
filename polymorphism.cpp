#include <iostream>
#include <string>
using namespace std;

// THE WORK() function has different definitions in all the classes

class AskForPromotion{
    virtual void askForPromotion()=0;
};

class Employee:AskForPromotion{
    private:
        string Name;
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
            Age=age;
        }
        void askForPromotion(){
            cout<<"Promotion is coming"<<endl;
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
        virtual void work(){
            cout<<getName()<<" is backlogging his computer."<<endl;
        }
        Employee(string name,string company,int age){
            Name=name;
            Company=company;
            Age=age;
        }
        
};

class Developer:public Employee{
    string favLanguage;
    public:
        Developer(string name,string company,int age,string language):Employee(name,company,age){
            favLanguage=language;
        }
        void devIntro(){
            cout<<getName()<<" likes using "<<favLanguage<<endl;
        }
        void work(){
            cout<<getName()<<" is seriosly coding in "<<favLanguage<<"."<<endl;
        }
};

class Teacher:public Employee{
    public:
        string subject;
        Teacher(string name,string company,int age,string sub):Employee(name,company,age){
            subject=sub;
        }
        void work(){
            cout<<getName()<<" is teaching his students "<<subject<<" at the moment."<<endl;
        }
};

int main(){

    Employee emp1=Employee("Selasi","Amazon",22);
    Developer dev1=Developer("Elizabeth","Netflix",24,"Javascript");
    Teacher te1=Teacher("Celia","Facebook",22,"Mathematics");
    // emp1.askForPromotion();    


    // emp1.work();
    // dev1.work();
    // te1.work();

    // Pointers of base class can hold address of derived class
    Employee *e=&dev1;
    Employee *e2=&te1;
    e->work();


    cin.get();
    return 0;
}