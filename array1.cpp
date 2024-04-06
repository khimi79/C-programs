#include <iostream>
using namespace std;

int main(){
    int marks[4] = {45,67,36,74};
    // // marks[2] = 99;
    // // cout<<"these are marks"<<endl;
    // // cout<<marks[0]<<endl;
    // // cout<<marks[1]<<endl;
    // // cout<<marks[2]<<endl;
    // // cout<<marks[3]<<endl;
    // int i=0;


    //do while loop
    // do {
    //     cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    // while(i < 4);
    
    //while loop
    // int i = 0;
    // while(i<4){
    //     cout<<"marks are "<<marks[i]<<endl;
    //     i++;
    // }



    //pointers and arrays
    int *p = marks;
    cout<<*(p++);
    cout<<endl;
    cout<<*p;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;


}