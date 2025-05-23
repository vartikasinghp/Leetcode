class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mymap;
        mymap[0]=1;
        int count=0 ,preSum=0;
        for(int i=0 ; i<n ; i++){
            preSum += nums[i];
            int remove = preSum -k;
            count += mymap[remove];
            mymap[preSum]+=1;
        }
        return count;
        
    }
};