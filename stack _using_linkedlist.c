#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
struct node
{
      int val;
  
      struct node *next;

};

struct node*top;

void main ()
{
   int choice = 0;
  printf("\n ******Stack operations using linked list *****");
  printf("___________________________________________________");
  while(choice != 4)
  {
  
    printf("\n\n Chose one from the below options .. \n");
    printf("\n1.Push \n 2.Pop \n 3.Shopw \n 4. Exit");
  
  
  }
