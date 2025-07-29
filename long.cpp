#include<iostream>
using namespace std;


int main()
{
    string s="aabdasc";
    string sr="csadbaa";
    string ans;

    int i=0;
    int j=0;
    while (i<s.length())
    {
        if(s[i]==sr[j]){
            ans.push_back(s[i]);
            i++;
            j++;
        }
        else{
            ans="";
            i++;
        }
    }
    cout<<ans<<endl;
}