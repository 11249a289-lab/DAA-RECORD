ALGORITHAM:

Step 1: Read number of items n
Step 2: Read bin capacity CAP
Step 3: Initialize all bins with capacity CAP
Step 4: For each item i = 1 to n do
For each bin j = 1 to n do
If bin[j] ≥ item[i] then
bin[j] ← bin[j] − item[i]
Break
End If
End For
End For

PROGRAM:

#include <stdio.h>
int main() {
int n, i, j;
float bin[10], item[10], cap;
printf("Enter number of items: ");
scanf("%d", &n);
printf("Enter bin capacity: ");
scanf("%f", &cap);
for (i = 0; i < n; i++) {
printf("Enter size of item %d: ", i+1);
scanf("%f", &item[i]);
bin[i] = cap;
}
for (i = 0; i < n; i++) {
for (j = 0; j < n; j++) {
if (bin[j] >= item[i]) {
bin[j] -= item[i];
break;
}
}
}
printf("Remaining space in bins:\n");
for (i = 0; i < n; i++)
printf("Bin %d: %.2f\n", i+1, bin[i]);
return 0;
}
Algorithm FRACTIONAL_KNAPSACK
