#include<iostream>
using namespace std;

int part(int* arr,int s,int e){
    int piot = arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[s]>=arr[i]){
            count++;
        }
    }
    int index = s+count;
    swap(arr[s],arr[index]);
    int m=0;
    int n=e;

    while (m<index&&n>index)
    {
        while (arr[m]<piot)
        {
            m++;
        }
         while (arr[n]>piot)
        {
            n--;
        }
        if(m<index&&n>index){
            swap(arr[m++],arr[n--]);
        }
    }
    

    return index;

}

void quick(int* arr,int s,int e){
    if(s>=e){
        return;
    }

    int p=part(arr, s, e);

    quick(arr,s,p-1);
    quick(arr,p+1,e);

}

int  main()
{
    int arr[]={543,6246,54,6435,623,456,2346,2354};
    int n=8;
    int s=0;

    quick(arr,s,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}