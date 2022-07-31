//Problem: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

//Segmentation Fault

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> v;
        int x=r, y=c, k=0, j=0, i=0, count=r*c;
        
         while(count>0){
             
            j=0+k;
            
            while(j<x && count){
                v.push_back(matrix[i][j]);
                count--;
                j++;
            }
            
            x--;
            i++;
            j--;
            
            while(i<y && count){
                v.push_back(matrix[i][j]);
                count--;
                i++;
            }
            
            y--;
            i--;
            k++;
            j=x-1;
            
            while(j>=0 && count){
                v.push_back(matrix[i][j]);
                j--;
                count--;
            }
            
            j++;
            i=y-1;
                
            while(i>=0+k && count){
                v.push_back(matrix[i][j]);
                i--;
                count--;
            } 
                
            i++;
        }
        
        return v;
    }
