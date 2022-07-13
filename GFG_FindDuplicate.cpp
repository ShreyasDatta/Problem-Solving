//Problem: https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions#

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> v;
        int a[n]={0};
        for(int i=0; i<n;i++){
            a[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(a[i]>1)
                v.push_back(i);
        }
        if(v.empty())
            v.push_back(-1);
        return v;
    }
};
