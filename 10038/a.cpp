#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
  int a,b,c,d;
  int i, j, k;
  // scanf("%d", &d);

  while(scanf("%d ", &a) != EOF) {
    // printf("%d", a);
    int arr[a - 1];
    int num[a];
    for (i = 0; i < a - 1; i++) {
      arr[i] = i + 1;
      // printf("%d, ", arr[i]);
    }
    for (i = 0; i < a; i++) {
      scanf("%d", &num[i]);
    }
    for (i = 0; i < a - 1; i++) {
      int diff = abs(num[i+1] - num[i]);
      // printf("diff: %d\n", diff);
      // scan for diff in array
      for (j = 0; j < a - 1; j++) {
        // printf("%d, ", arr[j]);
        if (arr[j] == diff) {
          arr[j] = -1;
          break;
        }
        // printf("%d, ", arr[j]);
      }
    }
    int counter = 0;
    // printf("\n");
    // printf("Counting\n");
    for (i = 0; i < a - 1; i++) {
      // printf("%d, ", arr[i]);
      if (arr[i] == -1) {
        // printf("proc\n");
        counter += 1;
      }
    }
    if (counter == a - 1) {
      printf("Jolly\n");
      // printf("%d Jolly\n", counter);
    }
    else {
      printf("Not jolly\n");
      // printf("%d Not Jolly\n", counter);
    }

  }

  return 0;
}

