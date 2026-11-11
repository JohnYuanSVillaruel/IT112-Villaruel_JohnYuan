#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    int numNotes, i;
    char buffer[256];

    printf("Writing Notes File:\n");

    file = fopen("notes.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("How many notes do you want to record? ");
    scanf("%d", &numNotes);
    getchar(); 

    for (i = 1; i <= numNotes; i++) {
        printf("Note %d: ", i);
        fgets(buffer, sizeof(buffer), stdin);
        
        buffer[strcspn(buffer, "\n")] = '\0';
        
        fprintf(file, "%s\n", buffer);
    }

    fclose(file);
    printf("Initial notes saved successfully.\n");

    printf("Enter one additional note:\n");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    file = fopen("notes.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }

    fprintf(file, "%s\n", buffer);
    fclose(file);
    printf("New note added successfully.\n\n");

    file = fopen("notes.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Reading Saved Notes:\n");
    int count = 1;
    
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
        printf("%d. %s\n", count, buffer);
        count++;
    }

    fclose(file);

    return 0;
}