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
            
