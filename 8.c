#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *word, int left, int right, int *count) {
    if (left == right) {
        printf("%s\n", word);
        (*count)++;
    } else {
        for (int i = left; i <= right; i++) {
            swap((word + left), (word + i));  // Swap characters at positions 'left' and 'i'
            permute(word, left + 1, right, count);  // Recursively generate permutations for the remaining positions
            swap((word + left), (word + i));  // Restore the original order by swapping back
        }
    }
}

int main() {
    char word[15];

    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);
    int count = 0;

    permute(word, 0, length - 1, &count);  // Generate permutations starting from position 0 to position (length - 1)

    printf("Number of anagrams: %d\n", count);

    return 0;
}