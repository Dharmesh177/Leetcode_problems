class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> hash(26,0);
        vector<int> phash(26,0);
        int l = s.size(), win=p.size();
        if(l<win){ return ans;}
        int left=0,right=0;
        while(right<win){
            phash[p[right]-'a'] +=1;
            hash[s[right]-'a'] +=1;
            right++;
        }
        right-=1;
        while(right<l){
            if(phash == hash)
            {
                ans.push_back(left);
            }
            right+=1;
            if(right!=l){
                hash[s[right]-'a'] += 1;
            }
            hash[s[left]-'a'] -=1;
            left+=1;
        }
        return ans;
    }
};

 