#include<bits/stdc++.h>
class Solution {
public:
    int alternateDigitSum(int n) {
        int o = 0, e = 0, c = 0;
        while(n > 0){
            if(c%2) o += n%10;
            else e += n%10;
            c++;
            n = n/10;
        }
        return (c%2)?e - o:o-e;    }
        
};