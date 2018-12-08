#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
char stack[100];
void push(char);
void pop();
void find_top();
void main()
{
	int i;
	char a[100];
	printf("Enter the expression:");
	scanf("%s",a);
	for(i=0;a[i]='\0';i++)
	{
		if(a[i]=='(')
		{
			push(a[i]);
		}
		else if(a[i]==')')
		{
			pop();
		}
	}
	find_top();
	getch();
}
void push(char c)
{
	stack[top]=c;
	top++;
}
void pop()
{
	if(top==-1)
	{
		printf("\nExpression is invalid");
		exit(0);
	}
	top--;
}
void find_top()
{
	if(top==-1)
	printf("\nExperssion is valid");
	else
	printf("\nExpression is invalid");
}
