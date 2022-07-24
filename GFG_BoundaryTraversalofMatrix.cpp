//Problem: https://practice.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1?page=1&difficulty[]=0&category[]=Matrix&sortBy=submissions

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> output;
        
        if(n == 1){
            int i = 0;
            while(i < m)
                output.push_back(matrix[0][i++]);
        }
        else if(m == 1){
            int i = 0;
            while(i < n)
                output.push_back(matrix[i++][0]);
        }
        else{
            for(int j=0; j<m; j++)
                output.push_back(matrix[0][j]);
            
            for(int j=1; j<n; j++)
                output.push_back(matrix[j][m-1]);
            
            for(int j=m-2; j>=0; j--)
                output.push_back(matrix[n-1][j]);
            
            for(int j=n-2; j>=1; j--)
                output.push_back(matrix[j][0]);
        }
        return output;
    }
};
