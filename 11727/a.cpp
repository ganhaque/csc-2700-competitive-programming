#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
  int a,b,c,d;
  int i;
  scanf("%d", &d);

  // while(scanf("%d %d %d", &a, &b, &c) != EOF) {
  for (i = 1; i <= d; i++) {
    scanf("%d %d %d", &a, &b, &c);
    // printf("%d\n", 2 * a * b);
    if (a > b) {
      if (a < c) { // c > a > b
        printf("Case %d: %d\n", i, a);
      }
      else if (b > c) { // a > b > c
        printf("Case %d: %d\n", i, b);
      }
      else { // a > c > b
        printf("Case %d: %d\n", i, c);
      }
    }
    else {
      if (a > c) { // b > a > c
        printf("Case %d: %d\n", i, a);
      }
      else if (b < c) { // c > b > a
        printf("Case %d: %d\n", i, b);
      }
      else { // b > c > a
        printf("Case %d: %d\n", i, c);
      }
    }
  }

  return 0;
}

