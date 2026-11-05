#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int tabulation(vector<int>& wts, vector<int>& money, int capacity) {
    int n = wts.size();

    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int w = wts[0]; w <= capacity; w++) {
        dp[1][w] = money[0];
    }

    for (int i = 2; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {

            int pick = 0;

            if (w >= wts[i - 1]) {
                pick = money[i - 1] + dp[i - 1][w - wts[i - 1]];
            }

            int npick = dp[i - 1][w];

            dp[i][w] = max(pick, npick);
        }
    }

    return dp[n][capacity];
}



int memoized(vector<int>&wts,vector<int>&money,int i,int capacity,vector<vector<int>>&dp){
    if(i>=wts.size()) return 0;

    if(dp[i][capacity]!=-1) return dp[i][capacity];

    int pick,npick;
    pick=0;
    if(capacity>=wts[i]){
        pick=money[i]+memoized(wts,money,i+1,capacity-wts[i],dp);
    }
    npick=memoized(wts,money,i+1,capacity,dp);

    dp[i][capacity]=max(pick,npick);
    return dp[i][capacity];

    
}

int recursive(vector<int>&wts,vector<int>&money,int i,int capacity){
    if(i>=wts.size()) return 0;

    int pick,npick;
    pick=0;
    if(capacity>=wts[i]){
        pick+=money[i]+recursive(wts,money,i+1,capacity-wts[i]);
    }
    npick=recursive(wts,money,i+1,capacity);

    return max(pick,npick);
}


int main(){

    vector<int>weights={2,1,3,2};
    vector<int>money={12,10,20,15};
    cout<<recursive(weights,money,0,5)<<endl;
    vector<vector<int>>dp(4,vector<int>(6,-1));
    cout<<memoized(weights,money,0,5,dp)<<endl;
}