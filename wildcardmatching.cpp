/*
Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).
The matching should cover the entire input string (not partial).

 */

class Solution {
public:
    bool isMatch(string s, string p) {
        int r = p.size();
        int c = s.size();
        vector<bool>arr(c+1,false);
        vector<bool>brr(c+1,false);
        arr[0] = true;
        bool dn = true;

        for(int i=1;i<=r;i++){
            if(p[i-1]!='*')
                dn = false;
            if(dn)
                brr[0] = true;
            else
                brr[0] = false;
                
            for(int j=1;j<=c;j++){
                if(p[i-1]=='?'){
                    brr[j] = arr[j-1];continue;
                }

                if(p[i-1]=='*'){
                    brr[j] = arr[j-1] | arr[j] | brr[j-1];
                    continue;
                }

                if(p[i-1]==s[j-1])
                    brr[j] = arr[j-1];
                else
                    brr[j] = false;
                
            }

            arr = brr;
        }
        return arr[c];
    }
};
