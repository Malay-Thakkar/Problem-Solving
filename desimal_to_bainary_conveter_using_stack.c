// program : desimal to bainary conveter using stack
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define maxsize 5

int stack[maxsize], top = -1;

void push(int val)
{
    top++;
    stack[top] = val;
}

int pop()
{
    return stack[top];
    // int k;
    // k = stack[top];
    // top--;
    // return k;
}
void main()
{
    int dec, j[20],d;
    printf("Enter Decimal number : ");
    scanf("%d", &dec);

    for (int i = 0; dec > 0; i++)
    {
        j[i] = dec % 2;//5%2=1,0,1
        dec = dec / 2;
        push(j[i]);
    }
printf("your bainary is: ");
    for(int i=top; top>-1;top--)
    {
        d=pop();
        printf("%d",d);
    }


  
}
