/*
                                                                ALGORITHM
                                                                NAME :: SHRUTI RAJ
                                                                REG NO :: 201900392
                                                            
 algorithm discription:- Menu-driven program for doubly circular  linked list  
memeber functions :-         1. Insertion − Adds an element at the beginning of the list.

                             2. Insert Last − Adds an element at the end of the list.

                             3. Insert After − Adds an element after an item of the list. 

                             4.  Deletion − Deletes an element at the beginning of the list 

                             5. Delete Last − Deletes an element from the end of the list.

                             6. Delete − Deletes an element from the list using the key.

                             7. Display
             
                                                                

Insertion in circular doubly linked list at beginning

Step 1: IF PTR = NULL
Write OVERFLOW
Go to Step 13
[END OF IF]

Step 2: SET NEW_NODE = PTR
Step 3: SET PTR = PTR -> NEXT
Step 4: SET NEW_NODE -> DATA = VAL
Step 5: SET TEMP = HEAD
Step 6: Repeat Step 7 while TEMP -> NEXT != HEAD
Step 7: SET TEMP = TEMP -> NEXT
[END OF LOOP]

Step 8: SET TEMP -> NEXT = NEW_NODE
Step 9: SET NEW_NODE -> PREV = TEMP
Step 1 : SET NEW_NODE -> NEXT = HEAD
Step 11: SET HEAD -> PREV = NEW_NODE
Step 12: SET HEAD = NEW_NODE
Step 13: EXIT

Insertion in circular doubly linked list at end
Step 1: IF PTR = NULL
Write OVERFLOW
Go to Step 12
[END OF IF]

Step 2: SET NEW_NODE = PTR
Step 3: SET PTR = PTR -> NEXT
Step 4: SET NEW_NODE -> DATA = VAL
Step 5: SET NEW_NODE -> NEXT = HEAD
Step 6: SET TEMP = HEAD
Step 7: Repeat Step 8 while TEMP -> NEXT != HEAD
Step 8: SET TEMP = TEMP -> NEXT
[END OF LOOP]

Step 9: SET TEMP -> NEXT = NEW_NODE
Step 10: SET NEW_NODE -> PREV = TEMP
Step 11: SET HEAD -> PREV = NEW_NODE
Step 12: EXIT

Deletion in Circular doubly linked list at beginning
Step 1: IF HEAD = NULL
Write UNDERFLOW
Go to Step 8
[END OF IF]

Step 2: SET TEMP = HEAD
Step 3: Repeat Step 4 while TEMP -> NEXT != HEAD
Step 4: SET TEMP = TEMP -> NEXT
[END OF LOOP]

Step 5: SET TEMP -> NEXT = HEAD -> NEXT
Step 6: SET HEAD -> NEXT -> PREV = TEMP
Step 7: FREE HEAD
Step 8: SET HEAD = TEMP -> NEXT

Deletion in circular doubly linked list at end
Step 1: IF HEAD = NULL
Write UNDERFLOW
Go to Step 8
[END OF IF]

Step 2: SET TEMP = HEAD
Step 3: Repeat Step 4 while TEMP -> NEXT != HEAD
Step 4: SET TEMP = TEMP -> NEXT
[END OF LOOP]

Step 5: SET TEMP -> PREV -> NEXT = HEAD
Step 6: SET HEAD -> PREV = TEMP -> PREV
Step 7: FREE TEMP
Step 8: EXIT

Deletion in circular doubly linked list after the specified node
Step 1: IF HEAD = NULL
    Write UNDERFLOW
   Go to Step 9
  [END OF IF]

Step 2: SET TEMP = HEAD
Step 3: Repeat Step 4 while TEMP -> DATA != ITEM
Step 4: SET TEMP = TEMP -> NEXT
   [END OF LOOP]

Step 5: SET PTR = TEMP -> NEXT
Step 6: SET TEMP -> NEXT = PTR -> NEXT
Step 7: SET PTR -> NEXT -> PREV = TEMP
Step 8: FREE PTR
Step 9: EXIT

inside int main function 

step 1: choose the option you want to perform 

step 2:       switch(expression){    
            case 1:  
            insertion_beginning();   //code to be executed;  
            break;  
            case 2:  
            insertion_last();   //code to be executed;  
            break;  
            case 3:  
            insertion_specified();   //code to be executed;  
            break;  
            case 4:  
            deletion_beginning();   //code to be executed;  
            break;  
            case 5:  
            deletion_last();   //code to be executed;  
            break;  
            case 6:  
            deletion_specified();   //code to be executed;  
            break;  
            case 7:  
            display();   //code to be executed;  
            break;  
            case 8:  
            exit(0);   //code to be executed;  
            break;  
            default:  
            printf("Please enter valid choice.."); // code to be executed if all cases are not matched 
        }  
step 3: exit 

*/
                   
                



#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insert_beg();
void insert_last();
void insert_position();
void deletion_beg();
void deletion_last();
void deletion_position();
void display();

int main ()
{
int choice =0;
    while(choice != 8)
    {
        printf("\n_______________________________________________\n");
        printf("\n1.Insertion at  begining\n2.Insertion at last\n3.Insertion at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Display\n8.Exit\n");
        printf("\nEnter your choice : ");
        printf("\n_____________________________________________________");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            insert_beg();
            break;
            case 2:
            insert_last();
            break;
            case 3:
            insert_position();
            break;
            case 4:
            deletion_beg();
            break;
            case 5:
            deletion_last();
            break;
            case 6:
            deletion_position();
            break;
            case 7:
            display();
            break;
            case 8:
            exit(0);
            break;
            default:
            printf("Please enter valid choice.");
            return 0;
        }
    }
}
void insert_beg()
{
   struct node *ptr;
   int item;
   ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
    printf("\nEnter Item value : ");
    scanf("%d",&item);

   if(head==NULL)
   {
       ptr->next = NULL;
       ptr->prev=NULL;
       ptr->data=item;
       head=ptr;
   }
   else
   {
       ptr->data=item;
       ptr->prev=NULL;
       ptr->next = head;
       head->prev=ptr;
       head=ptr;
   }
   printf("\nNode inserted\n");
}

}
void insert_last()
{
   struct node *ptr,*temp;
   int item;
   ptr = (struct node *) malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
       printf("\nEnter value : ");
       scanf("%d",&item);
        ptr->data=item;
       if(head == NULL)
       {
           ptr->next = NULL;
           ptr->prev = NULL;
           head = ptr;
       }
       else
       {
          temp = head;
          while(temp->next!=NULL)
          {
              temp = temp->next;
          }
          temp->next = ptr;
          ptr ->prev=temp;
          ptr->next = NULL;
          }

       }
     printf("\nnode inserted\n");
    }
void insert_position()
{
   struct node *ptr,*temp;
   int item,loc,i;
   ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\n OVERFLOW");
   }
   else
   {
       temp=head;
       printf("Enter the location");
       scanf("%d",&loc);
       for(i=0;i<loc;i++)
       {
           temp = temp->next;
           if(temp == NULL)
           {
               printf("\n There are less than %d elements", loc);
               return;
           }
       }
       printf("Enter value : ");
       scanf("%d",&item);
       ptr->data = item;
       ptr->next = temp->next;
       ptr -> prev = temp;
       temp->next = ptr;
       temp->next->prev=ptr;
       printf("\nnode inserted\n");
   }
}
void deletion_beg()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        ptr = head;
        head = head -> next;
        head -> prev = NULL;
        free(ptr);
        printf("\nnode deleted\n");
    }

}
void deletion_last()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        ptr = head;
        if(ptr->next != NULL)
        {
            ptr = ptr -> next;
        }
        ptr -> prev -> next = NULL;
        free(ptr);
        printf("\nnode deleted\n");
    }
}
void deletion_position()
{
    struct node *ptr, *temp;
    int val;
    printf("\n Enter the data after which the node is to be deleted : ");
    scanf("%d", &val);
    ptr = head;
    while(ptr -> data != val)
    ptr = ptr -> next;
    if(ptr -> next == NULL)
    {
        printf("\nCan't delete\n");
    }
    else if(ptr -> next -> next == NULL)
    {
        ptr ->next = NULL;
    }
    else
    {
        temp = ptr -> next;
        ptr -> next = temp -> next;
        temp -> next -> prev = ptr;
        free(temp);
        printf("\nnode deleted\n");
    }
}
void display()
{
    struct node *ptr;
    printf("\n THE DOUBLY CIRCULAR LINKED LIST IS :::\n");
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
