#include<stdio.h>

void lar(int arr[], int n)
{
    for(int i= 0; i<n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap(&arr[j], &arr[j+1]);
                int temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int largest = arr[n-3];

    printf("%d", largest);

}
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    lar(arr,n);
}