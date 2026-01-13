#include <stdio.h>

int main() {
    int vote;
    int countA = 0, countB = 0, countC = 0;

    printf("Vote for candidates:\n");
    printf("1 = A, 2 = B, 3 = C, 0 = Stop\n");

    do {
        printf("Enter your vote: ");
        scanf("%d", &vote);

        if (vote == 1) countA++;
        else if (vote == 2) countB++;
        else if (vote == 3) countC++;
    } while (vote != 0);

    printf("\nVotes:\nA = %d\nB = %d\nC = %d\n", countA, countB, countC);

    if (countA > countB && countA > countC)
        printf("Winner: A\n");
    else if (countB > countA && countB > countC)
        printf("Winner: B\n");
    else if (countC > countA && countC > countB)
        printf("Winner: C\n");
    else
        printf("Result is a Tie\n");

    return 0;
}
