ALGORITHAM:

Start
For each item i = 1 to n, compute:

ratio[i] = profit[i] / weight[i]
Sort all items in descending order of ratio
Initialize:
total_profit = 0
remaining_capacity = W
For i = 1 to n:
If weight[i] ≤ remaining_capacity
Take the whole item
total_profit += profit[i]
remaining_capacity -= weight[i]
Else
Take fraction of item
fraction = remaining_capacity / weight[i]
total_profit += profit[i] * fraction
Break the loop
Print total_profit
Stop

PROGRAM:

[25/04/26, 8:14:14 PM] Myy Patluu😻👀: #include <stdio.h>
int main() {
 int n, i, j;
 float w[10], p[10], ratio[10], temp, capacity, profit = 0;
 printf("Enter number of items: ");
 scanf("%d", &n);
 for (i = 0; i < n; i++) {
 printf("Enter weight and profit of item %d: ", i+1);
 scanf("%f %f", &w[i], &p[i]);
 ratio[i] = p[i] / w[i];
 }
 printf("Enter knapsack capacity: ");
 scanf("%f", &capacity);
 for (i = 0; i < n-1; i++) {
 for (j = i+1; j < n; j++) {
 if (ratio[i] < ratio[j]) {
 temp = ratio[i]; ratio[i] = ratio[j]; ratio[j] = temp;
 temp = w[i]; w[i] = w[j]; w[j] = temp;
 temp = p[i]; p[i] = p[j]; p[j] = temp;
 }
 }
 }
 for (i = 0; i < n; i++) {
 if (w[i] <= capacity) {
 profit += p[i];
 capacity -= w[i];
 } else {
 profit += ratio[i] * capacity;
 break;
 }
 }
 printf("Maximum profit = %.2f\n", profit);
 return 0;
}
