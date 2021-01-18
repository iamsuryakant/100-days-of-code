#include <stdio.h>
#include <stdlib.h>

int palindrome(int x)
{
    int rev = 0;

    int originalNum = x;

    while(x != 0)
    {
        rev = rev*10 + x%10; // to get the reversed value.
        x = x/10; //to remove the last digit.
    }
    //return rev;
    if(originalNum == rev)
    {
        printf("This is palindrome");
    }
    else{
        printf("This is not palindrome");
    }
}

int main()
{
    int n = 200;
    palindrome(n);

    //printf("Hello world!\n");
    return 0;
}
