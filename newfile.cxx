#include <stdio.h>

int main()
{
    int marks[10];
    int sum = 0;
    float average;
    int highest, lowest;
    int i;

    printf("Enter marks of 10 students:\n");

    for (i = 0; i < 10; i++)
    
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + marks[i];
    }
    average = sum / 10.0;
    printf("\nAverage mark: %.2f\n", average);

    highest = marks[0];
    for (i = 1; i < 10; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }
    printf("Highest mark: %d\n", highest);

    lowest = marks[0];
    for (i = 1; i < 10; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }
    printf("Lowest mark: %d\n", lowest);

    printf("\nMarks greater than average (%.2f):\n", average);
    int found = 0;
    for (i = 0; i < 10; i++)
    {
        if (marks[i] > average)
        {
            printf("Student %d: %d\n", i + 1, marks[i]);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("No marks above average.\n");
    }

    return 0;
}