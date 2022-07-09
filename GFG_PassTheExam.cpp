//Porblem: https://www.codechef.com/JULY221D/problems/PASSTHEEXAM

#include <iostream>
using namespace std;

int main() {
	int t;
	int a, b, c;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>c;
	    if(a>=10 && b>=10 && c>=10 && (a+b+c)>=100)
	        cout<<"PASS"<<endl;
	    else
	        cout<<"FAIL"<<endl;
	}
	return 0;
}
