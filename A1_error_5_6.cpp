#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
    //Thất thoát bộ nhớ
    int* ptr1 = new int;
    int* ptr2 = new int;
    ptr1 = ptr2;

    //Giải phóng quá sớm
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    cout << *p2;
    return 0;
}
