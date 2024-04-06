#include<iostream>
#include<string>

using namespace std;

class Person{
    private:
        string name;
        int age;

    public:
        void input(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
int main(){
    Person person;
    person.input();
    person.display();
    return 0;
}

