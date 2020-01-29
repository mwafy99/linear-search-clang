// linear search algorithm
// O(n)  and Omeaga (1)
#include <stdio.h>

int search(int arr[], int n, int x);  // n[] is an array, n is the size of array, x is the item need to find in the array

int main()
{
    int arr[] = {55, 99, 66, 50, 8, 8,6};

    int x = 50;   // the item need to fint it's index

    int n = sizeof(arr) / sizeof (arr[0]);   // size of array

    int result = search(arr,n,x);

    (result == -1) ? printf("Number not found!") : printf("Number found in index %i\n",result);
    return 0;

}

int search(int arr[], int n, int x)
{
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
