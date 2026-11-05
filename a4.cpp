#include<bits/stdc++.h>
#include<iostream>

using namespace std;


bool check(vector<vector<int>>&grid,int i,int j){
    bool flag=true;
    int l,m;
    l=i;
    m=j;
    l--;
    while(l>=0){
        if(grid[l][m]==1) return false;
        l--;
    }
    l=i+1;
    while(l<grid.size()){
        if(grid[l][m]==1) return false;
        l++;
    }
    l=i;
    m=0;
    while(m<grid[0].size()){
        if(grid[l][m]==1 && m!=j) return false;
        m++;
    }

    l=i-1;
    m=j-1;
    while(l>=0 && m>=0){
        if(grid[l][m]==1) return false;
        l--;
        m--;
    }

    l=i+1;
    m=j+1;
    while(l<grid.size() && m<grid.size()){
        if(grid[l][m]==1) return false;
        l++;
        m++;
    }

    l=i-1;
    m=j+1;
    while(l>=0 && m<grid.size()){
        if(grid[l][m]==1) return false;
        l--;
        m++;
    }

    l=i+1;
    m=j-1;
    while(l<grid.size() && m>=0){
        if(grid[l][m]==1) return false;
        l++;
        m--;
    }
    return true;
}

void solve(vector<vector<int>>&grid,int row,int first){

    if(row==grid.size()){
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n\n";   
        return ;
    }

    if(first==row){
        solve(grid,row+1,first);
    }
    else{
    for(int i=0;i<grid.size();i++){
        grid[row][i]=1;
        if(check(grid,row,i)){
            solve(grid,row+1,first);
        }
        grid[row][i]=0;
    }
}
}


int main(){
    int n;
    cout<<"Enter the seize of the board\n";
    cin>>n;

    int x,y;
    cout<<"Enter position of first queen\n";
    cin>>x>>y;

    vector<vector<int>>grid(n,vector<int>(n,0));
    grid[x][y]=1;
    solve(grid,0,x);
    //solve(grid,0);

}