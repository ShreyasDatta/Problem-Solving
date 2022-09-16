Q. Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

```
class Solution{
    long long maxSubarraySum(int arr[], int n){
        
        long long maxSum = INT_MIN;
        long long currSum=0;
        
        for(int i=0;i<n;i++){
            
            currSum+=arr[i];

            if(currSum>maxSum)
                maxSum=currSum;
            
            if(currSum<0)
                currSum=0;
    
        }
        return maxSum;
        
    }
};
```

```
int currSum = 0;
        int maxSum = INT_MIN;
        
        for(int i=0;i<n;i++){
            currSum = max(currSum+arr[i] , arr[i]);
            maxSum = max(currSum,maxSum);
           
        }

        return maxSum;
```     
