
#include <stdio.h>
#include <ctype.h>

int main() {
    // Part 1: Finding the Largest Element in an Array
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n > 0) {
        int arr[n];
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        printf("The largest element in the array is: %d\n\n", max);
    }

    // Clear buffer before reading string
    while (getchar() != '\n');

    // Part 2: Counting the Number of Vowels in a String
    char str[100];
    int vowelCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowelCount);

    return 0;
}