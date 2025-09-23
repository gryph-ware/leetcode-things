#include <iostream>
#include <cstdlib>
#include <cmath>

int nearestZero(int *arr, int size) {
  int nearest = arr[0];
  for (int i = 0; i < size; i++) {
    if (abs(nearest) > abs(arr[i]) ||
        (abs(nearest) == abs(arr[i]) && nearest < arr[i])) {
      nearest = arr[i];      
    }
  }
  return nearest;
}

int main() {

  int arr[] = {1, -1};
  int size = sizeof(arr) / sizeof(arr[0]);

  std::cout << nearestZero(arr, size);
  
  return EXIT_SUCCESS;  
}  
