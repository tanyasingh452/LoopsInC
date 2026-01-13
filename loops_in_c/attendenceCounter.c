#include <stdio.h>

int main() {
    int n, i, status;
    int present = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Student %d (1 = Present, 0 = Absent): ", i);
        scanf("%d", &status);

        if (status == 1) {
            present++;
        }
    }

    float percentage = (present * 100.0) / n;
    printf("Attendance Percentage = %.2f%%\n", percentage);

    return 0;
}
