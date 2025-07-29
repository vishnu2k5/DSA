#include<iostream>
using namespace std;

bool fun(int *arr, int k, int e,int s=0){
    int m=(s+e)/2;
    if(k==arr[m]){
        return 1;
    }
    if(k > arr[m]){
        fun(arr,k,e,m+1);
    }
    if(k<arr[m]){
        fun(arr,k,m-1);   
    }

    return 0;

}

int main()
{
    int arr[10]={1,2,4,5,6,7,8,9,10};
    int k=7;
    int n=10;
    
    bool ans=fun(arr,k,n-1);
    if(ans)
    {
        cout<<"found"<<endl;
    }
}