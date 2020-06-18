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
	const char needle[10] = "000000";
	const char needle1[10] = "111111";
	char* ret = strstr(str,needle);
	char* ret1 = strstr(str,needle1);
	if(ret==NULL && ret1==NULL)
	printf("Good luck!");
	else
	printf("Sorry, sorry!");
	
}
