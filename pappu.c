#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

char exp[MAX], stack[MAX];
int i = 0, top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}
void pop()
{
    --top;
}
int main()
{
    printf("Enter an expression: ");
    gets(exp);

    while (exp[i] != '\0')
    {
        if ((exp[i] == '(') || (exp[i] == '[') || (exp[i] == '{'))
            push(exp[i]);

        if ((exp[i] == ')') || (exp[i] == ']') || (exp[i] == '}'))
        {
            if ((exp[i] == ')' && stack[top] == '(') || (exp[i] == ']' && stack[top] == '[') || (exp[i] == '}' && stack[top] == '{'))
            {
                pop();
            }
            else
            {
                printf("\nUnbalanced Expression!!\n");
                exit(0);
            }
        }
        i++;
    }
    if (top == -1)
        printf("\nBalanced Expression!!\n");
    else
        printf("\nInvalid Expression!!\n");

    return 0;
}