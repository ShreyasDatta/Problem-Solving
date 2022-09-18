Q. Given a String S, reverse the string without reversing its individual words. Words are separated by dots.
> S = i.like.this.program.very.much
> Output: much.very.program.this.like.i

`Python`
```
def reverseWords(self,S):
  a=S.split(".")
  ans=a[::-1]
  return ".".join(ans)
 ```
 
 `C++`
 ```
 string reverseWords(string s) { 
        
        vector<string> tmp;
        string str = "";
        string ans = "";
        
        for (int i=0; i < s.length(); i++){
            if (s[i] == '.'){
                tmp.push_back(str);
                str = "";
            }
            else
                str += s[i];
        }
        
        tmp.push_back(str);
     
        int i;
        for (i = tmp.size() - 1; i > 0; i--)
            ans=ans+tmp[i]+".";
        ans=ans+tmp[i];
        return ans;
    } 
    ```
