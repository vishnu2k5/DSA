#include<iostream>
using namespace std;

int rev(int x){

int y=0;

while(x!=0){
 int num = x%10;

y=y*10+num;
x=x/10;
}
return y;
}

int main(){
int n;
cin>>n;

int rre=rev(n);

cout<<rre;

return 0;
}
