
#include <stdio.h>
typedef struct obj
{
int element;
int count;

}Object;

int dominator_2(int A[] , int N)
{
 int count=0;
 Object iteration[N];

 for(int i=0;i<N ;i++)
 {
  for(int j=0; j<N; j++ )
  {
   if(A[i] == A[j])    // Basic Operation //   complexity = O(n^2);
   count++;
  }

  iteration[i].element=A[i];
  iteration[i].count=count;
  count=0;
 }

 int size=N/2;
 for(int i=0;i<N;i++)
 {
   if(iteration[i].count>size ){
        return A[i];

        }
 }
  return -1;


}


int main()
{
   int n;

   printf("Enter number of Array A:");
   scanf("%d",&n);

   printf("Enter elemens of array:\n");
   int A[n] ;
   for(int i= 0 ;i< n ; i++)
   {
        scanf("%d",&A[i]);
   }

    printf("Positions of dominator are : ");

   for(int i= 0 ;i< n ; i++)
   {
   if(dominator_2(A, n) == A[i])
        printf(" %d  ",i);

   else if(dominator_2(A, n) == -1)
        {
        printf("%d",dominator_2(A,n));
        break;
        }
   }

  // printf("Value of dominator is : %d ",dominator_2(A, n));



	return 0;
}
