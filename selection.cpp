#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{

    for(int i=0;i<n;i++){
        int tmep;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            tmep=arr[i];
            arr[i]=arr[j];
            arr[j]=tmep;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[]={1,4,2,45,7,545,436,3};
    int n=sizeof a/sizeof a[0];
    selectionsort(a,n);
}