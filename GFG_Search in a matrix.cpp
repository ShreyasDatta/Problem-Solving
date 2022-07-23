//Problem: https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1?page=1&difficulty[]=0&category[]=Matrix&sortBy=submissions

class Solution{
public:
	int matSearch (vector <vector <int>> &arr, int n, int m, int x)
	{
	    int r = 0, c = m - 1;
	    while (r < n and c >= 0)
	    {
	        if (arr[r][c] == x) return 1;
	        if (arr[r][c] > x) c--;
	        else r++;
	    }
	    return 0;
	}
};
