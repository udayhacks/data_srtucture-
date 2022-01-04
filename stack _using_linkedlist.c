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
  
  
  print("\n Enter your choice \n");
        scanf("%d", &choice);
        
        
        switch(choice)
        {
              case 1 : 
            {
               push();
                  break ;
            } 
                    
              case 2 :
                    {
                          pop (); 
                          break;
                    }
                    
                    
              case 3 : 
                    {
                       display();
                     break ;
                    }
                       
                    
              case 4 : 
                    {
                    
                    printf("Exiting ...");
                    }
                    
                    
               default : 
                    {
                          printf("Please Enter valid choice ");
                        
                    }
        };
  }
}

void push (0
           { 
                 int val ;
                 struct node *ptr = (structnode *)malloc (sizeof(structnode ));
                 if (ptr == NULL)
                 { 
                       printf(" not able to push the element");
                 } 
                  else { 
                        printf("enter the  value ");
                        scanf("%d ", &val);
                        if (top == NULL) 
                        { ptr ->= val ;
                         ptr -> next = NULL ;
                         top = ptr ;
                        } 
                        
                        printf("Item pushed ");
                  }
           }
           
           void pop()
           {  
                 int item ; 
                 struct node *ptr ;
                 if (top == NULL )
                 { 
                       printf("Underflow ");
                       
                 }
                 
                 else 
                 {
                       i
