#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a="vishnuuuu";

    for(int i=0;i<a.length();i++)
    {
        if(a[i+1]==a[i]){
            a.erase(i,2); 
        }
    }

    cout<<a;
}