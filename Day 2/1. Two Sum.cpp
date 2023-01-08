class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> m;
        int n=nums.size();
        for(int i=0;i<n;i++) m.push_back({nums[i],i});
        sort(m.begin(),m.end());
        int s=0;
        int e=n-1;
        while(s<e){
            int sum=m[s].first+m[e].first;
            if(sum==target)
            {
                return {m[s].second,m[e].second};
            }
            else if (sum<target ) s++;
            else e--;
        }
        return {-1,-1};
    }
};
