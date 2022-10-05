 //Q) https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1?page=1&curated[]=2&sortBy=submissions


class Solution {
  public:
    int firstRepeated(int arr[], int n) {
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[arr[i]]>1)
                return i+1;
        }
        
        return -1;
    
    }
};
