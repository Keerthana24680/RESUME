#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

char stack[MAX];
int top=-1;

void push(char x)
{
        stack[++top]=x;
}
char pop()
{
        return stack[top--];
}
int priority (char op)
{
        if(op=='+'||op=='-')
        {
                return 1;
        }
        if(op=='*'||op=='/')
        {
                return 2;
        }
        return 0;
}

void reverse(char exp[])
{
	int i,j;
	char temp;
	for (i=0,j=strlen(exp)-1;i<j;i++,j--)
	{
		temp=exp[i];
		exp[i]=exp[j];
		exp[j]=temp;
	}
}

int main()
{
        char postfix[100],infix[100],prefix[100];
        int i,j=0;
        printf("Enter the Infix Expression:");
        scanf("%s",infix);
	reverse(infix);

	for(i=0;infix[i]!= '\0';i++)
        {
		if (infix[i]=='(')
		{
			infix[i]=')';
		}
		else if (infix[i]==')')
                {
                        infix[i]='(';
                }
	}

        for(i=0;infix[i]!= '\0';i++)
        {
                if(isalnum(infix[i]))
                {
                        postfix[j++]=infix[i];
                }
                else if(infix[i]=='(')
                {
                        push(infix[i]);
                }
                else if(infix[i]==')')
                {
                        while (stack[top]!='(')
                        {
                                postfix[j++]=pop();

                        }
                        pop();
                }
                else 
                {
                        while(top!=-1 && priority(stack[top])>=priority(infix[i]))
                        {
                                postfix[j++]=pop();
                        }
                        push(infix[i]);
                }
        }
        while(top!=-1)
        {
                postfix[j++]=pop();
        }
        postfix[j]='\0';

	strcpy(prefix,postfix);
	reverse(prefix);

        printf("Prefix Expression : %s\n",prefix);
        return 0;
}
