#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    float marks[n][5];
    float gpa[n];
    int rank[n];

    // read marks for each student
    for (int i = 0; i < n; i++) {
        printf("Enter marks of student %d (in 5 subjects, out of 100): ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%f", &marks[i][j]);
        }
    }

    // calculate GPA and rank for each student
    for (int i = 0; i < n; i++) {
        float total_marks = 0;
        for (int j = 0; j < 5; j++) {
            total_marks += marks[i][j];
        }
        float average_marks = total_marks / 5;
        gpa[i] = average_marks / 10;
        rank[i] = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && total_marks < 5 * marks[j][0]) {
                rank[i]++;
            }
        }
    }

    // display results
    printf("Student\tGPA\tRank\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\t%d\n", i + 1, gpa[i], rank[i]);
    }

    return 0;
}
