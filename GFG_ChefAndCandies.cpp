//Problem: https://www.codechef.com/JULY221D/problems/CHEFCAND

#include <iostream>
using namespace std;

int candies(int n, int x){
    if(x>=n)
        return 0;
    
    int pack;
    pack=(n-x)/4;
    if((n-x)%4!=0)
        pack++;
    return pack;
}

int main() {
	int t, n, x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>x;
	    cout<<candies(n,x)<<endl;    
	}
	return 0;
}
