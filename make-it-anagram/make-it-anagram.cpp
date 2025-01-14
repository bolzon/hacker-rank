#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a[26] = {0};
    char s1[10010] = {0};
    char s2[10010] = {0};

    cin >> s1 >> s2;

    for (int i = 0; i < strlen(s1); i++) {
        a[s1[i] - 'a']++;   
    }

    for (int i = 0; i < strlen(s2); i++) {
        a[s2[i] - 'a']--;
    }

    long long int ans = 0;

    for (int i = 0; i < 26; i++) {
        ans += abs(a[i]);
    }

    cout << ans << endl;
    return 0;
}
