#include<iostream>
using namespace std;

void swap(int* a, int i){
    int t = a[i+1];
    a[i+1] = a[i];
    a[i] = t;
}

int main(){

    int n;
    cout<<"enter the size:";
    cin>>n;

    int* a = new int[n];
    cout<<"enter the array elements :";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[min]){
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
    

    cout<<"after sorting : ";
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}