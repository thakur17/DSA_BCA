#include <stdio.h>
#define MAXSIZE 10

int stack[MAXSIZE];
int top = -1;

/* Check if the stack is full*/
int isfull(){
   if(top == MAXSIZE-1)
      return 0;
   else
      return 1;
}

/* Function to insert into the stack */
int push(int data){
   if(isfull()==0) {
      printf("%d Could not be inserted, Stack overflow.\n",data);
      
   } else {
      top = top + 1;
      stack[top] = data;
   }
}
int isEmpty(){
   if(top == -1)
      return 0;
   else
      return 1;
}
void pop(){
if(isEmpty()==0) {
      printf("Could not be popped, Stack underflow.\n");
      
   } else {
      printf("%d has been popped.\n",stack[top]);
      stack[top] = 0;
      
      top = top - 1;
   }
}
/* Main function */
int main(){
   int i;
   //pop();
   
   push(44);
   push(10);
   push(62);
   push(123);
 
   push(15);
   push(150);
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();
 
   printf("Stack Elements: \n");
   
   // print stack data
   for(i = 0; i < MAXSIZE; i++) {
      printf("%d index number %d\n", stack[i], i);
   }
   return 0;
}