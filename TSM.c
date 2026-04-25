ALGORITHAM:

Step 1: Mark city as visited
Step 2: min_cost ← ∞
Step 3: For each city i = 1 to n do
If city i is not visited AND cost[city][i] ≠ 0 then
temp ← cost[city][i] + TSP(i)
min_cost ← minimum(min_cost, temp)
End If
End For
Step 4: Mark city as unvisited
Step 5: If min_cost = ∞ then
Return cost[city][0]
Else
Step 6: End
Return min_cost

PROGRAM:

#include <stdio.h>
#include <limits.h>
int n, cost[10][10], visited[10];
int min(int a, int b) {
return (a < b) ? a : b;
}
int tsp(int city) {
int i, min_cost = INT_MAX, temp;
visited[city] = 1;
for (i = 0; i < n; i++) {
if (!visited[i] && cost[city][i] != 0) {
temp = cost[city][i] + tsp(i);
min_cost = min(min_cost, temp);
}
}
visited[city] = 0;
return (min_cost == INT_MAX) ? cost[city][0] : min_cost;
}
int main() {
int i, j;
printf("Enter number of cities: ");
scanf("%d", &n);
printf("Enter cost matrix:\n");
}
for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
scanf("%d", &cost[i][j]);
printf("Minimum tour cost: %d\n", tsp(0));
return 0;
}
