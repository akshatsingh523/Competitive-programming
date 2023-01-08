#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,t,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x;
	    cin>>y;
	    cin>>a;
	    if(x<=a && a<y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
