#include<stdio.h>
#include<string.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	char str[100];
	printf("enter the string\n");
	scanf("%[^\n]s",&str);
	printf("%s\n",str);
	}
}
