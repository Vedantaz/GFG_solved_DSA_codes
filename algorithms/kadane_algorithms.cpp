class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
<<<<<<< HEAD
=======

>>>>>>> fc687de48ecb85f65afcd96cf30837de80cabf9a
        int sum=0;
        int maxe = nums[0];
        for(int i=0;i<nums.size();i++){
            sum+= nums[i];
            if(sum>maxe) maxe = sum;
            if(sum<0) sum = 0;
<<<<<<< HEAD
=======

>>>>>>> fc687de48ecb85f65afcd96cf30837de80cabf9a
        }
        return maxe;

    }
};