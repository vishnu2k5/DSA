#include<iostream>
using namespace std;

int main(){
int n=1024;

while(n!=1){
 if(n%2!=0){
cout<<"false";
return 0;
}
n=n/2;
if(n==1){
cout<<"true";
}
}
}


