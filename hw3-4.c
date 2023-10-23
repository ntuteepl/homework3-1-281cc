#include <stdio.h>
#include <string.h>

int main() {
    char answer[5]; // 正確答案
    char guess[5]; // 猜測的數字

    scanf("%s", answer);

    while (1) {
        scanf("%s", guess);

        if (strcmp(guess, "0") == 0 ) {
            break;
        }

        int A = 0, B = 0;
        // 檢查A
        for (int i = 0; i < 4; i++) {
            if (guess[i] == answer[i]) {
                A++;
            }
        }
        // 檢查B
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (i != j && guess[i] == answer[j]) {
                    B++;
                }
            }
        }
        printf("%dA%dB\n", A, B);
    }
    return 0;
}
