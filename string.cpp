#include<iostream>
using namespace std;

int length(char name[]){
    int count = 0 ;
    int i=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int main()
{
    char name[20];
    cin>>name;
    int n=length(name);
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<endl<<name<<endl;
    return 0;
}