#include<iostream>
using namespace std;

int main(){

int n;
cout<<"enter a number"<<endl;

cin>>n;
int step=0;
for(int i=1;i<=n;i++){

if(n%i==0){
step++;
}

}

if(step > 2){
cout<<"not prime";
}

else{
cout<<"prime";
}
}



