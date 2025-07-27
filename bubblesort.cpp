#include<iostream>
using namespace std;

void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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
    int a[]={6,54,62,56,456,5673,4562,45,656,457};
    int n=sizeof a/sizeof a[0];
    int some=sizeof a;
    cout<<some<<endl;
    bubble(a,n);
}