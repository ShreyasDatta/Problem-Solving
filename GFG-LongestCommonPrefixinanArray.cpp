//Problem: https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?page=1&category[]=Strings&curated[]=1&sortBy=submissions

/*--------------------------1. By Sorting string--------------------------*/
class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        if(N==1)
            return arr[0];
        if(N==0)
            return "-1";
            
        sort(arr, arr+N);
        int i=0;
        string str;
        string a=arr[0];
        string b=arr[N-1];
            
        while(a[i]==b[i]){
            str.push_back(a[i]);
            i++;
        }
        
        if(str.length()==0)
            return "-1";
        else
            return str;
    }
};
