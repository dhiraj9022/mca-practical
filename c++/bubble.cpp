#include<iostream>
using namespace std;

void swap(int *a, int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main(){
    int n;
    cout<<"enter the number of size\n";
    cin>>n;

    int* a = new int[n];
    cout<<"enter the array elements\n";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //bubble sort
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                swap(a, i, j);
            }
        }
    }

    cout<<"After sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}