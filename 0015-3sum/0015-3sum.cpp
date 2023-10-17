class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>result;

        for(int i=0; i<nums.size(); i++)
        {
            int a = nums[i]; //find b+c where b+c will be equal to -a. then a + (-a) = 0

            //usign two pointer method to find two sum
            int Left = i+1, Right = nums.size()-1;
            int find = -a;
            while(Left < Right)
            {
                int sum = nums[Left] + nums[Right];
                if(sum < find)Left++;
                else if(sum > find)Right--;
                else 
                {
                    result.insert({a, nums[Left], nums[Right]});
                    Left++;
                    Right--;
                }

                // if(Left+1 < nums.size())
                // {
                //     while(nums[Left] == nums[Left+1])
                //     {
                //         Left++;
                //     }
                    
                // }

                // if(Right-1 > 0)
                // {
                //     while(nums[Right] == nums[Right-1])
                //     {
                //         Right--;
                //     }
                // }
            }

        //    if(i+1 < nums.size())
        //    {
        //        while(nums[i] == nums[i+1])
        //        {
        //            i++;
        //        }
        //    }

        }

        return vector<vector<int>>(result.begin(), result.end());
    }
};