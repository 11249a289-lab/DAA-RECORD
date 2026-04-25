ALGORITHAM:

1. Start
2. Initialize visited[n] = {0}
3. Set visited[0] = 1
4. Print "Edges in MST"
5. For i ← 0 to n-2 do
min ← ∞
For u ← 0 to n-1 do
If visited[u] = 1 then
For v ← 0 to n-1 do
If visited[v] = 0 AND cost[u][v] < min then
min ← cost[u][v]
vertex ← v
End If
End For
End If
End For
Print "Edge cost:", min
visited[vertex] ← 1
End For
6. Stop

PROGRAM;

#include <stdio.h>
#include <limits.h>
int main() {
int n, i, j, min, u, v;
int cost[10][10], visited[10] = {0};
printf("Enter number of vertices: ");
scanf("%d", &n);
printf("Enter adjacency matrix:\n");
for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
scanf("%d", &cost[i][j]);
visited[0] = 1;
printf("Edges in MST:\n");
for (i = 0; i < n-1; i++) {
min = INT_MAX;
for (u = 0; u < n; u++) {
if (visited[u]) {
for (v = 0; v < n; v++) {
if (!visited[v] && cost[u][v] < min) {
min = cost[u][v];
j = v;
}
}
}
}
}
printf("Edge cost: %d\n", min);
visited[j] = 1;
return 0;
}
