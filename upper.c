#include <stdio.h>

void toLowercase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    toLowercase(str);
    printf("Lowercase: %s\n", str);
    return 0;
}

