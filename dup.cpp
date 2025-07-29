#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="vviishnuu";
    int i=0;
    while (i<s.length())
    {
        if(s[i]==s[i+1]){
            s.erase(i,2);
        }
        else{
            i++;
        }
    }
    
    cout<<s;

}