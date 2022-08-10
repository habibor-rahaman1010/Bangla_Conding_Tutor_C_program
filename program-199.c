// structure in c program...
#include <stdio.h>
#include <string.h>

// struct with typedef person
typedef struct Person {
  char name[50];
  int citNo;
  float salary;
} person;

int main() {
  person p;

  strcpy(p.name, "Habibor Rahaman");
  p.citNo = 1984;
  p. salary = 2500;

  // print structure variables
  printf("Name: %s\n", p.name);
  printf("Citizenship No: %d\n", p.citNo);
  printf("Salary: %.2f", p.salary);

  return 0;
}
