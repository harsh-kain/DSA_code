#include <stdio.h>
#define MAX 9

void heapsort(int[]);
void Bulid_Maxheap(int[]);
void Max_heapify(int[], int);

int heapsize = MAX - 1;
void heapsort(int A[])
{
    int i = MAX - 1, temp;
    Bulid_Maxheap(A);
    // printf("heap\n");
    for (i; i > 1; i--)
    {
        temp = A[1];
        A[1] = A[i];
        A[i] = temp;
        heapsize = heapsize - 1;
        Max_heapify(A, 1);
    }
}
void Bulid_Maxheap(int A[])
{
    int length = MAX - 1, i;

    for (i = length / 2; i >= 1; i--)
    {
        printf("Bulid\n");
        Max_heapify(A, i);
    }
}
void Max_heapify(int A[], int i)
{
    int l, r, largest, temp1;
    l = 2 * i;
    r = (2 * i) + 1;

    if (l <= heapsize && A[l] > A[i])
    {
        largest = l;
    }

    else
    {
        largest = i;
    }

    if (r <= heapsize)
    {

        if (A[r] > A[largest])
        {
            largest = r;
        }
    }
    if (largest != i)
    {
        temp1 = A[i];
        A[i] = A[largest];
        A[largest] = temp1;

        Max_heapify(A, largest);
    }
}
void main()
{
    int i;
    int A[] = {0, 2, 5, 7, 1, 18, 27, 3, 43};

    heapsort(A);
    printf("After sorting array will be \n");
    for (i = 1; i < MAX; i++)
    {
        printf("%d\t", A[i]);
    }
}