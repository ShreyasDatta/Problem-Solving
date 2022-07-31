//Problem: https://practice.geeksforgeeks.org/problems/maximum-no-of-1s-row3027/1?page=1&difficulty[]=0&category[]=Matrix&curated[]=1&sortBy=submissions

class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int maxOnes=0;
            int index=0;
            int count=0;
            for(int i=0;i<N;i++){
                for(int j=0;j<M;j++){
                    if(Mat[i][j]==1)
                        count++;
                }
                if(count>maxOnes){
                    maxOnes=count;
                    index=i;
                }
                count=0;
            }
            return index;
        }
};
