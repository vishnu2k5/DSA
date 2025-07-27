#include<iostream>
using namespace std;

void reve(int arr[],int n,int m){

    int s=0+m+1;
    int e=n-1;
    while(s<=e)
    {
        int temp = arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}

int main()
{
    int a[]={1,2,4,5,6,8,9,33};
    int n=sizeof a/sizeof a[0];
    int m=3;
    reve(a,n,m);
}