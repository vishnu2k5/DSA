#include<iostream>
#include <string>
using namespace std;

int valid(char s)
{
    if(s>='a'&&s<='z'||s>='0'&&s<='9'||s>='A'&&s<='z'){
        return 1;
    }
    else{
        return 0;
    }
}
int palandrom(string s)
{
    int f=0;
    int e=s.length();
    while(f<=e){
        if(s[f]!=s[e]){
            return 0;
        }
    }
    return 1;
}


int main()
{
    string str="vaugdkjGEBASJDQ246534645/7654";

    string trmp="";

    int l=str.length();

    for(int j=0;j<l;j++)
    {
        if(valid(str[j])){
            trmp.push_back(str[j]);
        }
    }
    cout<<"palandrom: "<<palandrom(trmp);

    
}