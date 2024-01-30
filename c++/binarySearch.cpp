#include<iostream>
using namespace std;

int binSearch(int* a, int target, int n){
    int start = 0; 
    int end = n - 1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(a[mid] == target){
           return mid;
        }
        if(a[mid] < target){
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"enter the size : ";
    cin>>n;

    int* a = new int[n];
    cout<<"enter the array elements :";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int target;
    cout<<"enter the elements to search :";
    cin>>target;
    int pos = binSearch(a, target, n);
    if(pos == -1){
        cout<<"not found";
    }
    else{
        cout<<"elements found at location :"<<(pos+1);
    }
    return 0;
}