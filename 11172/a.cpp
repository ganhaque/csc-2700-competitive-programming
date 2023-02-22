#include<iostream>
#include<stdio.h>

using namespace std;

// this is a hacky solution lol
int main() {
  int a,b,c;
  // int i;
  // cin >> c;
  scanf("%d", &c);

  while(scanf("%d %d", &a, &b) != EOF) {
    // printf("%d\n", 2 * a * b);
    if (a > b) {
      printf(">\n");
    }
    else if (a < b) {
      printf("<\n");
    }
    else {
      printf("=\n");
    }
  }

  return 0;
}

