#include<iostream>
using namespace std;




int fac(int a,int n=0){
    if(n==0)
    {
        return 1;
    }
    int ans=a*fac(a,n-1);
    return ans;
}

int main()
{
    int n=3;
    int a=2;
    int ans=fac(a,n);
    cout<<ans;
}