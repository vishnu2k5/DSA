#include<iostream>
#include<string>
using namespace std;


int main()
{
    string a="test";
    int n[26]={0};
    int number;

    for(int i=0;i<a.length();i++)
    {
        number=a[i]-'a';
        n[number]++;
    }
    int max=0;

    for(int j=0;j<26;j++){
        if(n[max]<n[j]){
            max=j;
        }
    }\
    char ans = 'a'+max;

    cout<<"ans:"<<ans;
}