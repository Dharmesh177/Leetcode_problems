class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // string s="";
        // for(auto i:num){
        //     s+=i;
        // }
        // int x= stoi(s);
        // int y=x+k;
        // vector<int> ss;
        // while(y){
        //     int tt=y%10;
        //     ss.push_back(tt);
        //     y/=10;
        // }
        // reverse(ss.begin(),ss.end());
        // return ss;
         for(int i=num.size()-1;i>=0;i--){
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
        }
        while(k > 0){
            num.insert(num.begin(), k%10);
            k /= 10;
        }
        return num;
        
    }
};