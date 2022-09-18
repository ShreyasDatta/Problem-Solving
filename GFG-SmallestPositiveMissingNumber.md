Q. You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

```
int missingNumber(int arr[], int n) { 
    int present[n + 1] = {0};
    for (int i=0; i<n; i++) {
        if (arr[i]>0 && arr[i]<=n)
            present[arr[i]]++;
        }
         
    for (int i=1; i<=n; i++)
        if (present[i]==0)
            return i;
         
    return n+1;
} 
```
