class Solution {
public:
    string mergeAlternately(string a, string b) {
        
        int l1 = 0, l2 = 0;
        string res = "";
        while(l1<a.size() or l2<b.size())
        {
            if(l1<a.size())res+=a[l1++];
            if(l2<b.size())res+=b[l2++];
        }

        return res;
    }
};