class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
         vector<vector<  int>> res;
         
          if (num.empty())
            return res;
           int n = num.size(); 
           sort(num.begin(),num.end());
        
          for(int i=0; i<n; i++){
               long long int t3 = target-num[i];
              for(int j=i+1; j<n; j++){
                 long long int t2 = t3 - num[j];
                  
                   int front = j + 1;
                   int back = n - 1;
                  
                   while(front < back)
                   {
                        long long int two_sum = num[front] + num[back];
                       
                        
                    if (two_sum < t2) front++;
                
                    else if (two_sum > t2) back--;
                       
                        else {
                    
                        vector< int> quadruplet(4, 0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);
                    
                        // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                
                    }
                   }
                  while(j + 1 < n && num[j + 1] == num[j]) ++j;
                  
              }
              
               while (i + 1 < n && num[i + 1] == num[i]) ++i;
          }
        return res;
    }
};