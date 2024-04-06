// #include<iostream>
// using namespace std;

// class Student{
// 	private:
// 		int roll;
// 		string name;
// 	public:
// 		Student(){
// 			cout<<"Enter name:";
// 			cin>>name;
// 			cout<<"Enter roll no:"<<endl;
// 			cin>>roll;
// 			cout<<"name:"<<name<<endl;
// 			cout<<"roll no: "<<roll<<endl;
			
// 		}
// };
// main(){
// 	Student b;
// 	return 0;
// }


//	return 0;
//}

// #include<iostream>
// using namespace std;

// class Traingle{
// 	private:
// 		int base,height,result;
		
// 	public:
// 		Traingle(){
// 			cout<<"Enter base and height:";
// 			cin>>base>>height;
// 			result=0.5*base*height;
			
// 			cout<<"Area of the traingle is:"<<result;			
// 		}
// };
// main(){
// 	Traingle b;
// 	return 0;
// }


// C program to demonstrte parameteried constructor
//date: 05-03-24



// #include <iostream>
// using namespace std;
//  class Wall{
//     private:
//         double lenght,height,result;
//     public:
//         Wall (double len, double hei){      //to pass arguments with the help of parameter
//             lenght = len;           //left-giver  right-taker
//             height = hei;
//         }
//         double show(){
//             result=lenght*height;
//             cout<<"The result is: "<<result<<endl;
//         }
//  };
//  main(){
//     Wall w1(11.23,34.3);        //obj creation with arguments because if paramerized construction
//     Wall w2(3.4,4.5);
//     w1.show();          
//     w2.show();
//     return 0;
//  }

// #include <iostream>
// using namespace std;
//  class Wall{
//     private:
//         double lenght,height,result;
//     public:
//         Wall (double len, double hei){      //to pass arguments with the help of parameter
//             lenght = len;           //left-giver  right-taker
//             height = hei;
//         }
//         double show(){
//             result=lenght*height;
//             cout<<"The result is: "<<result<<endl;
//         }
//  };
//  main(){
//     double h,l,l1,h1;
//     cout<<"Enter length and height of the first wall:";
//     cin>>l>>h;
//     cout<<"Enter length and height of the second wall:";
//     cin>>l1>>h1;
    
//     Wall w1(l,h);        //obj creation with arguments because of paramerized construction
//     Wall w2(l1,h1);
//     w1.show();          
//     w2.show();
//     return 0;
//  }

//  #include<iostream>
//  using namespace std;

//  class Rectangle{
//     private:
//         int length, breadth;
//     public:
//         Rectangle(int l, int b){
//             length=l;
//             breadth=b;
//         }
//         int Area(){
//             return length*breadth;
//         }
//  };
//  main(){
//     int l,b;
//     cout<<"enter length and breadth of the Rectangle: ";
//     cin>>l>>b;
//     Rectangle r(l,b);
//     return 0;
//  }



 //write a c++ program using a consructor to take input from the user the acc_name, the acc_number, and balance
 //date: 06-03-24
 

// #include<iostream>
// using namespace std;

// class Bank{
//     private:
//         double acc_number, balance;
//         string acc_name;
//     public:
//         Bank(string n,double no, double bl){
//             acc_name=n;
//             acc_number=no;
//             balance=bl;
//         }
//         void show(){
//             cout<<"Account holder name: "<<acc_name<<endl;
//             cout<<"Account number: "<<acc_number<<endl;
//             cout<<"Account Balance: "<<balance<<endl;
//         }
// };
// main(){
//     string name;
//     double number,balance =0;
//     cout<<"Enter name of the Account holder: ";
//     cin>>name;
//     cout<<"Enter account number of the Account holder: ";
//     cin>>number;
//     Bank b(name,number,balance);
//     b.show();
//     return 0;
//}



//C++ program to demonstrate constructor overloading
//date: 11-03-24


#include<iostream>
using namespace std;

class Person{
	private:
		int age;
		
	public:
		Person(){
			age = 20;
		}
		Person(int a){
			age=a;
		}
		int getage(){
			return age;
		}
};
int main(){
	Person person1, person2(24);

    cout<<"Person1 age: "<<person1.getage()<<endl;
    cout<<"Person2 age: "<<person2.getage()<<endl;
    return 0;
}