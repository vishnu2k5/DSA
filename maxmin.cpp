#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int j=0;j<n;j++){
for(int m=0;m<n;m++){
if(arr[j]>arr[m]){
int temp=arr[j];
arr[j]=arr[m];
arr[m]=temp;
}
}
}
for(int k=0;k<n;k++)
{
cout<<arr[k]<<" ";
}

cout<<"max element is:"<<arr[0];
cout<<"min element is:"<<arr[n-1];
return 0;
}
