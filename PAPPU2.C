#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queue[MAX], front = -1, rear = -1, x, n, i;

void Insert()
{
    if (rear == n - 1)
        printf("Queue Overflow!!\n");

    else
    {
        if (front == -1)
            front++;

        rear++;

        printf("Enter element you want to insert: ");
        scanf("%d", &x);
        queue[rear] = x;
    }
}

void Delete()
{
    if (front == rear)
    {
        if (front == -1)
            printf("Queue Underflow!!\n");
        else
        {
            printf("Element deleted from queue is %d\n", queue[front]);
            front = rear = -1;
        }
    }
    else
    {
        printf("Element deleted from queue is %d\n", queue[front]);
        front++;
    }
}

void Display()
{
    if (rear == n - 1)
        printf("Queue is full!!\n");

    if ((front == -1) && (rear == front))
        printf("Queue is empty!!\n");

    else
    {
        for (i = 0; i <= n - 1; i++)
        {
            if (i >= front && i <= rear)
                printf("|  %d  ", queue[i]);
            else
                printf("|      ");
        }
        printf("|\n");
    }
}

int main()
{
    int choice;
    printf("Enter number of elements (Max.: 10): ");
    scanf("%d", &n);

    printf("\nChoose an option among the following:\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    do
    {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            printf("Exit point.\n");
            break;
        default:
            printf("Enter correct option.\n");
        }
    } while (choice != 4);

    return 0;
}