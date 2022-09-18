Q. Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

<a src='https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&company[]=Samsung&sortBy=submissions'>GFG</a>

```
Class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int m[n];
        int *ans=new int[2];
        
        for(int i=0;i<=n;i++)
            m[i]=0;
            
        m[0]=1;
        
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        
        for(int i=0;i<=n;i++){
            if(m[i]>1){
                ans[0]=i;
                break;
            }
        }
        for(int i=0;i<=n;i++){
            if(m[i]==0){
                ans[1]=i;
                break;
            }
        }
        
        return ans;
    }
};
