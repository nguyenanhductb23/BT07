#include <iostream>

using namespace std;

int* weird_sum(int a, int b) {
    int c;
    c = a + b;
    return &c;
}

int main(int argc, const char* argv[])
{
    //int *pX;
    int *pX = NULL;
    cout << pX << endl;
    cout << *pX << endl << endl;
    *pX = 0;

    int a = 23, b = 7;
    cout << weird_sum(a,b) << endl;
    return 0;
}
