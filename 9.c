#include<stdio.h>
 //Definition of an Employee structure with the necessary fields
struct employee {
  int eid, eage;
  char ename[20];
  float esal;
};
void main() {
  struct employee e[50]; //e - Array of structure employee
  int n, i; // n - for number of employees and i - a loop iterator
  // Read the number of Employees
  printf("Enter the number of Employees: ");
  scanf("%d", & n);
  printf("\n");
  // Read the details of n - employees
  for (i = 0; i < n; i++) {
    printf("Enter the details of Employee : %d\n", i + 1);
    printf("Enter eid:");
    scanf("%d", & e[i].eid);
    printf("Enter ename:");
    scanf("%s", e[i].ename);
    printf("Enter eage:");
    scanf("%d", & e[i].eage);
    printf("Enter esal:");
    scanf("%f", & e[i].esal);
    printf("\n");
  }
  //Display the details of n = employees with proper formatting
  printf("\n***********************************************\n");
  printf("\nDetails of %d Employees are as follows\n", n);
  printf("\n***********************************************\n");
  printf("\nEmpid\tEmpname\tEmpage\tEmpsal\n");
  printf("\n \n");
  for (i = 0; i < n; i++) {
    printf("\n%d\t\t%s\t\t%d\t%f", e[i].eid, e[i].ename, e[i].eage, e[i].esal);
  }
  printf("\n \n");
}