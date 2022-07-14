//Problem: https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions#

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int sum=0, k=0;
        vector<int> sub;
        
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
            
            if(sum>=s){
                while(k<i && sum>s){
                    sum-=arr[k];
                    k++;
                }
                if(sum==s){
                    sub.push_back(k+1);
                    sub.push_back(i+1);
                    return sub;
                } 
            }
        }
        if(sub.empty())
            sub.push_back(-1);
        return sub;
    }
};
