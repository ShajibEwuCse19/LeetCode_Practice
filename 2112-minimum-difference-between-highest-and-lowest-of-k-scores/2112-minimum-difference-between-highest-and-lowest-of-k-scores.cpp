class Solution {
public:
    int minimumDifference(vector<int>& v, int k) {
        sort(v.rbegin(), v.rend());

        int l=0, r=k-1;
        int res = INT_MAX;
        while(r<v.size())
        {
            int dif = v[l] - v[r];
            res = min(res,dif);

            l++;
            r++;
        }

        return res;
    }
};