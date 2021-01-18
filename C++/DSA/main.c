#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int arr[100];
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    printf("Enter the elements: ");

    for(int i =0; i<n;i++)
        scanf("%d",&arr[i]);

    printf("The array is: ");

   for(int i = 0;i<n;i++)
        printf("%d ",arr[i]);
    //printf("Hello world!\n");
    return 0;
}
*/

//#include <stdio.h>


int main() {
     //int low, high;
     //scanf("%d %d",&low, &high);
     int n;
     scanf("%d",&n);
     int arr[100];



     for(int i =0; i<n; i++)
     {
         scanf("%d",&arr[i]);
     }

    // reverseArray(arr, n);

     for(int i = n-1; i>=0; i--)
     {
         printf("%d ",arr[i]);
     }
	//code
	return 0;
}
