#include<stdio.h>
#define MAX 10

void heapsort(int []);
void Bulid_Maxheap(int []);
void Maxheapify(int [],int );

int heapsize=MAX-1;
void heapsort(int A[])
{
    int i=MAX,temp;
	Bulid_Maxheap(A);
	for(i;i>1;i--){
		temp=A[1];
		A[1]=A[i];
		A[i]=temp;
	    heapsize=heapsize-1;
	    Maxheapify(A,1);
	}
}
 void Bulid_Maxheap(int A[])
{
	int length,j,i;
    length=MAX-1;
	for(i=length/2;i>0;i--)
	{
		Maxheapify(A,i);
	}
}
void Maxheapify(int A[],int i)
{
	int l,r,largest,temp1;
	l=2*i;
	r=(2*i)+1;
      
    
    
    if(l<=heapsize && A[l]>A[i])
    {
        largest=l;
    }
    else{
        largest=i;
    }

    if (r<=heapsize)
    {
        
        if(A[r]>A[largest])
        {
            largest=r;
        }
       }
        if(largest!=i)
        {
            temp1=A[i];
            A[i]=A[largest];
            A[largest]=temp1;
	        Maxheapify(A,largest);
        }
    
    
}
void main()
{
	int A[MAX]={0,23,56,78,12,78,45,87,1,4};
	heapsort(A);
    
	printf("After sorting array will be \n");
	for(int i=1;i<MAX;i++)
	{
		printf("%d\t",A[i]);
	}
}