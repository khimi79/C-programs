// #include<iostream>
// using namespace std;

// int add();
// int add(int x);
// int add(int x, int y);

// int add(){
//     cout<<"lol"<<endl;
// }
// int add(int x){
//     int result=x+x;
//     cout<<"the result: "<<result<<endl;
// }
// int add(int x, int y){
//     int result=x+y;
//     cout<<"the result: "<<result<<endl;
// }
// int main(){
//     add();
//     add(10);
//     add(10,20);
// }

#include<iostream>
using namespace std;

int maxmarks=100;
void percentage(int subject1){
    cout<<"percentage: "<<(subject1 *100) / maxmarks<<endl;
}
void percentage(int subject1, int subject2){
    int total=subject1 + subject2;
    cout<<"percentage: "<<(total *50) / maxmarks <<endl;
}
void percentage(int subject1, int subject2, int subject3){
    int total= subject1 + subject2 + subject3;
    cout<<"percentage: "<<(total * 30) / maxmarks <<endl;
}
int main(){
    int subject1=85;
    percentage(subject1);

    int subject2 = 76;
    percentage(subject1, subject2);

    int subject3 = 92;
    percentage(subject1, subject2 , subject3);

    return 0;
}