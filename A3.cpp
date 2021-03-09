#include <iostream>

using namespace std;

int count_even(int *arr, int m, int n) {
    int count = 0;
    for (int i = m; i <= n; i++)
        if (*(arr+i) % 2 == 0) count++;
    return count;
}
int main() {
    int arr[10] = {0, 2, -6, 7, 8, 5705, 2307, 511, 10, 20};
    cout << count_even(arr,0,4) << endl
        << count_even(arr,5,9) << endl;
    return 0;
}

