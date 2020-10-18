/*                                                           ALGORITHM 
                                                         NAME :: SHRUTI RAJ
                                                          REG NO. ::-- 201900392
algorithm discription:- Menu-driven program for doubly linked list  
memeber functions :-         1. Insertion − Adds an element at the beginning of the list.

                             2. Insert Last − Adds an element at the end of the list.

                             3. Insert After − Adds an element after an item of the list. 

                             4.  Deletion − Deletes an element at the beginning of the list 

                             5. Delete Last − Deletes an element from the end of the list.

                             6. Delete − Deletes an element from the list using the key.

                             7. Display




Insertion in doubly linked list at beginning
Step 1: IF ptr = NULL
  Write OVERFLOW
 Go to Step 9
 [END OF IF]
Step 2: SET NEW_NODE = ptr
Step 3: SET ptr = ptr -> NEXT
Step 4: SET NEW_NODE -> DATA = VAL
Step 5: SET NEW_NODE -> PREV = NULL
Step 6: SET NEW_NODE -> NEXT = START
Step 7: SET head -> PREV = NEW_NODE
Step 8: SET head = NEW_NODE
Step 9: EXIT


Insertion in doubly linked list at the end
Step 1: IF PTR = NULL
 Write OVERFLOW
  Go to Step 11
 [END OF IF]
Step 2: SET NEW_NODE = PTR
Step 3: SET PTR = PTR -> NEXT
Step 4: SET NEW_NODE -> DATA = VAL
Step 5: SET NEW_NODE -> NEXT = NULL
Step 6: SET TEMP = START
Step 7: Repeat Step 8 while TEMP -> NEXT != NULL
Step 8: SET TEMP = TEMP -> NEXT
[END OF LOOP]
Step 9: SET TEMP -> NEXT = NEW_NODE
Step 10C: SET NEW_NODE -> PREV = TEMP
Step 11: EXIT

Insertion in doubly linked list after Specified node
Step 1: IF PTR = NULL
   Write OVERFLOW
   Go to Step 15
 [END OF IF]
Step 2: SET NEW_NODE = PTR
Step 3: SET PTR = PTR -> NEXT
Step 4: SET NEW_NODE -> DATA = VAL
Step 5: SET TEMP = START
Step 6: SET I = 0
Step 7: REPEAT 8 to 10 until I
Step 8: SET TEMP = TEMP -> NEXT
STEP 9: IF TEMP = NULL
STEP 10: WRITE "LESS THAN DESIRED NO. OF ELEMENTS"
   GOTO STEP 15
   [END OF IF]
 [END OF LOOP]
Step 11: SET NEW_NODE -> NEXT = TEMP -> NEXT
Step 12: SET NEW_NODE -> PREV = TEMP
Step 13 : SET TEMP -> NEXT = NEW_NODE
Step 14: SET TEMP -> NEXT -> PREV = NEW_NODE
Step 15: EXIT


Deletion in doubly linked list after the specified node
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

Deletion at beginning
STEP 1: IF HEAD = NULL
WRITE UNDERFLOW
GOTO STEP 6
STEP 2: SET PTR = HEAD
STEP 3: SET HEAD = HEAD → NEXT
STEP 4: SET HEAD → PREV = NULL
STEP 5: FREE PTR
STEP 6: EXIT

Deletion in doubly linked list at the end


Step 1: IF HEAD = NULL
Write UNDERFLOW
Go to Step 7
[END OF IF]
Step 2: SET TEMP = HEAD
Step 3: REPEAT STEP 4 WHILE TEMP->NEXT != NULL
Step 4: SET TEMP = TEMP->NEXT
[END OF LOOP]
Step 5: SET TEMP ->PREV-> NEXT = NULL
Step 6: FREE TEMP
Step 7: EXIT

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
void insert_at_pos();
void deletion_beg();
void deletion_last();
void delete_at_pos();
void display();

int main ()
{
int choice =0;
    while(choice != 8)
    {
        printf("\n ____________________________________________________");
        printf("\n1.Insert in beginning \n2.Insert at last\n3.Insert at specific position \n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Display\n8.Exit\n");
        printf("\nEnter your choice : ");
        printf("\n ____________________________________________________");
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
            insert_at_pos();
            break;
            case 4:
            deletion_beg();
            break;
            case 5:
            deletion_last();
            break;
            case 6:
            delete_at_pos();
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
   struct node *ptr,*temp;
   int item;
   ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
    printf("\nEnter data: ");
    scanf("%d",&item);
    ptr->data=item;
   if(head==NULL)
   {
      head = ptr;
      ptr -> next = head;
      ptr -> prev = head;
   }
   else
   {
       temp = head;
    while(temp -> next != head)
    {
        temp = temp -> next;
    }
    temp -> next = ptr;
    ptr -> prev = temp;
    head -> prev = ptr;
    ptr -> next = head;
    head = ptr;
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
       printf("\nEnter data : ");
       scanf("%d",&item);
        ptr->data=item;
       if(head == NULL)
       {
           head = ptr;
           ptr -> next = head;
           ptr -> prev = head;
       }
       else
       {
          temp = head;
          while(temp->next !=head)
          {
              temp = temp->next;
          }
          temp->next = ptr;
          ptr ->prev=temp;
          head -> prev = ptr;
          ptr -> next = head;
        }
   }
     printf("\nnode inserted\n");
}
void insert_at_pos()
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
       printf("Enter the index where to insert");
       scanf("%d",&loc);
       for(i=0;i<loc;i++)
       {
           temp = temp->next;
           if(temp == NULL)
           {
               printf("\n invalid index");
               return;
           }
       }
       printf("Enter data :: ");
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
    struct node *temp;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        temp = head;
        while(temp -> next != head)
        {
            temp = temp -> next;
        }
        temp -> next = head -> next;
        head -> next -> prev = temp;
        free(head);
        head = temp -> next;
    }

}
void deletion_last()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        ptr = head;
        if(ptr->next != head)
        {
            ptr = ptr -> next;
        }
        ptr -> prev -> next = head;
        head -> prev = ptr -> prev;
        free(ptr);
        printf("\nnode deleted\n");
    }
}

void delete_at_pos()
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
        printf("\ndeletion not possible \n");
    }
    else if(ptr -> next -> next == NULL)
    {
        ptr ->next = NULL;
        printf("not deleted");
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
    ptr=head;
    if(head == NULL)
    {
    }
    else
    {
        printf("\n THE DOUBLY LINKED LIST IS :: \n");

        while(ptr -> next != head)
        {

            printf("%d\n", ptr -> data);
            ptr = ptr -> next;
        }
        printf("%d\n", ptr -> data);
    }
}   
