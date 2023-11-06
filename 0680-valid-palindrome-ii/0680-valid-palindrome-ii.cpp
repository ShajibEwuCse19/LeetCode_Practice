class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.size()-1;
        while(l<r)
        {
            if(s[l] != s[r])
            {
                bool f = true;
                int x = 0;
                for(int i = l; i<r; i++,x++)
                {
                    if(s[i] != s[r-1-x])f = false;
                }

                if(!f)
                {
                    x = 0;
                    for(int i = l+1; i<=r; i++,x++)
                    {
                        if(s[i] != s[r-x])return false;
                    }
                }

                return true;
            }
            l++;
            r--;
        }

        return true;
    }
};