#include<iostream>
using namespace std;

int firstindex(int arr[],int size,int key){

int s=0;
int e=size-1;
int mid=(e+s)/2;
int ans=-1;
while(s<=e){
if(key==arr[mid]){
ans=mid;
e=mid-1;
}
else if(key>arr[mid]){
s=mid+1;
}
else if(key<arr[mid]){
e=mid-1;
}
mid = s+(e-s)/2;
}
return ans;
}

int lastindex(int arr[],int size,int key){
int s=0;
int e=size-1;
int mid = s+(e-s)/2;
int ans=-1;
while(s<=e){
if(key==arr[mid]){
ans=mid;
s=mid+1;
}
else if(key<arr[mid]){
e=mid-1;
}
else if(key>arr[mid]){
s=mid+1;
}
mid=(s+e)/2;
}
return ans;
}


int main(){

int arr[20]={2,2,2,3,4,6,6,8,8,8,12,12,12,12,14,14,14,14,16,160};

int first=firstindex(arr,20,8);

cout<<"first index is"<<first<<" "<<endl;
int last = lastindex(arr,20,8);
cout<<"last index is"<<last<<" ";
} 
