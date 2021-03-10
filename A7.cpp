#include <iostream>
#include <cstring>

using namespace std;

int soLanXuatHien(char* s_str, char* l_str) {
    int count = 0;
    int s_len = strlen(s_str);
    int l_len = strlen(l_str);
    for (int i = 0; i <= l_len - s_len; i++) {
        char str[100] = "";
        for (int j = 0; j < s_len; j++)
            str[j] = l_str[i+j];
            cout << str << endl;
        if (strcmp(str,s_str) == 0) count++;
    }
    return count;
}

int main(int argc, const char* argv[]) {
    char file_name[100];
    char s_str[100];
    char l_str[100];
    cin >> s_str >> l_str;
    cout << soLanXuatHien(s_str, l_str) << endl;
    return 0;
}
