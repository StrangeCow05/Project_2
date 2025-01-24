#include <stdio.h> 

const int MAX=9;



int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main

//start function print
 int printValues(){
 printf("{");
 int i;
 for (i=0; i < MAX ; i++){
  printf("%d", i);
 }
 printf("} \n");
 int x = 0;
 int y = 0;
 return 0;
} //end

//start function swap
int swap(x, y ){
 int temp;
 temp = x;
 x = y;
 y = temp;
 return 0;
} // end swap

//start function sort
int sort( ){
 int i;
 int j;
 for (i = 0; i < MAX -1; i++){//start for i
  for (j =0; j < MAX -1; j++){//start for j
   if (values[j] > values[j+1]){//start if
    swap(j,j+1);
    printValues(values);
   }//end if
  }//end j
 }//end i 
 return 0;
}//end

