
//a1
// #include<iostream>
// #include<bits/stdc++.h>


// using namespace std;


// void fibo_iter(int n){
//     if(n==1){
//         cout<<0<<endl;
//         return;
//     }

//     if(n==2){
//         cout<<0<<" "<<1<<endl;
//         return;
//     }

//     cout<<0<<" "<<1<<" ";
//     int first=1;
//     int second=0;
//     for(int i=3;i<=n;i++){
//         int curr=first+second;
//         cout<<curr<<" ";
//         second=first;
//         first=curr;
//     }
// }


// int fibo_recur(int n,vector<int>&vis){
//     if(n==1){
//         if(!vis[n])
//         cout<<0<<" ";

//         vis[n]=1;
//         return 0;
//     }

//     if(n==2){
//         fibo_recur(1,vis);

//         if(!vis[n])
//         cout<<1<<" ";

//         vis[n]=1;
//         return 1;
//     }

//     else{
//         int curr=fibo_recur(n-1,vis)+fibo_recur(n-2,vis);

//         if(!vis[n])
//          cout<<curr<<" ";
//         vis[n]=1;
       
//         return curr;
//     }
// }



// int main(){
//     vector<int>vis(20,0);
//     fibo_recur(6,vis);
//     cout<<"\n";

//     fibo_iter(6);
// }















//a4

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;


// bool check(vector<vector<int>>&grid,int i,int j){
//     int l,m;
//     l=0;

//     while(l<grid.size()){
//         if(l==i){
//             l++;
//             continue;
//         }

//         if(grid[l][j]==1) return false;
//         l++;
//     }

//     m=0;

//     while(m<grid.size()){
//         if(m==j){
//             m++;
//             continue;
//         }

//         if(grid[i][m]==1) return false;
//         m++;
//     }

//     l=i+1;
//     m=j+1;

//     while(l<grid.size() && m<grid.size()){
//         if(grid[l][m]==1) return false;
//         l++;
//         m++;
//     }

//     l=i-1;
//     m=j-1;

//     while(l>=0 && m>=0){
//         if(grid[l][m]==1) return false;
//         l--;
//         m--;
//     }

//     l=i+1;
//     m=j-1;
//     while(l<grid.size() && m>=0){
//         if(grid[l][m]==1) return false;
//         l++;
//         m--;
//     }

//     l=i-1;
//     m=j+1;

//     while(l>=0 && m<grid.size()){
//         if(grid[l][m]==1) return false;
//         l--;
//         m++;
//     }
//     return true;
// }



// void solve(vector<vector<int>>&grid,int row,int first){
//     if(row==grid.size()){
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid.size();j++){
//                 cout<<grid[i][j]<<" ";
//             }
//             cout<<"\n";
//         }
//         cout<<"\n\n";
//         return ;
//     }

//     if(row==first){
//         solve(grid,row+1,first);
//         return;
//     }

//     for(int i=0;i<grid.size();i++){
//         grid[row][i]=1;
//         if(check(grid,row,i)){
//             solve(grid,row+1,first);
//         }
//         grid[row][i]=0;
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter size of the board\n";
//     cin>>n;

//     cout<<"Enter first position of the queen\n";
//     int x,y;
//     cin>>x>>y;
//     vector<vector<int>>board(n,vector<int>(n,0));
//     board[x][y]=1;
//     solve(board,0,x);
// }













//a5

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;


// int partition_det(vector<int>&nums,int low,int high){
//     int piv=nums[high];
//     int i=low;
//     for(int j=low;j<high;j++){
//         if(nums[j]<=piv){
//             swap(nums[i],nums[j]);
//             i++;
//         }
//     }
//     swap(nums[i],nums[high]);
//     return i;
// }


// int rannd(vector<int>&nums,int low,int high){
//     int idx=low+rand()%(high-low+1);

//     swap(nums[idx],nums[high]);
//     return partition_det(nums,low,high);
// }

// void quick(vector<int>&nums,int low,int high){
//     if(low<high){
//         int p=rannd(nums,low,high);
//         quick(nums,low,p-1);
//         quick(nums,p+1,high);
//     }
// }







// int main(){
//     vector<int>arr={1,5,2,4,3,8};

//     quick(arr,0,5);

//     for(int i=0;i<=5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n\n";
// }







//a2

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;



// int recursive(vector<int>&wts,vector<int>&money,int i,int capacity){
//     if(i>=wts.size()) return 0;

//     int pick,npick;
//     pick=0;
//     if(capacity>=wts[i]){
//         pick=money[i]+recursive(wts,money,i+1,capacity-wts[i]);
//     }

//     npick=recursive(wts,money,i+1,capacity);

//     return max(pick,npick);
// }



// int memoize(vector<int>&wts,vector<int>&money,int i,int capacity,vector<vector<int>>&dp){
//     if(wts.size()<=i) return 0;

//     if(dp[i][capacity]!=-1) return dp[i][capacity];

//     int pick,npick;
//     pick=0;
//     if(capacity>=wts[i]){
//         pick=money[i]+memoize(wts,money,i+1,capacity-wts[i],dp);
//     }

//     npick=memoize(wts,money,i+1,capacity,dp);

//     dp[i][capacity]=max(pick,npick);

//     return dp[i][capacity];
// }

// int tabulate(vector<int>&wts,vector<int>&money,int capacity){
//     vector<vector<int>>dp(wts.size(),vector<int>(capacity+1,0));
//     for(int i=wts[0];i<=capacity;i++){
//         dp[0][i]=money[0];
//     }

//     for(int i=1;i<wts.size();i++){
//         for(int j=0;j<capacity+1;j++){
//             int pick,npick;
//             pick=0;
//             if(j>=wts[i]){
//                 pick=dp[i-1][j-wts[i]]+money[i];
//             }
//             dp[i][j]=max(pick,dp[i-1][j]);
//         }
//     }
//     return dp[wts.size()-1][capacity];
// }


// int main(){
//     vector<int>weights={2,1,3,2};
//     vector<int>money={12,10,20,15};
//     int capacity=5;
//     vector<vector<int>>dp(weights.size(),vector<int>(capacity+1,-1));

//     cout<<recursive(weights,money,0,5)<<"\n";
//     cout<<memoize(weights,money,0,5,dp)<<"\n";
//     cout<<tabulate(weights,money,5)<<"\n";
// }















//a2

// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;


// struct Node{
//     int freq;
//     Node*left;
//     Node * right;
//     char data;
//     public:

//     Node(){
//         freq=0;
//         data=' ';
//         left=NULL;
//         right=NULL;
//     }
// };


// struct Compare{
//     bool operator()(Node * a , Node *b){
//         return a->freq>b->freq;
//     }
// };



// class Huffman{
//     public:
//     Node *root;
//     string dat;
//     map<char,string>encodin;

//     void construct_tree(){
//         vector<int>vec(26,0);
//         for(int i=0;i<dat.length();i++){
//             vec[dat[i]-'a']++;
//         }

//         priority_queue<Node *,vector<Node*>,Compare>pq;

//         for(int i=0;i<26;i++){
//             if(vec[i]==0) continue;

//             Node *curr=new Node();
//             curr->freq=vec[i];
//             curr->data='a'+i;
//             pq.push(curr);
//         }
//         //cout<<pq.size()<<endl;
//         while(pq.size()>1){
//             Node *left=pq.top();
//             pq.pop();
//             Node *right=pq.top();
//             pq.pop();

//             Node * parent=new Node();
//             parent->data=' ';
//             parent->freq=left->freq+right->freq;
//             parent->left=left;
//             parent->right=right;

//             pq.push(parent);
//             // cout<<"hi\n";
//         }

//         root=pq.top();
//         pq.pop();
//     }


//     string encode(string data){
//         string res="";
//         for(int i=0;i<data.length();i++){
//             cout<<encodin[data[i]]<<endl;
//             res+=encodin[data[i]];
//         }
//         return res;
//     }

//     void get_codes(){
//         if(root==NULL){
//             return;
//         }

//         if(!root->left && ! root->right){
//             encodin[root->data]="0";
//             return;
//         }

//         queue<pair<Node*,string>>Q;
//         Q.push({root,""});

//         while(!Q.empty()){
//             Node*current=Q.front().first;
//             string curr=Q.front().second;
//             Q.pop();

//            string left=curr+'0';
//            string right=curr+'1';
//            if(current->left){
//             Q.push({current->left,left});
//            }
//            if(current->right){
//             Q.push({current->right,right});
//            }

//            if(current->data!=' '){
            
//             encodin[current->data]=curr;
//            }

//         }
//     }


// };


// int main(){
//     Huffman obj;
//     obj.dat="balllla";
//     obj.construct_tree();
//     obj.get_codes();
//     cout<<obj.encode("balllla")<<endl;
// }













//gd

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

float f(float x){
    return (x+3)*(x+3);
}

float gradient(float x){
    return 2*(x+3);
}


int main(){
    int start,max_iter;
    float lr,epsilon;

    cout<<"Enter start point\n";
    cin>>start;

    cout<<"Enter lr\n";
    cin>>lr;
    cout<<"Enter epsilon\n";
    cin>>epsilon;
    cout<<"Enter max iterations\n";
    cin>>max_iter;

    float x=start;
    for(int i=0;i<max_iter;i++){
        float grad=gradient(x);

        float x_new=x-lr*grad;

        if(abs(x-x_new)<epsilon){
            cout<<"Stopped after iteration "<<i+1<<endl;
            x=x_new;
            break;
        }
        x=x_new;
    }

    cout<<"Value of X is "<<x<<endl;
    cout<<"Value of Y is "<<f(x)<<endl;

}