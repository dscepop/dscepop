#include<stdio.h>

#include<stdio.h>

#include<math.h>

void main() {
  float a[10], * ptr, mean, sum, sd, sumsd;
  int i, n;
  mean = 0;
  sum = 0;
  sd = 0;
  sumsd = 0;
  printf("\nEnter the number of elements:");
  scanf("%d", & n);
  printf("\n Enter the elements: ");
  for (i = 0; i < n; i++)
    scanf("%f", & a[i]);
  ptr = a;
  for (i = 0; i < n; i++) {
    sum = sum + * ptr;
    ptr++;
  }
  mean = sum / n;
  ptr = a;
  for (i = 0; i < n; i++) {
    sumsd = sumsd + pow(( * ptr - mean), 2);
    ptr++;
  }
  sd = sqrt(sumsd / n);
  printf("\n Sum=%f", sum);
  printf("\n Mean=%f", mean);
  printf("\n Standard deviation= %f", sd);
}