#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int determin_part(vector<int>&nums,int low,int high){
    int pivot=nums[high];
    int i=low;
    for(int j=low;j<high;j++){
        if(nums[j]<=pivot){
            swap(nums[i],nums[j]);
            i++;
        }
    }
    swap(nums[i],nums[high]);
    return i;
}

int randomized(vector<int>&nums,int low,int high){
    int piv=low+ rand()%(high-low+1);
    swap(nums[piv],nums[high]);
    return determin_part(nums,low,high);
}

void quicksort_rand(vector<int>&nums,int low,int high){
    if(low<high){
        int p=randomized(nums,low,high);

        quicksort_rand(nums,low,p-1);
        quicksort_rand(nums,p+1,high);
    }
}


void quicksort(vector<int>&nums,int low,int high){
    if(low<high){
        int p=determin_part(nums,low,high);
        quicksort(nums,low,p-1);
        quicksort(nums,p+1,high);
    }
}



int main(){
    vector<int>nums={1,3,2,8,4,7,6};
    quicksort(nums,0,6);

    for(int i=0;i<=6;i++){
        cout<<nums[i]<<" ";
    }

    cout<<"\n\n";

    vector<int>n2={1,5,2,6,3};
    quicksort_rand(n2,0,4);
    for(int i=0;i<=4;i++){
        cout<<n2[i]<<" ";
    }
    cout<<endl;
}