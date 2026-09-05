#include <stdio.h>

int main(){
    int first;
    int second;
    int third;
    int fourth;

    char name[50];
    char section[20];
    
    printf("Enter Complete Name: ");
    fgets(name,sizeof(name),stdin);

    printf("Enter section: ");
    fgets(section,sizeof(section),stdin);

    printf("Enter your 1st Quarter Grade: ");
    scanf("%d", &first);

    printf("Enter your 2nd Quarter Grade: ");
    scanf("%d", &second);

    printf("Enter your 3rd Quarter Grade: ");
    scanf("%d", &third);

    printf("Enter your 4th Quarter Grade: ");
    scanf("%d", &fourth);
    
    float avrg = (first + second + third + fourth) / 4.0;

    printf("Student: %s", name);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", avrg);

    if(avrg >= 90 && avrg <= 100){
        printf("Remarks: Outstanding");
    }
    
    else if(avrg >= 85 && avrg <= 89 ){
        printf("Remarks: Very Satisfactory");
    }

    else if(avrg >= 80 && avrg <= 84 ){
        printf("Remarks: Satisfactory");
    }

    else if(avrg >= 75 && avrg <= 79 ){
        printf("Remarks: Fair");
    }

    else{
        printf("Remarks: Failed");  
    }
   
    return 0;
}