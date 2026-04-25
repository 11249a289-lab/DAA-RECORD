ALGORITHAM:

Start
Read n (number of elements)
Read sorted array arr[n]
Read element key to search
Set low = 0, high = n - 1
Repeat while low <= high
Find mid = (low + high) / 2
If arr[mid] == key → Element found, print position and stop
If key < arr[mid] → set high = mid - 1
Else → set low = mid + 1
If not found, print "Element not found"
Stop

PROGRAM:

#include <stdio.h>

int main() {
    int n, i, key;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(!found) {
        printf("Element not found\n");
    }

    return 0;
}
