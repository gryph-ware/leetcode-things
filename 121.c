#include <stdio.h>
#include <stdlib.h>

int maxProfit(int *prices, unsigned int size) {
  if(size == 0) return 0;  
  int profit = 0;
  int start = prices[0];
  for (size_t i = 0; i < size; i++) {
    if (start > prices[i]) {
      start = prices[i];
    } else if((prices[i] - start) > profit){
      profit = prices[i] - start;
    }
  }
  return profit;
}


int main() {

  int prices[] = {1,2,4,2,5,7,2,4,9,0};
  size_t size = sizeof(prices) / sizeof(prices[0]);

  printf("%d", maxProfit(prices, size));
  
  return EXIT_SUCCESS;  
}  
