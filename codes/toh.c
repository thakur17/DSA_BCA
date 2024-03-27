#include <stdio.h>

void toh (int n, char A, char B, char C){
   if (n>0){
      toh (n-1, A, C , B);
      printf("Move disk  %c ==>  %c\n",A,C);
      toh(n-1,B,A,C);
   }

}
void fun(int n){
if (n>0){
fun(n-1);
printf(" %d ",n);
}
}
void fun1(int n){
if (n>0){
printf("  %d  ",n);
fun(n-1);

}
}

void fun2(int n){
if (n>2){
fun2(n-1);
fun2(n-2);
fun2(n-3);
}
printf("  %d  ",n);


}

int main(){
   int n;
   printf("Enter number of disk \n");
   scanf("%d",&n);
//printf("before print\n");
//fun(n);
//printf("\nafter print\n");

//fun1(n);

//printf("\n fun2 print\n");

//fun2(n);
   toh(n,'A','B','C');
   return 0;
}