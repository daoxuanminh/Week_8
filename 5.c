#include <stdio.h>

int main(void)
{
    int n;
    printf("The number of students: ");
    scanf("%d", &n);

    int count = 0, answer, passed = 0, failed = 0;
    while (count < n)
    {
        printf("Student %d, passed (1) or failed(2)? ", count + 1);
        scanf("%d", &answer);
        if (answer == 1)
        {
            passed++;
        }
        else if (answer == 2)
        {
            failed++;
        }
        else
        {
            printf("Invalid input!\n");
            continue;
        }
        count++;
    }
    printf("Passed = %d\n", passed);
    printf("Failed = %d\n", failed);
}
