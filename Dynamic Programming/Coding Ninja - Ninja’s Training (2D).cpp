
int f(int day,int preT,vector<vector<int>> &points, vector<vector<int>> &dp)
{
    if(day==0){
         int mx=0;
         for(int i=0;i<3;i++){
             if(i!=preT)
              mx=max(mx,points[day][i]);
         }
         return  mx;
    }
    if(dp[day][preT]!=-1)
     return dp[day][preT];

    int mx=0;
    for(int i=0;i<3;i++){
          if(i!=preT)
              mx=max(mx,points[day][i]+f(day-1,i,points,dp));
    }
    return  dp[day][preT]=mx;

}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>>dp(n,vector<int>(4,-1));
    return f(n-1,3,points,dp);
}