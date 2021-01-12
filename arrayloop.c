#include <stdio.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], int* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%d", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your arrayAdd function here
int arrayAdd(int arr[], int size, int inc)
{
	for(int i = 0; i < size; i++){
		arr[i] += inc;
	}
}



int main(int argc, char* argv[]) 
{
  // the variable which controls the size of the array
  int size = 10;	
  
  // the variable which increments the values in the array
  int inc = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &size, &inc);

  printf("array loop size: %d, inc %d\n", size, inc);
  
  // add your code below to:
  // - initialize the a 'size' element array
	int arr[10];
  // - fill it with the square of each index using a for loop i.e. 0, 1, 4, 9 etc
	for (int i = 0; i < 10; i++){
		arr[i] = i * i;
	}
  // - pass the array to arrayAdd to add the increment of inc
	int n = arrayAdd(arr,size, inc); 
  // - print out the array
	printf("The array is [%d, %d, %d, %d, %d, %d, %d, %d, %d, %d]\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);



  
}
