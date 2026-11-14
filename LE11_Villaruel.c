#include <stdio.h>
#include <string.h>

int main(){

    FILE *file;
    file = fopen("student_records.txt","a+");

    int num;
    int again;
    char name[50];
    char sec[20];

    if(file == NULL){
        printf("Error! File not Found.\n");

        return 1;
    }

    do{
        printf("Enter Student Number: ");
        scanf("%d", &num);
        getchar();
        fprintf(file, "ID Number: %d\n", num);

        printf("Enter Complete Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn (name, "\n")] = '\0';
        fprintf(file, "Complete Name: %s\n", name);

        printf("Enter Section: ");
        fgets(sec, sizeof(sec), stdin);
        sec[strcspn (sec, "\n")] = '\0';
        fprintf(file, "Section: %s\n", sec);
        
        printf("Record added and saved successfully.\n");
        printf("Add another student? [Enter 1 for Yes, 0 for No]: ");
        scanf("%d", &again);

    }while(again == 1);
        printf("All student records have been saved.\n");


    fclose(file);
    

    return 0;
}