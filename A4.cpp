#include <iostream>
#include <algorithm>

using namespace std;

int timKiemNhiPhan(int *arr, int n, int val) {
    int l = 0, r = n-1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (*(arr+m) == val) return m;
        else if (*(arr+m) > val) r = m - 1;
        else l = m + 1;
    }
    return -1;
}

int main() {
    int n;     cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> *(arr+i);
    int val;   cin >> val;
    sort(arr,arr+n);
    cout << timKiemNhiPhan(arr,n,val);
    return 0;
}
