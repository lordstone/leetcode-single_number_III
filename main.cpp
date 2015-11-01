class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()<=2) return nums;
        int sum = 0;
        for(int i = 0; i < nums.size(); i ++){
            sum = sum ^ nums[i];
        }
        int myxor = sum & -sum;
        int set1 = 0, set2 = 0;
        for(int i = 0; i <  nums.size(); i++){
            if(nums[i] & myxor){
                set1 ^= nums[i];
            }else{
                set2 ^= nums[i];
            }
        }
        vector<int> mynew;
        mynew.push_back(set1);
        mynew.push_back(set2);
        return mynew;
    }
};
