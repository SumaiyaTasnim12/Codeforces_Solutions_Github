#include <stdio.h>
#include <string.h>

#define PI "314159265358979323846264338327"

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char n[35];
        scanf("%s",&n);
        int len = strlen(n);
        int i;
        for (i = 0; i < len; i++) {
            if (n[i] != PI[i]) {
                break;
            }
        }
        printf("%d\n", i);
    }
    return 0;
}

