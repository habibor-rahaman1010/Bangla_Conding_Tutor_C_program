//calloc and realloc and free implement in c program..

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr, i , n1, n2;
  printf("Enter size of memory: ");
  scanf("%d", &n1);

  ptr = (int*) calloc(n1, sizeof(int));

  printf("Addresses of previously allocated memory:\n");
  for(i = 0; i < n1; ++i)
    printf("%pc\n", ptr + i);

  printf("\nEnter the new size of memory: ");
  scanf("%d", &n2);

  // rellocating the memory
  ptr = realloc(ptr, n2 * sizeof(int));

  printf("Addresses of newly allocated memory:\n");
  for(i = 0; i < n2; ++i)
    printf("%pc\n", ptr + i);

  // freed the memory...
  free(ptr);

  return 0;
}

