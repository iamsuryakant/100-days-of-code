//YOUR CODE// 
 
#include<stdio.h>

int isprime(int num)
{
    // type your code here
    int flag = 1; 
    for(int i = 2; i<= num; i++)
    {
      if(num % i== 0)
      {
        return 0;
        flag = 1;
        break;
      }
    }

    if(flag == 0)
    {
      return 1;
    }
}
int main()
{
    int n, m, arr[100], size=0, i;
    scanf("%d", &n);
    for(m = 2; m <= n; m++)
    {
        if(isprime(m))
        {
            arr[size++]= m;
        }
    }
    for(i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}