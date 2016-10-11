#include <stdio.h>

int isEven(unsigned int num) {
  return (num % 2 == 0);
}

int main() {
    unsigned int max;
    printf("Enter a max number:");
    scanf("%u", &max);
    for (unsigned int i = 0; i <= max; ++i) {
      printf("%d is %s\n", i, isEven(i) ? "even" : "odd");
    }
    return 0;
  }
