#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int main() {
  int a,b;
  int i, j, k;

  scanf("%d", &a);
  for (i = 0; i < a; i++) {
    scanf("%d", &b);
    int sum = 0;
    for (j = 0; j < b; j++) {
      int c,d,e;
      // size, animal, green
      scanf("%d %d %d", &c, &d, &e);
      sum += c * e;
    }
    printf("%d\n", sum);
  }

  return 0;
}

