#include<iostream>
using namespace std;

void merge(int a[], int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = a[start + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // Merge the temporary arrays back into a[start..end]
    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}

