class Solution {
public:
    int romanToInt(string s) {
        // int sum=0;
        // for(int i=0; i<s.length(); i++){
        //     if(s[i]=='I'){
        //         sum+=1;
        //     }else if(s[i]=='V'){
        //         sum+=5;
        //     }else if(s[i]=='X'){
        //         sum+=10;
        //     }else if(s[i]=='L'){
        //         sum+=50;
        //     }else if(s[i]=='C'){
        //         sum+=100;
        //     }else if(s[i]=='D'){
        //         sum+=500;
        //     }else if(s[i]=='M'){
        //         sum+=1000;
        //     }
        // }
        // return sum;
        
        unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
                                   
   int sum = T[s.back()];
   for (int i = s.length() - 2; i >= 0; --i) 
   {
       if (T[s[i]] < T[s[i + 1]])
       {
           sum -= T[s[i]];
       }
       else
       {
           sum += T[s[i]];
       }
   }
   
   return sum;
    }
};