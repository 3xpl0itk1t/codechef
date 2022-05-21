#include <iostream>
using namespace std;

int main() {
	int t,w,x,y,z;
	cin>>t;
	for(int i;i<t;i++){
	    cin>>w>>x>>y>>z;
	    int sum = (y*z)+w;
	    if(x<sum){
	        cout<<"overFlow"<<endl;
	       
	    }else if(x==sum){
	        cout<<"filled"<<endl;
	    }else{
	        cout<<"unfilled"<<endl;
	    }
	}
	return 0;
}
