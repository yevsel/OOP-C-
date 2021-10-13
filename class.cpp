#include <iostream>
#include <vector>
#include <string.h>
#include <sstream>

using namespace std;

// Introduction
class Employee{
    public:
        string name;
        string company;
        int age;

        void introduce(){
            cout<<"Hello my name is "<<name;
            cout<<" I work at "<<company;
            cout<<" and I am "<<age<<" years old"<<endl;
        }
};

// Constructors
// They functions that are called immediately when we creat an object of our class
class Person{
    
};

// EXAMPLE
class Rectangle{
    int x,y;
    public:
        void set_value(int,int);
        int area(){
            return x*y;
        }

};

//We use the Rectangle namespace to access the set_value function
// This introduces us to setters and getters which we will eloborate more in Encapsulation
void Rectangle::set_value(int a, int b){
        x=a;
        y=b;
}


int main(void){

    Employee employee1;
    // employee1.name="Selasi";
    // employee1.company="Microsoft";
    // employee1.age=23;
    employee1.introduce();

    // Employee employee2;
    // employee2.name="Celia";
    // employee2.company="Amazon";
    // employee2.age=20;
    // employee2.introduce();

    Rectangle rect;
    
    rect.set_value(6,44);
    cout<<"AREA is: "<<rect.area();


    cin.get();
    return 0;
}