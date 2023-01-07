class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank=0;
        int n=cost.size();
        // vector<pair<int,int>> st;
        // for(int i=0; i<gas.size(); i++){
        //     st.push_back({cost[i],gas[i]});
        // }
        // sort(st.begin(),st.end());
        // int c=0,j=0;;
        // while(st[j].first > st[j].second){
        //     c++;j++;
        //     break;
        // }
        // tank=st[c].second;
        // for(int i=1; i<gas.size(); i++){
        //     tank=tank-st[i-1].first+st[i].second;
        // }
        // if(tank<st[n-1].first) return -1;
        // int res=0;
        //  // tank=st[n-1].second;
        // for(int i=1; i<gas.size(); i++){
        //     if(cost[i]==tank) res=i;
        // }
        // return res+1;
        
        int total_gas=0,total_cost=0;
        int curr_gas=0, starting_point=0;
        for(int i=0;i<n;i++)
        {
            //these two variable are to check if no case is possible
            total_gas+=gas[i];
            total_cost+=cost[i];
            //for checking the total present gas at index i
            curr_gas+=gas[i]-cost[i];
            if(curr_gas<0)
            {
               //there is a breakdown....so we will start from next point or index
                starting_point=i+1;
                //reset our fuel 
                curr_gas=0;
            }
        }
        return (total_gas<total_cost)?-1:starting_point;     
    }
};