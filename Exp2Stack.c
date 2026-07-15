#include<stdio.h>
#define Max 10
int main()
{
    int n;
    int Stack[Max];
    int top = -1;
    int i;
    printf("Enter the Number of Elements ");
    scanf("%d",&n);
     
     if(top==(Max-1))
     {
        printf("Stack is full");
     }
     else
     top++;
    Stack[top] = n;   // Stores the entered number
    printf("Element %d pushed successfully.\n", Stack[top]);
    }

   

}
