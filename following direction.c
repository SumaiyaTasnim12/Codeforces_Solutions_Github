
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        int x = 0, y = 0;
        bool k = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') y++;
            if (s[i] == 'D') y--;
            if (s[i] == 'R') x++;
            if (s[i] == 'L') x--;
            if (x == 1 && y == 1) {
                k = true;
                break;
            }
        }
        if (k) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
