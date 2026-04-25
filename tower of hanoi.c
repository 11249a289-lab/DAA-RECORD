ALGORITHAM:

Step 1: Start

Step 2: If n = 1 then
            Print "Move disk 1 from S to D"
            Return

Step 3: Call TOH(n-1, S, D, A)

Step 4: Print "Move disk n from S to D"

Step 5: Call TOH(n-1, A, S, D)

Step 6: Stop

PROGRAM:

#include <stdio.h>
void toh(int n, char source, char auxiliary, char destination);
void toh(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("\nMove Disk %d from %c to %c", n, source, destination);
    }
    else
    {
        // Move n-1 disks from source to auxiliary
        toh(n - 1, source, destination, auxiliary);

        // Move nth disk from source to destination
        printf("\nMove Disk %d from %c to %c", n, source, destination);

        // Move n-1 disks from auxiliary to destination
        toh(n - 1, auxiliary, source, destination);
    }
}
int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    toh(n, 'A', 'B', 'C');

    return 0;
}
