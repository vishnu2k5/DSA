#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    int n=a.size();
    vector<vector<int>> s(n);
    for(int i=0;i<3;i++){
        for(int j=3-1;j>=0;j--){
            s[i].push_back(a[j][i]);

        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<s[i][j];
        }
    }

    
}