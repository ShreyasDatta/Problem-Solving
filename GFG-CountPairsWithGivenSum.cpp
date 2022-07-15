//Problem: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1/?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions#

//Using Unordered Hash Map

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int c=0, a,b;
        map<int, int> m;                          //Creating hash Map with value frequency pair
      
        for(int i=0;i<n;i++){                     
            b=k-arr[i];                           //One element a other would b k-a
            if(m[b])                              //Checking if the frequency of value available and how many times
                c+=m[b];                          //Increasing pair count
            m[arr[i]]++;                           
        }
        return c;
    }
};
