#include<iostream>
using namespace std;

int linear(int* a, int n, int target){
    for(int i=0; i<n; i++){
        if(a[i] == target) return i;
        else{
            return -1;
        }
    }
}

int main(){

    int n, target;
    cout<<"enter the size elements : ";
    cin>>n;
   
    int* a = new int[n];
    cout<<"enter the array elements :";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"enter the target value :";
    cin>>target;

    int pos = linear(a, n, target);
    if(pos == -1){
        cout<<"Not found";
    }
    else{
        cout<<"value found "<<(pos+1);
    }

    return 0;
}