#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nearestZero(int *arr, int size){
  int nearest = arr[0];
  for(int i = 0; i < size; i++){
    if(abs(nearest) > abs(arr[i]) || (abs(nearest) == abs(arr[i]) && nearest < arr[i])){
      nearest = arr[i];
    }
  }
  return nearest;
}

int main(){

  int arr[] = {-8, -1, 1, 2, -2, 3, -3};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("%d", nearestZero(arr, size));
  return EXIT_SUCCESS;
}
