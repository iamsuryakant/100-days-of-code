#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];
  	int i, j, k, l;
  	gets(str);
  	l=strlen(str);
  	for(i = 0; i < l; i++)
  	{
  		for(j = i + 1; j < l; j++)
  		{
  			
  				if(str[j] == str[i])
				{
                    for(k = i; k < l ; k++){

                    
					    str[k] = str[k + 1];
                    }
				}
 			
		}
	}
	printf("%s", str);	
  	return 0;
}
 