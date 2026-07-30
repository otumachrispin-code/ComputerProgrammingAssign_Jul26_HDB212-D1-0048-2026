<img width="720" height="1500" alt="COMPILATION AND EXECUTION" src="https://github.com/user-[QUESTION 3.pdf](https://github.com/user-attachments/files/30551217/QUESTION.3.pdf)attachments/assets/b047c1b9-21fd-4db0-a8b2-7f993db9da95" />
[QUESTION 2.pdf](https://github.com/user-attachments/files/30550083/QUESTION.2.pdf)

<img width="720" height="1542" alt="SOURCR CODE 2" <img width="720" height="1292" alt="SOURCE CODE" src="https://github.com/user-attachments/assets/f74234e7-6cc1-4192-9520-a5697cda007f" />
4-39a9-48ed-b4aa-2038f3f1215f" />
<img width="720" height="1561" alt="OUTPUT B" src="https://github.com/user-attachments/assets/46f30c91-0f2f-445a-8739-54b1da060b41" />

#include <stdio.h>

struct Student {
    int adm;
    char name[50];
    char course[50];
    int age;
    int cat;
};

int main() {
    struct Student s[5];
    int i;
    int total = 0;
    float avg;
    
    printf("Registration: HDB212-D1-0048/2026\n");
    printf("Enter 5 students:\n\n");
    
    i = 0;
    while(i < 5) {
        printf("Student %d:\n", i + 1);
        printf("Admission: ");
        scanf("%d", &s[i].adm);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Course: ");
        scanf(" %[^\n]", s[i].course);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("CAT Marks: ");
        scanf("%d", &s[i].cat);
        printf("\n");
        i = i + 1;
    }
    
    printf("\n--- STUDENT RECORDS ---\n");
    i = 0;
    while(i < 5) {
        printf("\nStudent %d:\n", i + 1);
        printf("Adm: %d\n", s[i].adm);
        printf("Name: %s\n", s[i].name);
        printf("Course: %s\n", s[i].course);
        printf("Age: %d\n", s[i].age);
        printf("CAT: %d\n", s[i].cat);
        i = i + 1;
    }
    
    i = 0;
    while(i < 5) {
        total = total + s[i].cat;
        i = i + 1;
    }
    avg = total / 5.0;
    
    printf("\n--- SUMMARY ---\n");
    printf("Total CAT: %d\n", total);
    printf("Average CAT: %.2f\n", avg);
    
    return 0;
}
