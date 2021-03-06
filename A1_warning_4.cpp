#include <iostream>

using namespace std;

int sum (int a, int b) {
    return a + b;
}

int main(int argc, const char* argv[])
{
    int a = 20, b = 25, *pG;
    {
        int g;
        pG = &g;
        g = sum(a,b);
    }
    {
        int temp = 100;
        cout << "temp is " << temp << endl;
    }
    cout << a << " + " << b << " = " << *pG;
    return 0;
}
