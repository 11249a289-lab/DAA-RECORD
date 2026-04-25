ALGORITHAM:

Start
Define a recursive function permute(S, l, r)
S → input string
l → starting index
r → ending index
If l == r
Print the string S (one permutation is formed)
Else
For i = l to r, do:
Swap S[l] with S[i]
Call permute(S, l + 1, r)  (recursive call)
Swap back S[l] with S[i] (backtracking step)
Stop

PROGRAM:

[25/04/26, 8:05:07 PM] Myy Patluu😻👀: #include <stdio.h>

// Function to generate permutations
void perm(int arr[], int start, int stop)
{
    int temp;

    if (start == stop)
    {
        for (int i = 0; i < stop; i++)
        {
            printf("\t%d", arr[i]);
        }
        printf("\n");
    }
    else
    {
        for (int i = start; i < stop; i++)
        {
            // Swap
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;

            // Recursive call
            perm(arr, start + 1, stop);

            // Backtrack (swap back)
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
        }
    }
}

int main()
{
    int n, i, a[10];

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    perm(a, 0, n);

    return 0;
