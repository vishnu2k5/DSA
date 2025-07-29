#include<iostream>
using namespace std;


void mearg(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *fierst = new int[len1];
    int *second = new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        fierst[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[k++];
    }
    int i1=0;

    int i2=0;
    k=s;
    while(i1<len1&&i2<len2){
        if(fierst[i1]<second[i2]){
            arr[k++]=fierst[i1++];
        }
        else{
            arr[k++]=second[i2++];
        }
    }
    while(i1<len1){
        arr[k++]=fierst[i1++];
    }
    while(i2<len2){
        arr[k++]=second[i2++];

    }

}


void meargsort(int *arr,int s,int e)
{
    if(s>=e)
    {
        return;;
    }
    
    int mid=(s+e)/2;
    meargsort(arr,s,mid);
    meargsort(arr,mid+1,e);
    mearg(arr,s,e);

}
int main()
{
    int arr[]={6256,54,35,754,6,2346,546,5,756,7356,7};
    int n=11;
    meargsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    
}