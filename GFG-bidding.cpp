//problem: https://www.codechef.com/JULY221D/problems/AUCTION

#include <iostream>
using namespace std;

int main() {
	int t;
	int a, b, c;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	        cout<<"Alice"<<endl;
	    else if(b>c && b>a)
	        cout<<"Bob"<<endl;
	    else
	        cout<<"Charlie"<<endl;
	}
	return 0;
}
