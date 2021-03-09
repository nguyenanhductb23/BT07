#include <iostream>

using namespace std;

void f(int A[]) {
    cout << sizeof(A) << endl;
}

int main()
{
    int A[100];
    cout << sizeof(A) << endl;
    f(A);
    return 0;
}
