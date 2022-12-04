class Solution {
public:
    string frequencySort(string s) {
        string ret;
        unordered_map<char,int> mymap;
        for(auto i:s){
            mymap[i]+=1;
        }
        map<int,string> myrmap;
        for(unordered_map<char,int>::iterator it =mymap.begin();it!=mymap.end();it++){
            string tmp(it->second,it->first);
            myrmap[it->second]+=tmp;
        }
        for(map<int,string>:: reverse_iterator it =myrmap.rbegin();it!=myrmap.rend();it++){
           ret+=it->second;
        }
        return ret;
    }
};