
#include <stdio.h>  
  
int main()
    {
        int grades[5][4];

        // Prompt user to enter grades
        for (int i = 0; i < 5; i++)
        {
            printf("Enter grades for student %d:\n", i + 1);
            for (int j = 0; j < 4; j++)
            {
                printf("Subject %d: ", j + 1);
                scanf("%d", &grades[i][j]);
            }
        }

        // Calculate average grade for each student
        printf("\nAverage grade for each student:\n");
        for (int i = 0; i < 5; i++)
        {
            float sum = 0;
            for (int j = 0; j < 4; j++)
            {
                sum += grades[i][j];
            }
            float avg = sum / 4;
            printf("Student %d: %.2f\n", i + 1, avg);
        }

        // Calculate average grade for each subject
        printf("\nAverage grade for each subject:\n");
        for (int j = 0; j < 4; j++)
        {
            float sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum += grades[i][j];
            }
            float avg = sum / 5;
            printf("Subject %d: %.2f\n", j + 1, avg);
        }

        return 0;
    }