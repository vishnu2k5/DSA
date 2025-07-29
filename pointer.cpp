#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a={1,2,3,4,5};

    int *p;
    p=&a[0];
    p++;

    int **p2=&p;

    cout<<&p<<endl;
    cout<<*p2<<endl;

}