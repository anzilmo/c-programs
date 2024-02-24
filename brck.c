#include <stdio.h>
#include <string.h>

int main() {
    char flag = 1;
    char word[5] = "malayalam";
    int length = strlen(word);
    //printf("Enter palindrome");
   // scanf("%c",&word);
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("is palindrome");
    } else {
        printf("not palindrome");
    }

    return 0;
}
