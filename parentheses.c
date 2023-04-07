#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
char stack[100];
void push();
void pop();
void find_top();
void main()
{
    int i;
    char a[100];
    printf("enter the expression\n");
    scanf("%d",&a);
    for(i=0;a[i]!='\0';i++)
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
}
void push(int a)
{
    stack[top]=a;
    top++;
}
void pop()
{
    if(top==-1)
    {
        prinf("expression is invalid");
        exit(0);
    } else { top--;}
}
void find_top()
{
    if(top==-1)

    printf("\nexpression is valid");

      else
{
    printf("\nexpresion is invalid");

}
}
