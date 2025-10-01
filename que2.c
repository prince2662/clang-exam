#include <stdio.h>
#include <ctype.h>  

#define MAX_LEN 1000

void count_vowels(const char *s, int counts[5]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower((unsigned char)s[i]);
        switch (ch) {
            case 'a':
                counts[0]++;
                break;
            case 'e':
                counts[1]++;
                break;
            case 'i':
                counts[2]++;
                break;
            case 'o':
                counts[3]++;
                break;
            case 'u':
                counts[4]++;
                break;
            default:
              
                break;
        }
    }
}

int main() {
    char sentence[MAX_LEN];
    int vowel_counts[5] = {0, 0, 0, 0, 0};

    printf("Enter a sentence:\n");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
    }

    count_vowels(sentence, vowel_counts);

    printf("Vowel counts:\n");
    printf("a/A : %d\n", vowel_counts[0]);
    printf("e/E : %d\n", vowel_counts[1]);
    printf("i/I : %d\n", vowel_counts[2]);
    printf("o/O : %d\n", vowel_counts[3]);
    printf("u/U : %d\n", vowel_counts[4]);

    return 0;
}
