#include <stdio.h>
  int main() {
    int a[10];
    int i;
    int among;
    printf("Enter ten values:");
    for (i = 0; i < 10; i++)
    {
    scanf("%d", &a[i]);
    }
    among = a[0];
    for (i = 0; i < 10; i++) {
if (a[i] > among) {
among = a[i];
    }
    }
    printf("among of ten numbers is %d", among);
    return 0;
  }
