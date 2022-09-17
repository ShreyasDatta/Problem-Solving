Q. You are given a string 'S' of length 'N', you need to find the frequency of each of the characters from 'a' to 'z' in the given string.

`Python`
```
import string

def char_frequency(s):
    dict={}
    for letter in string.ascii_lowercase:
        dict[letter]=0
    for n in s:
        keys = dict.keys()
        if n in keys:
            dict[n] += 1
        else:
            dict[n] = 1
    for i in dict:
        print(dict[i], end =" ")
    
n=int(input())
m = {}
    
for j in range(n):
    s=input()
    char_frequency(s)
    print()
```
