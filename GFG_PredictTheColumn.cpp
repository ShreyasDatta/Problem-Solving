//Problem: https://practice.geeksforgeeks.org/problems/predict-the-column/1?page=1&difficulty[]=0&category[]=Matrix&sortBy=submissions

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int n){
        int max_count=0, index, count=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(arr[j][i]==0)
                    count++;
            }
            if(count>max_count){
                max_count=count;
                index=i;
            }
            count=0;
        }
        return index;
        
    }
};
