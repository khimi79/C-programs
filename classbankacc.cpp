#include<iostream>
#include<string>

using namespace std;

class Bankacc{
    private:
        int acc_no;
        double balance;
        string acc_holder_name;

    public:
        void name(){
            cout<<"Enter account holder name: ";
            cin>>acc_holder_name;
            cout<<"Account holder name: "<<acc_holder_name<<endl;
        }
        void deposit(double amount){
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            balance+=amount;
            cout<<"Amount deposited successfully."<<endl;
            cout<<"New Balance: "<<balance<<endl;
        }
        void withdraw(double amount){
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            if (balance>=amount){
                balance-=amount;
                cout<<"Amount withdraw successfully."<<endl;
                cout<<"New Balance: "<<balance<<endl;
            }
            else {
                cout<<"Insufficient balance."<<endl;
            }
        }
};
int main(){
    Bankacc account;
    double amount;
    account.name();
    account.deposit(amount);
    account.withdraw(amount);
    return 0;
}