class Solution {
public:
    string getHint(string secret, string guess) {
        map<char,int> mp;
        int n=secret.size();
        int bulls=0;
        int cows=0;
        for(int x=0;x<n;++x)
        mp[secret[x]]++;

        for(int x=0;x<n;++x)
        {
            if(secret[x]==guess[x])
            {
                bulls++;
                mp[secret[x]]--;
            }
        }

        for(int x=0;x<n;++x)
        {
            
            if(secret[x]!=guess[x] && mp[guess[x]]>0)
            {
                cows++;
                mp[guess[x]]--;
            }
        }

        string ans="";
        ans+=to_string(bulls);
        ans+='A';
        ans+=to_string(cows);
        ans+='B';
        
        return ans;
    }
};

