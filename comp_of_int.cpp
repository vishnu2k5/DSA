#include<iostream>
using namespace std;

int main(){

int n= 6;

int step=0;

while(n|step!=1){
n=(n>>1);
step++;
}

cout<<step;
return 0;
}

