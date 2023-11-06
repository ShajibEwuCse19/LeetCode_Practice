class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        map<int,int>cnt;
        for(auto i : v)cnt[i]++;

        vector<pair<int,int>>res;
        for(auto i : cnt)res.push_back({i.second, i.first});

        sort(res.rbegin(), res.rend());

        vector<int>out;
        for(int i=0; i<k; i++)out.push_back(res[i].second);

        return out;
    }
};