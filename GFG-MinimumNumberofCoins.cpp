//Problem: https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1

class Solution{
public:
    int note(int x){
        if(x>=2000)
            return 2000;
        else if(x>=500)
            return 500;
        else if(x>=200)
            return 200;
        else if(x>=100)
            return 100;
        else if(x>=50)
            return 50;
        else if(x>=20)
            return 20;
        else if(x>=10)
            return 10;
        else if(x>=5)
            return 5;
        else if(x>=2)
            return 2;
        if(x>=1)
            return 1;
        return 0;
    }
    
    vector<int> minPartition(int N)
    {
        vector<int> v;
        int k=0;
        while(N){
            int x=note(N);
            v.push_back(x);
            N=N-x;
        }
        return v;
    }
};
