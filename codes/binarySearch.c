/* Algorithm
Procedure binary_search
   A ← sorted array
   n ← size of array
   x ← value to be searched

   Set lowerBound = 1
   Set upperBound = n

   while x not found
      if upperBound < lowerBound
         EXIT: x does not exists.

      set midPoint = lowerBound + ( upperBound - lowerBound ) / 2

      if A[midPoint] < x
         set lowerBound = midPoint + 1

      if A[midPoint] > x
         set upperBound = midPoint - 1

      if A[midPoint] = x
         EXIT: x found at location midPoint
   end while
end procedure
The time complexity of the binary search algorithm is O(log n)
*/
#include<stdio.h>
void binary_search(int a[], int low, int high, int key){
   int mid;
   mid = (low + high) / 2;
   if (low <= high) {
      if (a[mid] == key)
         printf("Element found at index: %d\n", mid);
      else if(key < a[mid])
         binary_search(a, low, mid-1, key);
      else if (a[mid] < key)
         binary_search(a, mid+1, high, key);
   } else if (low > high)
      printf("Unsuccessful Search\n");
}
int main(){
   int i, n, low, high, key;
   n = 5;
   low = 0;
   high = n-1;
   int a[10] = {12, 14, 18, 22, 39};
   key = 22;
   binary_search(a, low, high, key);
   key = 23;
   binary_search(a, low, high, key);
   return 0;
}
