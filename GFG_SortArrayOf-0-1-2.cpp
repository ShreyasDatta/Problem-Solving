Problem: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1/?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions#

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int j=0, x=0, y=0, z=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                x++;
            else if(a[i]==1)
                y++;
            else
                z++;
        }
        for(int i=0;i<n;i++){
            if(x){
                a[i]=0;
                x--;
            }
            else if(y){
                a[i]=1;
                y--;
            }
            else if(z){
                a[i]=2;
                z--;
            }
        }
    }
    
};


/* -----------------------------------------------------------------------*/

//Array sorting Method

void sort012(int a[], int n)
   {
     int mid=0;
     int low=0;
     int high=n-1;
     while(mid<=high){
         if(a[mid]==0){
          swap(a[mid],a[low]);
           low++;
           mid++;
         }
          else if (a[mid]==2){
            swap(a[mid],a[high]);
            high--;
         }
         else{
             mid++;
         }
     }
   }
