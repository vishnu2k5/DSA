#include <iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid) {
    int student = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false; // A single book has more pages than mid
        }

        if (pages + arr[i] <= mid) {
            pages += arr[i];
        } else {
            student++;
            if (student > m) {
                return false;
            }
            pages = arr[i];
        }
    }
    return true;
}

int finalans(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        if (ispossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main() {
    int arr[] = {12, 32, 51, 14, 11, 35}; // 6 elements
    int n = 6;
    int m;

    cout << "Enter number of students: ";
    cin >> m;

    int ans = finalans(arr, n, m);
    cout << "Minimum number of pages: " << ans << endl;

    return 0;
}

