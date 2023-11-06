class Solution {
public:
    vector<int> getConcatenation(vector<int>& v) {
        int len = v.size();
        for(int i=0; i<len; i++)v.push_back(v[i]);

        return v;
    }
};