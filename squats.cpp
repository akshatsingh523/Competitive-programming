#include <iostream>
#include <vector>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x;
	vector<int> arr;
	for(int i=0;i<t;i++){
	    cin>>x;
	    arr.push_back(15*x);
	}
	
	for(int i=0;i<t;i++){
	    cout<<arr[i]<<endl;
	}
	return 0;
}
