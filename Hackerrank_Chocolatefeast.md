`Question`
```
Alex is taking part in a chocolate eating competition. There are 'N' boxes of chocolate numbered '0' to 'N - 1'. Each box contains some chocolates. The boxes are arranged in a line, with the box '0' being the nearest to Alex. To win, Alex has to eat more than 'X' number of chocolates using minimum boxes. Alex can only eat chocolates from contiguous boxes. That is, he can choose some i and j (i <= j) and eat all the chocolates from box i, box i + 1, ..., box j. Alex is lazy, so if there are many optimal choices, he will choose the boxes nearest to him.

Given an array 'choco' containing the number of chocolates in each box, predict the boxes that Alex will choose. It is guaranteed that one such choice always exists.

Input Format

The first line contains 'T', denoting the number of test cases.

The first line of each test case contains two integers, 'N' and 'X', denoting the number of boxes and the target, respectively.

The second line of each test case contains an array 'choco' of 'N' space separated integers, denoting the number of chocolates in each box.

Constraints

1 <= T <= 5

1 <= N <= 10^5

1 <= x <= 10^9

1<= choco[i] <= 10^4

Where 'T' is the number of test cases, 'N' is the number of boxes, 'X' is the target, and ‘choco[i]' is the number of chocolates in the box 'i', where 0 <= i <= N - 1.

Time Limit: 1 sec

Output Format

For each test case, print an array of integers denoting the number of chocolates in the boxes that Alex will pick.

Sample Input 0

4
6 9
1 3 5 6 4 3
3 10
11 2 5
5 12
5 7 11 3 5
3 20
20 19 21
Sample Output 0

5 6
11
7 11
21
```

```
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void chocolateFest(vector<int> choco, int x){
    int n = choco.size();
    int min_len = n + 1;
    int start_index = 0;

    for (int i = 0; i < n; i++){
        int curr_sum = 0;
        for (int j = i; j < n; j++){
            curr_sum = curr_sum + choco[j];
            if (curr_sum > x && (j - i + 1) < min_len){
                min_len = j - i + 1;
                start_index = i;
            }
        }
    }

    vector<int> result;

    for (int i=start_index; i<start_index+min_len; i++)
        result.push_back(choco[i]);
    
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}

int main() {
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        vector<int> a;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        chocolateFest(a, x);
        cout<<endl;
    }
    return 0;
}
```
