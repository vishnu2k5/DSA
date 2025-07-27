#include<iostream>
using namespace std;

int lastindex(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int m=(e+s)/2;
    while(s<=e){
        if(k==arr[m]){
            s=m+1;
            m=(e+s)/2;
            ans=m;
        }
        else if (k>arr[m])
        {
            s=m+1;
            m=(e+s)/2;
        }
        else if (k<arr[m])
        {
            e=m-1;
            m=(e+s)/2;
        }
        
    }
    return ans;
}

int main(){

    int a[]={1,2,2,3,3,3,4,4,4,4,4,4
    };
    int n=sizeof(a) / sizeof(a[0]);
    int k=4;
    int ans=lastindex(a,n,k);
    cout<<ans;
    int lans=firstindeax(a,n,k);
    cout<<lans;
}


int firstindeax(int ar[],int n,int k){
    int s=0;
    int e=n-1;
     int ans=-1;
    while(s<=e){
        int m=(s+e)/2;
        if(k==ar[m]||k>ar[m]){
            s=m+1;
           ans=m;
        }
        else{
            e=m-1;
        }
    }
    return ans;
}
