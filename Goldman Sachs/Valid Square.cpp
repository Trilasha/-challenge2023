class Solution {
public:
    #define pb push_back
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<pair<int,int>> vp;
        vp.pb({p1[0],p1[1]});
          vp.pb({p2[0],p2[1]});
            vp.pb({p3[0],p3[1]});
              vp.pb({p4[0],p4[1]});

    sort(vp.begin(),vp.end());
    int dis1=abs(vp[0].first-vp[1].first)+abs(vp[0].second-vp[1].second);
    int dis2=abs(vp[1].first-vp[3].first)+abs(vp[1].second-vp[3].second);
    int dis3=abs(vp[3].first-vp[2].first)+abs(vp[3].second-vp[2].second);
    int dis4=abs(vp[3].first-vp[1].first)+abs(vp[3].second-vp[1].second);

    int diag1=abs(vp[0].first-vp[3].first)+abs(vp[0].second-vp[3].second);
    int diag2=abs(vp[1].first-vp[2].first)+abs(vp[1].second-vp[2].second);

    if(dis1==dis2 && dis2==dis3 && dis3==dis4 && diag1==diag2 && dis1!=0)
    return true;

    return false;

    }
};