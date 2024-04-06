#include<iostream>
using namespace std;

class Rectangle{
    private:
        float length, width, result;
    public:
        void input(){
            cout<<"Enter length and width of the Rectangle: ";
            cin>>length>>width;
        }
        void area(){
            result=length*width;
            cout<<"Area of the Rectangle: "<<result<<endl;
        }
        void perimeter(){
            result=2*length+width;
            cout<<"Perimeter of the Rectangle: "<<result<<endl;
        }
};
int main(){
    Rectangle rectangle;
    rectangle.input();
    rectangle.area();
    rectangle.perimeter();
    return 0;
}
