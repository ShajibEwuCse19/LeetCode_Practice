class Solution {
public:
    vector<int> replaceElements(vector<int>& v) {
        int mx = -1;
        for(int i=v.size()-1; i>=0; i--)
        {
            int a = v[i];
            v[i] = mx;
            mx = max(mx,a);
        }

        return v;
    }
};