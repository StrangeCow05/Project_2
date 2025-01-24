#include <stdio.h> 

const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

//start function print
int printValues(){
 printf("{");
 int i;
 for (i=0, i < MAX , i++){
  printf("%d", i);
 }
 printf("} \n");
 return 0;
} //end

//start function swap
int swap(*x, *y ){
 temp = *x;
 *x = *y;
 *y = temp;
 return 0;
} // end swap

//start function sort
int sort( ){

}
