#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void fibo_iter(int n){
    if(n==1){
        cout<<0<<endl;
        return;
    }

    if(n==2){
        cout<<0<<" "<<1<<endl;
        return;
    }
    int one,two;
    two=0;
    one=1;
    cout<<0<<" "<<1<<" ";
    for(int i=3;i<=n;i++){
        cout<<two+one<<" ";
        int temp=one+two;
        two=one;
        one=temp;
    }
}


int fibo(int n,vector<int>&vis){
    
    if(n==1){
        if(!vis[n])
        cout<<0<<" ";
        vis[n]=1;
        return 0;
    }
    if(n==2){
        fibo(1,vis);
        if(!vis[n])
        cout<<1<<" ";
        vis[n]=1;
        return 1;
        
    }
    else{
        int curr=fibo(n-2,vis)+fibo(n-1,vis);
        if(!vis[n])
        cout<<curr<<" ";
        vis[n]=1;
        return curr;
    }
    
}


int main(){
    // fibo_iter(4);
    vector<int>vis(1000,0);
    fibo(6,vis);
}