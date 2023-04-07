/* C program to insert an element in an array */
#include<stdio.h>
int main()
{
    int s;
    printf("Enter size of array:");
    scanf("%d",&s);
    int arr[s];
    int i;
    for(i = 0; i < s; i++)
        {
            scanf("%d",&arr[i]);
        }
    int element, pos;

    printf("Enter position:\n");
    scanf("%d",&pos);
    printf("Enter element:\n");
    scanf("%d",&element);

    if(pos <= s && pos >= 0)
    {
        for(i = s; i > pos; i--)
            arr[i] = arr[i-1];

        arr[pos] = element;
        for(i = 0; i <= s; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
        printf("...Invalid Position...\n");

    return 0;
  }

