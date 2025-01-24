## Algorithm 

const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);
// move main

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

//move sort under swap
constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)
  //end sort

 function printValues( ):
 print("{")
 create i
 for i from values: 
   print ("i, ") 
  print("}")

// ???????
 function swap(x , y ):
  tempVal gets  x 
  x gets  y
  y gets  tempVal 
// ??????? 

