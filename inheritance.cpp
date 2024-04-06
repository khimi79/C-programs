// #include<iostream>
// 		using namespace std;
// 		class Account{          //first class(Base class/parent class)
//             public:
//                 float salary=60000;
// 		};
//         class Programmer : public Account{      //child class(derived class)     
//             public:                             //include properies of parent class 'public Account'
//                 float bonus=5000;               //variable inside child class
//         };
//         int main(){
//             Programmer P1;          //calling with child class(child is allowed to call parent properties but parent can't call or access child properties)
//             cout<<"Salary: "<<P1.salary<<endl;          //child is capable of calling the salary and the bonus
//             cout<<"Bonus: "<<P1.bonus;
//             return 0;
//         }

//Multi-level Inheritance Program

// #include<iostream>
// using namespace std;

// class A{
//     public:
//         string name;

// };
// class B: public A{
//     public:
//         int roll;
// };
// class C: public B{
//     public: 
//         int marks ;
// };
// int main(){
//     C S1;
//     cout<<"Enter name: ";
//     cin>>S1.name;
//     cout<<"Enter Roll no: ";
//     cin>>S1.roll;
//     cout<<"Enter Marks: ";
//     cin>>S1.marks;
//     cout<<endl;
//     cout<<"Student Details"<<endl;
//     cout<<"Name: "<<S1.name<<endl;
//     cout<<"Roll no: "<<S1.roll<<endl;
//     cout<<"Marks: "<<S1.marks<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

class Vehicle{
    public:
        void display(){
            cout<<"This is a car."<<endl;
        }
};
class Car: public Vehicle{
    public:
        void display1(){
            cout<<"This is a car."<<endl;
        }
};
class Sportcar: public Car{
    public:
        void diplay2(){
            cout<<"This is a sport car."<<endl;
        }
};
int main(){
    Sportcar A1;
    A1.display();
    A1.display1();
    A1.diplay2();
    return 0;
}
