// Expected Time Complexity: O(N)
// Expected Space Complexity: O(1)



vector<int> singleNumber(vector<int> nums) 
    {
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto i:mp){
            if(i.second==1)
                v.push_back(i.first);
        }
        return v;
    }
