// #include<iostream>
// using namespace std;
// void mearg(int arr[],int arr1[],int *arr2,int i=0,int j=0,int k=0)
// {

//     int n=sizeof(arr);
//     int m=sizeof(arr1);
//     if(i==n||j==m){
//         return;
//     }
//     else{
//         if(arr[i]<arr1[j]){
//             arr2[k]=arr[i];
//             mearg(arr,arr1,arr2,i++,j,k++);
//         }
//         if(arr[i]>arr1[j]){
//             arr2[k]=arr1[j];
//             mearg(arr,arr1,arr2,i,j++,k++);
//         }
//     }
//     for(;i<n;i++){
//         arr2[k]=arr[i];
//         k++;
//     }
//     for(;j<m;j++){
//         arr2[k]=arr1[j];
//         k++;
//     }
// }
// int main()
// {
//     int arr[5] = {2,5,7,11,13};
//     int arr1[8]={1,3,4,6,8,9,10,12};
//     int arr2[13];
//     mearg(arr,arr1,arr2);
//     for(int i=0;i<13;i++){
//         cout<<arr2[i];
//     }
//     cout<<endl;
// }
#include<iostream>
using namespace std;

void mearg(int arr[], int arr1[], int arr2[], int i = 0, int j = 0, int k = 0)
{
    int n = 5;  // Hardcoded size of arr[]
    int m = 8;  // Hardcoded size of arr1[]

    if (i == n && j == m) {
        return;
    }

    if (i < n && (j == m || arr[i] < arr1[j])) {
        arr2[k] = arr[i];
        mearg(arr, arr1, arr2, i + 1, j, k + 1);
    }
    else if (j < m && (i == n || arr[i] >= arr1[j])) {
        arr2[k] = arr1[j];
        mearg(arr, arr1, arr2, i, j + 1, k + 1);
    }
}

int main()
{
    int arr[5] = {2, 5, 7, 11, 13};
    int arr1[8] = {1, 3, 4, 6, 8, 9, 10, 12};
    int arr2[13];

    mearg(arr, arr1, arr2);

    for (int i = 0; i < 13; i++) {
        cout << arr2[i] << " ";
    }

    cout << endl;
    return 0;
}
