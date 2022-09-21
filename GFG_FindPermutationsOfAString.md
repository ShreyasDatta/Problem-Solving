Q. Given a string S. The task is to print all unique permutations of the given string in lexicographically sorted order.

`With Repeatations` - `Using Backtracking`
```
#include <bits/stdc++.h> 
using namespace std; 
void permute(string a, int l, int r) { 
    if (l == r) 
        cout<<a<<endl; 
    else{ 
        for (int i = l; i <= r; i++) { 
            // Swapping done 
            swap(a[l], a[i]); 
            // Recursion called 
            permute(a, l+1, r); 
            //backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 
  
// Driver Code 
int main() 
{ 
    string str = "ABC"; 
    int n = str.size(); 
    permute(str, 0, n-1); 
    return 0; 
} 
```

`Without Repeatation`
```
#include <bits/stdc++.h>
using namespace std;
 
//Following function is needed for library function qsort().
int compare(const void* a, const void* b)
{
    return (*(char*)a - *(char*)b);
}
 
// A utility function two swap two characters a and b
void swap(char* a, char* b)
{
    char t = *a;
    *a = *b;
    *b = t;
}
 
// This function finds the index of the smallest character
// which is greater than 'first' and is present in str[l..h]
int findCeil(char str[], char first, int l, int h)
{
    // initialize index of ceiling element
    int ceilIndex = l;
 
    // Now iterate through rest of the elements and find the
    // smallest character greater than 'first'
    for (int i = l + 1; i <= h; i++)
        if (str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;
 
    return ceilIndex;
}
 
// Print all permutations of str in sorted order
void sortedPermutations(char str[])
{
    // Get size of string
    int size = strlen(str);
    // Sort the string in increasing order
    qsort(str, size, sizeof(str[0]), compare);
    // Print permutations one by one
    bool isFinished = false;
    while (!isFinished) {
        // print this permutation
        static int x = 1;
        cout << x++ << " " << str << endl;
        // printf("%d  %s \n", x++, str);
        // Find the rightmost character which is smaller
        // than its next character. Let us call it 'first
        // char'
        int i;
        for (i = size - 2; i >= 0; --i)
            if (str[i] < str[i + 1])
                break;
        // If there is no such character, all are sorted in
        // decreasing order, means we just printed the last
        // permutation and we are done.
        if (i == -1)
            isFinished = true;
        else {
            // Find the ceil of 'first char' in right of
            // first character. Ceil of a character is the
            // smallest character greater than it
            int ceilIndex = findCeil(str, str[i], i + 1, size - 1);
            // Swap first and second characters
            swap(&str[i], &str[ceilIndex]);
            // Sort the string on right of 'first char'
            qsort(str + i + 1, size - i - 1, sizeof(str[0]), compare);
        }
    }
}
 
// Driver program to test above function
int main()
{
    char str[] = "ACBC";
    sortedPermutations(str);
    return 0;
}
```

`Another`
```
#include <bits/stdc++.h>
using namespace std;
 
void printAllPermutationsFast(string s, string l)
{
    if (s.length() < 1)
        cout << l + s << endl;
    unordered_set<char> uset;
    for (int i = 0; i < s.length(); i++)
    {
        if (uset.find(s[i]) != uset.end())
            continue;
        else
            uset.insert(s[i]);
        string temp = "";
        if (i < s.length() - 1)
            temp = s.substr(0, i) + s.substr(i + 1);
        else
            temp = s.substr(0, i);
        printAllPermutationsFast(temp, l + s[i]);
    }
}
 
int main()
{
    string s = "ACBC";
    sort(s.begin(), s.end());
    printAllPermutationsFast(s, "");
    return 0;
}
```

`Using STL` - `Using rotate()`

```
#include <bits/stdc++.h>
using namespace std;
 
// Function to print permutations of string str,
// out is used to store permutations one by one
void permute(string str, string out)
{
    // When size of str becomes 0, out has a
    // permutation (length of out is n)
    if (str.size() == 0)
    {
        cout << out << endl;
        return;
    }
 
    // One be one move all characters at
    // the beginning of out (or result)
    for (int i = 0; i < str.size(); i++)
    {
        // Remove first character from str and
        // add it to out
        permute(str.substr(1), out + str[0]);
 
        // Rotate string in a way second character
        // moves to the beginning.
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}
 
// Driver code
int main()
{
    string str = "ABC";
    permute(str, "");
    return 0;
}
```

`STL` - `using next_permutation`

```
#include <bits/stdc++.h>
using namespace std;
 
// Function to print permutations of string str
// using next_permutation
void permute(string str)
{
    // Sort the string in lexicographically
    // ascending order
    sort(str.begin(), str.end());
 
    // Keep printing next permutation while there
    // is next permutation
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}
 
// Driver code
int main()
{
    string str = "CBA";
    permute(str);
    return 0;
}
```
