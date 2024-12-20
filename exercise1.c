#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main() {
  int i, j;

printf("Enter two numbers:\n");
scanf("%d%d", &i, &j);

 printf("Before swapping: i = %d, j = %d\n", i, j);

  swap(&i, &j);

   printf("the new values of i and j are: %d, %d\n", i, j);

   return 0;
}

void swap(int *a, int *b) {
    int temp;

    // Swapping the values
    temp = *a;
    *a = *b;
    *b = temp;
}



