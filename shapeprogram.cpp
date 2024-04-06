#include<iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "Shape created." << endl;
    }
};

class Triangle: public Shape{
public:
    void display1(){
        cout << "\nFor Triangle shape:" << endl;
    }
};

class Rectangle: public Shape{
public:
    void display2(){
        cout << "\nFor Rectangle shape:" << endl;
    }
};

class Circle: public Shape{
public:
    void display3(){
        cout << "\nFor Circle shape:" << endl;
    }
};

class Pyramid: public Triangle{
public:
    int base, height, result;
    void read(){
        cout << "Enter base and height of the pyramid: ";
        cin >> base >> height;
        result= 0.5 * base * height; 
        cout << "1. Area of pyramid: " << result << endl;  
    }
};

class Right_angled: public Triangle{
public:
    float base, height, result;
    void read1(){
        cout << "Enter base and height of the right-angled triangle: ";
        cin >> base >> height;
        result=0.5*base*height;
        cout<<"2. Area of Right-angled: "<<result << endl;
    }
};

class Parallelogram: public Rectangle{
public:
    int base, height, result;
    void read2(){
        cout << "Enter base and height of the parallelogram: ";
        cin >> base >> height;
        result= base * height;
        cout << "1. Area of Parallelogram: " << result << endl;
    }
};

class Square: public Shape{
public:
    int side,result;
    void read3(){
        cout << "Enter side of the square: ";
        cin >> side;
        result= side * side;
        cout << "2. Area of square: " << result << endl;
    }
};

class Semi_circle: public Circle{
public:
    int radius, result;
    void read4(){
        cout << "Enter radius for semi-circle: ";
        cin >> radius;
        result= 3.14*radius*radius/2;
        cout << "1. Area of semi circle: " << result << endl;
    }
};

class Full_circle: public Circle{
public:
    float radius,result;
    void read5(){
        cout << "Enter radius for full circle: ";
        cin >> radius;
        result=3.14 * radius * radius;
        cout << "2. Area of circle: " << result << endl;
    }
};
int main(){
    Shape s;
    s.display();

    Triangle t;
    t.display1();
    Pyramid p;
    Right_angled r;
    p.read();
    r.read1();

    Rectangle rec;
    rec.display2();
    Parallelogram para;
    Square Sq;
    para.read2();
    Sq.read3();
    
    Circle c;
    c.display3();
    Semi_circle sc;
    Full_circle fc;
    sc.read4();
    fc.read5();
    return 0;
}
