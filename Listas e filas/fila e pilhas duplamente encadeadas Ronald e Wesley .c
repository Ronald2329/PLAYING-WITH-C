#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LENGTH 100


/*
 Autores: Wesley Luiz, Ronald Oliveira.
 Objetivo: Construir um algoritmo que seja capaz de poder adicionar e remover elementos em forma de pilha e fila 
 com base na escolhe do usuario.
 Data de estrega: 14/12/2022.
 */

// Definition of the node structure for the queue
typedef struct node {
  int data;
  struct node *prev;
  struct node *next;
} Node;

// Pointers to the head and tail of the queue
Node *head = NULL;
Node *tail = NULL;

// Pointer to the top of the stack
//Node *top = NULL;

// Function to create a new node and return a pointer to it
Node* createNode(int data) {
  Node *newNode = (Node*)malloc(sizeof(Node));
  if (!newNode) {
    printf("Error allocating memory for new node\n");
    exit(1);
  }
  newNode->data = data;
  newNode->prev = NULL;
  newNode->next = NULL;
  return newNode;
}

// Atriute  function the lib time.h for variable t
time_t t;

// Create the struct with pointer for the print local time
struct time *tm;

// Create global variable for (receber) the struct time
char str[MAX_LENGTH];

// Function to insert a new node at the end of the queue
void enqueue(int data) {
  Node *newNode = createNode(data);

  if (tail == NULL) {
    // Queue is empty, so new node is both head and tail
    head = newNode;
    tail = newNode;
  } else {
    // Insert new node at the end of the queue
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void enqueue_head(int data) {
  Node *newNode = createNode(data);

  if (head == NULL) {
    // Queue is empty, so new node is both head and tail
    head = newNode;
    tail = newNode;
  } else {
    // Insert new node at the beginning of the queue
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    
 }
 
}

// Function to remove the head node from the queue
void dequeue() {
  if (head == NULL) {
    printf("Error: Queue is empty\n");
    return;
  }

  Node *temp = head;
  head = head->next;
  if (head) {
    head->prev = NULL;
  } else {
    // Queue is now empty, so update tail
    tail = NULL;
  }
  free(temp);
}

void dequeue_end() {
  if (head == NULL) {
    printf("Error: Queue is empty\n");
    return;
  }

  Node *temp = head;
  // Find the last node in the queue
  while (temp->next != NULL) {
    temp = temp->next;
  }
  // Remove the last node from the queue
  if (temp->prev != NULL) {
    temp->prev->next = NULL;
  } else {
    // The queue is now empty, so update head and tail
    head = NULL;
    tail = NULL;
  }
  free(temp);
}

// Function to print the queue from head to tail
void printQueue() {
  Node *temp = head;
  printf("=======Queue=======\n");
		  while (temp) {
		    printf("%d-> ", temp->data);
		    temp = temp->next;
		  }
   printf("\n");
  printf("=======Queue=======\n");
 
}

// Function print the queue in file extesion .txt
void printQueue_TXT() {
  Node *temp = head;
  FILE 	*fp;
  
  fp = fopen("Filas.txt","a+");
  
  if(fp == NULL){
  	printf("Não  foi possível abrir o arquivo!!\n");
  }
  else{
  	 		t = time(NULL);
            tm = localtime(&t);
  		// Function this lib (time.h) for print local time
  		strftime(str, MAX_LENGTH, "%c", tm);
	  	fprintf(fp,"=======Queue=======\n");
	  	fprintf(fp,"Alterado em: %s\n",str);
	  while (temp) {
	    fprintf(fp,"%d-> ", temp->data);
	    temp = temp->next;
	  }
	  fprintf(fp,"\n");
	  fprintf(fp,"=======Queue=======\n");
	  fprintf(fp,"\n");
  }
}

// Function to push a new node onto the stack
void push(int data) {
  Node *newNode = createNode(data);

  if (head == NULL) {
    // Stack is empty, so new node is both head and tail
    head = newNode;
  } else {
    // Insert new node at the top of the stack
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
}

// Function to push a new node onto the stack
void push_end(int data) {
  Node *newNode = createNode(data);

  if (head == NULL) {
    // Stack is empty, so new node is both head and tail
    head = newNode;
  } else {
    // Find the last node in the stack
    Node *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    // Insert new node at the end of the stack
    temp->next = newNode;
    newNode->prev = temp;
  }
}


// Function to pop at the end the top node from the stack
void pop() {
  if (head == NULL) {
    printf("Error: Stack is empty\n");
    return;
  }

  Node *temp = head;
  head = head->next;
  if (head) {
    head->prev = NULL;
  }
  free(temp);
}


// pop at the end of stack
void pop_end() {
  if (head == NULL) {
    printf("Error: Stack is empty\n");
    return;
  }

  Node *temp = head;
  // Find the last node in the stack
  while (temp->next != NULL) {
    temp = temp->next;
  }
  // Remove the last node from the stack
  if (temp->prev != NULL) {
    temp->prev->next = NULL;
  } else {
    // The stack is now empty, so update top
    head = NULL;
  }
  free(temp);
}


void enqueueAtPosition(int data, int position) {
  Node *newNode = createNode(data);

  if (head == NULL) {
    // Queue is empty, so new node is both head and tail
    head = newNode;
    tail = newNode;
  } else if (position == 0) {
    // Insert new node at the beginning of the queue
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  
  }else {
    // Find the node at the specified position
    Node *temp = head;
    int i;
    for (i = 0; i < position && temp->next != NULL; ++i) {
      temp = temp->next;
    }
    // Insert the new node after the node at the specified position
    newNode->prev = temp;
    newNode->next = temp->next;
    if (temp->next != NULL) {
      temp->next->prev = newNode;
    } else {
      // The new node is being inserted at the end of the queue, so update tail
      tail = newNode;
    }
    temp->next = newNode;
  }
}

void dequeueAtPosition(int position) {
  if (head == NULL) {
    printf("Error: Queue is empty\n");
    return;
  }

  if (position == 0) {
    // Remove the head node from the queue
    Node *temp = head;
    head = head->next;
    if (head) {
      head->prev = NULL;
    } else {
      // Queue is now empty, so update tail
      tail = NULL;
    }
    free(temp);
  } else {
    // Find the node at the specified position
    Node *temp = head;
    int i;
    for (i = 0; i < position && temp->next != NULL; i++) {
      temp = temp->next;
    }
    // Remove the node at the specified position
    if (temp->prev != NULL) {
      temp->prev->next = temp->next;
    }
    if (temp->next != NULL) {
      temp->next->prev = temp->prev;
    }
    free(temp);
  }
}

// Function to print the stack from top to bottom
/*void printStack() {
  Node *temp = top;
  printf("Stack: ");
  while (temp) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}*/

//Function print the stack

void printStack() {
  Node *temp = head;
 printf("=======Stack=======\n");
  while (temp) {
    printf(" <-%d", temp->data);
    temp = temp->next;
  }
  printf("\n");
  printf("=======Stack=======\n");
  
}
void printElement(){
  Node *temp = head;
  printf("Elements: ");
  while (temp) {
    printf(" <-%d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

//Function print the stack  in file extesion .txt
void printStack_TXT() {
  Node *temp = head;
  FILE *sp;
  sp = fopen("Pilhas.txt","a+");
  
  if(sp == NULL)
  {
  	printf("Não foi possivel abrir o arquivo!!");
  }else{
  			t = time(NULL);
            tm = localtime(&t);
  	// Function this lib (time.h) for print local time
  		strftime(str, MAX_LENGTH, "%c", tm);
		fprintf(sp,"Alterado em: %s\n",str);
	  	fprintf(sp,"=======Stack=======\n");
			  while (temp) {
			    fprintf(sp," <-%d", temp->data);
			    temp = temp->next;
			  }
	  fprintf(sp,"\n");
	  fprintf(sp,"=======Stack=======\n");
	  fprintf(sp,"\n");
  }
 
}


// Function call all functions about queue
void queue(){
    int option;
    int data;
    int position;
    
    do{
        printf("==================Queue==================\n");
	 printf("\t0 - Exit\n\t1 - Push Tail\n\t2 - Push Head\n\t3 - Remove Head\n\t4 - Remove Tail\n\t5 - Add Any Position\n\t6 - Remove Any Position\nType an option: ");
     scanf("%d", &option); 
        switch(option){
            case 1:
            do{
                printf("Type an element or type 999 for exit: ");
                scanf("%i", &data);
                if (data ==999){
                    break;
                }
                enqueue(data);
                printQueue();
                printQueue_TXT();
            }while(data !=999);
             
                 break;
            case 2:
            do{    
                printf("Type an element or type 999 for exit: ");
                scanf("%i", &data);
                if (data ==999){
                    break;
                }
                enqueue_head(data);
                printQueue();
            }while(data != 999);
                break;
            case 3:
                dequeue();
                printQueue();
                break;
            case 4:
                dequeue_end();
                printQueue();
                break;
            case 5:
            do{
                printf("Type an element or type 999 for exit: ");
                scanf("%i", &data);
                if (data ==999){
                    break;
                }
                printf("Type a position: ");
                scanf("%i", &position);
                
                enqueueAtPosition(data,position);
                printQueue();
            }while(data !=999);
             
                 break;
            case 6:
             printQueue();
            do{
                printf("Type a position or 999 for exit: ");
                scanf("%i", &position);
                if (position ==999){
                    break;
                }
                dequeueAtPosition(position);
                printQueue();
            }while(position !=999);
             
                 break;
         
         }
        
        
    }while(option !=0);
    head = NULL;
    tail = NULL;
}

// Function call all functions about stack

void stack(){
    int option;
    int data,position;
    
    do{
        printf("==================Stack==================\n");
	 printf("\t0 - Exit\n\t1 - Push Head \n\t2 - Push Tail\n\t3 - Remove Tail\n\t4 - Remove Head\n\t5 - Add Any Position\n\t6 - Remove Any Position\nType an option: ");
     scanf("%d", &option); 
        switch(option){
            case 1:
            do{
                printf("Type an element or 999 for exit: ");
                scanf("%i", &data);
                if (data ==999){
                    break;
                }
                push(data);
                printStack();
                printStack_TXT();
            }while(data !=0);
             
                 break;
            case 2:
            do{    
                printf("Type an element or 999 for exit: ");
                scanf("%i", &data);
                if (data ==999){
                    break;
                }
                push_end(data);
                printStack();
                printStack_TXT();

            }while(data != 999);
                break;
            case 3:
                pop_end();
                printStack();
                printStack_TXT();
                break;
            case 4:
                pop();
                printStack();
                printStack_TXT();

                break;
            case 5:
                do{
                printf("Type an element or type 999 for exit: ");
                scanf("%i", &data);
                if (data ==999){
                    break;
                }
                printf("Type a position: ");
                scanf("%i", &position);
                
                enqueueAtPosition(data,position);
                printStack();
                printStack_TXT();
            }while(data !=999);
             
                 break;
            case 6:
            printStack();
            do{
                printf("Type a position or 999 for exit: ");
                scanf("%i", &position);
                if (position ==999){
                    break;
                }
                dequeueAtPosition(position);
                printStack();
                printStack_TXT();
            }while(position !=999);
             
                 break;
         
         }
                
            
        
    }while(option !=0);
    head = NULL;
    tail = NULL;
    
}
int main() {
    
    int option;
 
 printf("===========================WELCOME===========================\n\n");
    do{
        printf("====================MENU====================\n");
        printf("\tType - [1] For Queue\n ");
        printf("\tType - [2] For Stack\n ");
        printf("\tType - [0] For Exit:\n\n\tChoose an option: ");
        scanf("%d", &option);                                              
        printf("====================MENU====================\n\n ");
      
        switch(option){
        case 1:
         queue();
            break;
 
        case 2:
          stack();
            break;
    
                     	
        default:
            if(option != 0)
                printf("\nTry Again!\n");
        }
 
    }while(option != 0);
  printf("===========================Thanks Bye===========================\n\n");		
}