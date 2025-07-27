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

int main(){
    char name[20];
    cin>>name;
    int s=0;
    int n=length(name);
    int e=n-1;
    while(s<=e){
        if(name[s]==name[e]){
            s++;
            e--;
        }
        else{
            cout<<"not a paldn";
            exit(0);
        }
    }
    cout<<"palan";

    return 1;

}