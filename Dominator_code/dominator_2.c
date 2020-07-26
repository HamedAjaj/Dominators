#include <stdio.h>
#include <stdlib.h>

// Voting Algorithms //


 int dominator_3(int A[],int N) {

        int majority_index = 0;
        int count = 1;

        for(int i = 1; i < N; i++)
        {
            count += (A[i] == A[majority_index]) ? 1 : -1;

            if(count==0)
            {
                majority_index=++i;
                count++;
            }
        }

        if(count != 1)
        {
            return A[majority_index];
        }
        else if(count == 1)
        {
            return -1;
        }
    }

int main()
{

int arr[8]={5,3,3,1,5,3,7,3};

printf("\nPosition of Dominators are : ");

for(int i = 0; i < 8; i++)
{
    if(dominator_3(arr,8) == arr[i])
    {
        printf(" %d", i);
    }
    else if(dominator_3(arr,8)== -1)
    {
        printf(" %d",dominator_3(arr,8));
        break;
    }
}
return 0;
}
