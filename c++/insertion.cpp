#include<iostream>
using namespace std;

void swap(int* a, int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main(){

    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int* a = new int[n];
    cout<<"enter the array elements :";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    //insertion sort
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[i] < a[j]){
                swap(a, i, j);
            }
        }
    }

    cout<<"After insertion sort :";
    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}