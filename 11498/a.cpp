#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int main() {
  int a,b,c,d,e;
  int i, j, k;

  while(scanf("%d", &c) != EOF) {
    scanf("%d %d", &a, &b);
    for (i = 0; i < c; i++) {
      int x, y;
      scanf("%d %d", &x, &y);
      if (x == a || y == b) {
        printf("divisa");
      }
      else if ( x > a && y > b) {
        printf("NE");
      }
      else if ( x < a && y > b) {
        printf("NO");
      }
      else if ( x < a && y < b) {
        printf("SO");
      }
      else if ( x > a && y < b) {
        printf("SE");
      }
      printf("\n");
    }
  }

  return 0;
}

