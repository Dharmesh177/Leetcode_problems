class Solution {
public:
int sort(map<int, int>& M,int n)
{
  
    
    multimap<int, int> MM;
  
   
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
    map<int, int>::reverse_iterator it;
 
         int count =0;
         int ans = 0;
  for (it = MM.rbegin(); it != MM.rend(); it++) {
      if(count>=n/2) break;
       count += it->first;
       ans++;
    }
    return ans;
}

    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        map<int,int> m;
        for(int i =0;i<n;i++){
            m[arr[i]]++;
        }
      
       
       int ans = sort(m,n);
        return ans;
    }
};