mt19937 rng(0);
class Solution {

private:

    int createPartition(vector<int>&nums, int L, int R)
    {
        int pvt = nums[R];
        int i = L - 1;
        for(int j = L; j < R; j++)
        {
            if(nums[j] <= pvt) swap(nums[++i], nums[j]);
        }

        swap(nums[i+1], nums[R]);

        return i+1;
    }

    void partial_sort(vector<int>&nums, int k)
    {
        //random_shuffle(nums.begin(), nums.end());
        shuffle(nums.begin(), nums.end(), rng);

        int L = 0, R = nums.size() - 1;
        int MaxIteration = 2*log2(nums.size()); ///Threshold
        while(L < R and MaxIteration--)
        {
            int pvtIdx = createPartition(nums, L, R);

            if(pvtIdx < k) L = pvtIdx + 1;
            else if(pvtIdx > k) R = pvtIdx - 1;
            else break;
        }
    }
    int findKthSmallest(vector<int>&nums, int k)
    {
        partial_sort(nums, k);
        return nums[k];
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans = findKthSmallest(nums, nums.size() - k);
        return ans;
    }
};