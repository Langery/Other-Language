#include <stdio.h>
#include <stdlib.h>

void bubble(){
  int a[]={6, 4, 3, 5, 2, 1, 9, 8, 7};
  int n,i,j,temp;
  n = sizeof(a) / sizeof(a[0]);
  for (i=0;i<n-1;i++) {
    for (j=0;j<n-1-i;j++) {
      if (a[j]<a[j+1]) {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  for (i=0;i<n;i++) {
    printf("%d ", a[i]);
    printf("\n");
  }
}

int main(){
  bubble();
}