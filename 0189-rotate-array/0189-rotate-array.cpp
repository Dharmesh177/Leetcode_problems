class Solution {
public:
    void rotate(vector<int>& a, int k) {
        //aparoach 2 with reverse and two pointer 
        k=k%a.size();
        int i=0; 
        int j=a.size()-(k+1);
        while(i<j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        i=a.size()-k;
        j=a.size()-1;
         while(i<j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
         i=0;
        j=a.size()-1; //forget to minus 1
         while(i<j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        
    }
};