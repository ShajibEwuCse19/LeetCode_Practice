class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0;
        for(int i=0; i<s.size(); i++)
        {
            while(l < t.size())
            {
                //cout<<i<<" "<<l<<endl;
                if(s[i] == t[l])break;
                
                l++;
            }
            l++;
            if(l>t.size())return false;
        }//cout<<"new"<<endl;

        return true;
    }
};