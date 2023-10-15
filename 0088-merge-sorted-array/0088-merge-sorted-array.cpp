class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>sortList;

        int L1 = 0, L2 = 0;
        while(L1 < m or L2 < n)
        {
            if(L1 < m and L2 < n)
            {
                if(nums1[L1] <= nums2[L2])
                {
                    sortList.push_back(nums1[L1]);
                    L1++;
                }
                else  if(nums1[L1] >= nums2[L2])
                {
                    sortList.push_back(nums2[L2]);
                    L2++;
                }
            }
            else
            {
                while(L1 < m)
                {
                    sortList.push_back(nums1[L1]);
                    L1++;
                }

                while(L2 < n)
                {
                    sortList.push_back(nums2[L2]);
                    L2++;
                }
            }
        }

        for(int i=0; i<sortList.size(); i++)
        {
            nums1[i] = sortList[i];
        }
    }
};