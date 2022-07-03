#include <stdio.h>

// l is for left index and r is for right index of the subarray of arr to be sorted.
void mergesort(int arr[], int l, int r);
// merge two subarrays of arr[], First is arr[l...m], Second is arr[m+1...r]
void merge(int arr[], int l, int m, int r);
void print(int arr[], int size);

int main(void)
{
    int array_list[] = {43, 33, 123, 441, 86, 12, 12, 38, 71};
    int array_size = sizeof(array_list) / sizeof(array_list[0]);
    printf("unsorted arr:\n");
    print(array_list, array_size);
    mergesort(array_list, 0, array_size - 1);
    printf("sorted arr:\n");
    print(array_list, array_size);
}

void mergesort(int *arr, int l, int r)
{
    if (l < r)
    {
        // int m = (l + r) / 2; // this code will overflow if l and r is big encough.
        int m = l + (r - l) / 2;
        // sort first and second halves
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        // merge sorted first and second halves
        merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r)
{
    // l half and r half
    int lh = m - l + 1;
    int rh = r - m;

    // create temp arraies
    int L[lh];
    int R[rh];

    // copy data to temp L and R
    for (int i = 0; i < lh; i++)
    {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < rh; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    // merge temp arrays to the original arr
    int i = 0;    // Initial index of the first temp subarray
    int j = 0;    // Initial index of the second temp subarray
    int k = l; // Initial index of the original arr.
    while (i < lh && j < rh)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of L[], if there are any
    while (i < lh)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copy the remaining elements of R[], if there are any
    while (j < rh)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i\t", arr[i]);
    }
    printf("\n");
}