#include<stdio.h>
#include<conio.h>
struct stack
{
    int top;
    float a[20];

}s;
int main()
{
    char postfix[20];
    float d1,d2,d3;
    int i;
    s.top=-1;
    printf("enter the postfix expression\n");
    scanf("%d",&postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        switch(postfix[i])
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
    s.a[++s.top]=postfix[i]-'0';
            break;
        case'+':
            d1=s.a[s.top--];
            d2=s.a[s.top--];
            s.a[++s.top]=d1+d2;
            break;
            case '-':
d2 = s.a[s.top--];
d1 = s.a[s.top--];
s.a[++s.top] = d1 - d2;
break;
case '*':
d2 = s.a[s.top--];
d1 = s.a[s.top--];
s.a[++s.top] = d1*d2;
break;
case '/':
d2 = s.a[s.top--];
d1 = s.a[s.top--];
s.a[++s.top] = d1 / d2;
break;
 }
}
printf("\n Expression value is %5.2f", s.a[s.top]);
getch();
return 0;
}
