#include<iostream>
using namespace std;

class Bank{
    private:
        int acc_number;
        double balance;
        string acc_name;
    public:
        Bank(string n,int no, double bl){
            acc_name=n;
            acc_number=no;
            balance=bl;
        }
        void deposit(double amount){
            balance+=amount;
            cout<<"Amount deposit successfully.\n";
        }
        void withdraw(double amount){
            if(balance>=amount){
                balance-=amount;
                cout<<"Amount withdraw successfully.\n";
            }
            else{
                cout<<"Insufficient balance.\n";
            }            
        }
        void show(){
            cout<<"Account holder name: "<<acc_name<<endl;
            cout<<"Account number: "<<acc_number<<endl;
            // cout<<"Account Balance: "<<balance<<endl;
        }
        void input(){
            cout<<"Enter name of the Account holder: ";
            cin>>acc_name;
            cout<<"Enter account number of the Account holder: ";
            cin>>acc_number;
        }
        void showbalance(){
            cout<<"Balance: "<<balance<<endl;
        }
};
int main(){
    char option='Y';
    string name;
    int number;
    double balance =0;
    int choice;
    Bank b(name,number,balance);
    b.input();
    while (option == 'Y' || option == 'y'){
        
        cout<<"1. Cash withdraw "<<endl;
        cout<<"2. Deposit "<<endl;
        cout<<"3. Check balance"<<endl;
        cout<<"4. Account Details "<<endl;
        cout<<"Enter your choice (1/2/3/4): ";
        cin>>choice;
        double amount;
        switch(choice){
            case 1:
                cout<<"Enter amount to withdraw: "<<endl;
                cin>>amount;
                b.withdraw(amount);
                break;
            case 2:
                cout<<"Enter amount to deposit: "<<endl;
                cin>>amount;
                b.deposit(amount);
                break;
            case 3:
                b.showbalance();
                break;
            case 4:
                b.show();
                break;
            default:
                cout<<"Invalid choice.\n";   
        }
        cout<<"\nWould you like to continue the operation? (Y/N): ";
        cin>>option;
    }
    cout<<"Thank you.\n";
    return 0;
    
    
}