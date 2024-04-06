#include<iostream>
using namespace std;

class Traingle{
	private:
		int base ,height;
		int result;
	public:
		int trainglearea(){
            cout<<"Enter base and height of the traingle:";
            cin>>base>>height;
			result =0.5*base*height;
			cout<<result;
            
        }
};
main(){
	Traingle obj;
    
	obj.trainglearea();
	return 0;
}