#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define maxsize 5

int stack[maxsize];
int top = -1;

void push()
{
    int element;
    if (top == maxsize - 1)
    {
        printf("stack is a overflow");
    }

    else
    {

        printf("enter Element\n");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }
}

void pop()
{
    int k;
    if (top == -1)
    {
        printf("under flow");
    }

    else
    {
        k = stack[top];
        printf("deleted element is %d", stack[top]);
        top--;
    }
}

void display()
{
    if (top != -1)
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%3d", stack[i]);
        }
    }
}

void peek()
{
    if (top == -1)
    {
        printf("stack is a underflow");
    }

    else
    {
        printf("%d", stack[top]);
    }
}
void main()
{
    int choice;
    do
    {
        printf("\n 1.push operation \n");
        printf("2.pop operation \n");
        printf("3.display operation\n");
        printf("4.peek operation\n");
        printf("5.exit operation\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        printf("\n");

        switch (choice)
        {

        case 1:
        {
            push();
            break;
        }

        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            display();
            break;
        }

        case 4:
        {
            peek();
            break;
        }

        case 5:
        {
            exit(0);
            break;
        }

        default:
            printf("You Enter wrong choice");
            break;
        }
    } while (choice <= 5);
}