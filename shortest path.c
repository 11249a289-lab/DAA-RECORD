ALGORITHAM:

1. Start
2. Initialize visited[n] = {0}
3. For i ← 0 to n-1 do
dist[i] ← cost[src][i]
End For
4. visited[src] ← 1
5. For i ← 1 to n-1 do
min ← ∞
For j ← 0 to n-1 do
If visited[j] = 0 AND dist[j] < min then
min ← dist[j]
u ← j
End If
End For
visited[u] ← 1
For j ← 0 to n-1 do
If visited[j] = 0 AND dist[u] + cost[u][j] < dist[j] then
dist[j] ← dist[u] + cost[u][j]
End If
End For
End For
6. For i ← 0 to n-1 do
Print src, "→", i, "=", dist[i]
End For
7. Stop

PROGRAM:

#include <stdio.h>
#include <limits.h>
int main() {
int n, i, j, src;
int cost[10][10], dist[10], visited[10] = {0};
printf("Enter number of vertices: ");
scanf("%d", &n);
printf("Enter adjacency matrix:\n");
for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
scanf("%d", &cost[i][j]);
printf("Enter source vertex: ");
scanf("%d", &src);
for (i = 0; i < n; i++)
dist[i] = cost[src][i];
visited[src] = 1;
for (i = 1; i < n; i++) {
int min = INT_MAX, u;
for (j = 0; j < n; j++) {
if (!visited[j] && dist[j] < min) {
min = dist[j];
u = j;
}
}
visited[u] = 1;
for (j = 0; j < n; j++) {
if (!visited[j] && dist[u] + cost[u][j] < dist[j])
dist[j] = dist[u] + cost[u][j];
}
}
printf("Shortest distances:\n");
for (i = 0; i < n; i++)
printf("%d -> %d = %d\n", src, i, dist[i]);
return 0;
}
