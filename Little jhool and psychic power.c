#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char str[100];
	int arr[100];
	int a,b,i,count=0;
	scanf("%s", str);
	a=strlen(str);

	for(i=0;i<a;i++)
	{
		if (str[i] == str[i+1])
		{
			count++;
			if(count==6)
			{
			    break;
			}
		}
		 
	}
	if (count ==6 )
	{
		printf("Sorry, sorry!");
	}
	else
	{
		printf("Good luck!");
	}
	


}
