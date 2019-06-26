vector<int> Solution::lszero(vector<int> &A) {
    int n=A.size();
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]+A[i-1];
    }
    map<int, vector<int>>M;
    for(int i=0;i<=n;i++)
    {
        M[dp[i]].push_back(i);
    }
    int maxlength=0;
    int maxstart=0;
    int maxend=0;
    for(auto i:M)
    {
        int s=i.second[0];
        int e=i.second[i.second.size()-1];
        
        if(e-s>maxlength)
        {
            maxlength=e-s;
            maxstart=s;
            maxend=e;
        }
        
        if(s<maxstart && e-s==maxlength)
        {
            maxlength=e-s;
            maxstart=s;
            maxend=e;
        }
    }
    vector<int> ans;
    for(int i=maxstart;i<maxend;i++)
    {
        ans.push_back(A[i]);
    }
    return ans;
    
}
