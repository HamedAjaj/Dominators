#include <stdio.h>
#include <stdlib.h>


int dominator(int A[], int n)
{
	// find the max frequency using linear traversal
    int i,max_counter = 1, res = A[0], curr_counter = 1;

	for (i = 1; i < n; i++) {
		if (A[i] == A[i - 1]){
			curr_counter++;
			}

		else {
			if (curr_counter > max_counter) {
				max_counter = curr_counter;
				res = A[i - 1];
			}
			curr_counter = 1;
        }
	}

 	// If last element is most frequent
	if (curr_counter > max_counter)
	{
		max_counter = curr_counter;
		res = A[n - 1];
	}


	for(int j=1 ; j<= n ; j++)
	{
        if(A[j] == res)
            curr_counter++;
	}

    if(curr_counter > (i/2))
    {
        printf("\nPositions of Dominator are : ");
        for(int j=0 ; j< n ; j++)
        {
            if(A[j] == res)
                printf("%d  ",j);
        }
        return res;
    }
    else
        return -1;
}

int main()
{
   int n;
   printf("Enter Number of Elements: ");
   scanf("%d",&n);

   int A[n] ;
   printf("\nEnter Elements of Array:\n");

   for(int i= 0 ;i< n ; i++)
   {
        scanf("%d",&A[i]);
   }

    printf("\n\nValue of Dominator is : %d\n",dominator(A, n));

		return 0;
}
