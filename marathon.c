
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        int distances[4] = {a, b, c, d};
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (distances[i] < distances[j]) {
                    int temp = distances[i];
                    distances[i] = distances[j];
                    distances[j] = temp;
                }
            }
        }
        int count = 0;
        for (int i = 1; i < 4; i++) {
            if (distances[i] > a) {
                count++;
            } else {
                break;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
