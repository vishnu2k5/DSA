#include <iostream>
using namespace std;

int mountpeek(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        // Ensure mid is not at the edges
        if (mid > 0 && mid < n - 1) {
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
                ans = arr[mid];
                break; // found the peak
            } else if (arr[mid - 1] > arr[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else {
            break; // prevent out-of-bound access
        }
    }

    return ans;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
    int ans = mountpeek(arr, 10);
    cout << "Peek of mountain array is: " << ans << " ";
    return 0;
}

