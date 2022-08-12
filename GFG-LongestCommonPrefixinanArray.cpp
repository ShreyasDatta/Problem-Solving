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
        bool t=true;
        int i=0;
        string str;
        while(t){
            char a=arr[0][i];
            char b=arr[N-1][i];
            if(a==b){
                str.push_back(a);
                i++;
            }
            else
                t=false;
        }
        if(str.length()==0)
            return "-1";
        else
            return str;
    }
};
