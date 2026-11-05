#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct Node{
    char data;
    int frequency;
    Node *left;
    Node *right;

    public:

    Node(){
        data=' ';
        frequency=0;
        left=NULL;
        right=NULL;
    }
};

struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->frequency > b->frequency;
    }
};

class huffman{

    public:
    string data;
    map<char,string>mp;
    Node *root;

    void construct_tree(){
        vector<int>map(26,0);
        for(int i=0;i<data.length();i++){
            map[data[i]-'a']++;
        }

        priority_queue<Node *,vector<Node*>,Compare>pq;

        for(int i=0;i<26;i++){
            if(map[i]==0) continue;

            Node *curr=new Node();
            curr->data='a'+i;
            curr->frequency=map[i];
            curr->left=NULL;
            curr->right=NULL;
            pq.push(curr);
        }

        while(pq.size()>1){
            Node *left=pq.top();
            pq.pop();
            Node *right=pq.top();
            pq.pop();

            Node *parent=new Node();
            parent->frequency=left->frequency+right->frequency;
            parent->left=left;
            parent->right=right;
            parent->data=' ';
            pq.push(parent);
        }
        root=pq.top();

    }

    void get_codes(){

        if(root == NULL) return;

        if(root->left == NULL && root->right == NULL){
            mp[root->data] = "0";
            return;
        }
        queue<pair<Node*,string>>Q;
        Q.push({root,""});

        while(!Q.empty()){
            Node *curr=Q.front().first;
            string cur=Q.front().second;
            Q.pop();

            if(curr->data!=' '){
                mp[curr->data]=cur;
            }

            if(curr->left){
                string lef=cur+'0';
                Q.push({curr->left,lef});
            }

            if(curr->right){
                string rig=cur+'1';
                Q.push({curr->right,rig});
            }
        }
    }


    string encode(string dat){
        string res="";
        for(int i=0;i<dat.length();i++){
            res+=mp[dat[i]];
        }
        return res;
    }
    


};




int main(){
    huffman obj;
    cout<<"Enter the string\n";
    cin>>obj.data;
    obj.construct_tree();
    obj.get_codes();
    cout<<obj.encode("banana");


}