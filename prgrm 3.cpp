#include<stdio.h>
int main()
{
	char message[200];
	printf("enter a message");
	scanf("%[^\n]s",message);
	printf(" the message is:%s", message);
}