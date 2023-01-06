
class Solution {
public:
    void prime_factors(int n,map<int,int> &mp)
    {

        if(n<=1)return;
        while(n%2==0)
        {
            mp[2]++;
            n/=2;
        }
        while(n%3==0)
        {
            mp[3]++;
            n/=3;
        }

        for(int i=5;i*i<=n;i=i+6)
        {
        while(n%i==0)
        {
            mp[i]++;
            n/=i;
        }
        while(n%(i+2)==0)
        {
            mp[i+2]++;
            n/=(i+2);
        }
        }
        if(n>3)
        mp[n]++;
    }


    
    int trailingZeroes(int n) {
        map<int,int> mp;
        for(int i=1;i<=n;++i)
        {
            prime_factors(i,mp);
        }

        int ct=min(mp[2],mp[5]);
        return ct;
    }
};


//Optimal solution runtime 0ms
//   return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
