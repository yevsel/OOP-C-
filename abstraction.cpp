#include <iostream>
using namespace std;

// Lets say an employee seeks promotion from the boss
// For the boss to give hime or her that promotion, he need s to do some background check
// For instance how long the person has served in the company, behavioural patterns etc
// Before the boss will approve the promotion

class Abstraction{
    virtual void askForPromotion()=0;
};

class Employee:Abstraction{
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
        
        Employee(string name,string company,int age){
            Name=name;
            Company=company;
            Age=age;
        }
        void askForPromotion(){
            if (Age<20){
                cout<<Name<<" sorry no promotion for you."<<endl;
            }
            else{
                cout<<"Congratulations "<<Name<<" you have been promoted."<<endl;
            }
        }
};

int main(){

    Employee emp1=Employee("Selasi","Amazon",23);
    Employee emp2=Employee("Celia","Netflix",19);

    emp1.askForPromotion();
    emp2.askForPromotion();


    cin.get();
    return 0;
}