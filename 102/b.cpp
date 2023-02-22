#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int findMax(int a, int b, int c) {
  int max = a;
  // static int maxArray[2];
  // maxArray[0] = a;
  // maxArray[1] = 1;
  if (b > max) {
    // maxArray[0] = b;
    // maxArray[1] = 2;
    max = b;
  }
  if (c > max) {
    // maxArray[0] = c;
    // maxArray[1] = 3;
    max = c;
  }
  return max;
}

int findMaxIndex(int a, int b, int c) {
  int max = 0;
  // static int maxArray[2];
  // maxArray[0] = a;
  // maxArray[1] = 1;
  if (b > max) {
    // maxArray[0] = b;
    // maxArray[1] = 2;
    max = 1;
  }
  if (c > max) {
    // maxArray[0] = c;
    // maxArray[1] = 3;
    max = 2;
  }
  return max;
}

int calculateMovement() {
  return -1;
}

int main() {
  int a,b;
  int i, j, k;

  // scanf("%d", &a);
  // for (i = 0; i < a; i++) {
  int arr[9];
  while(scanf("%d", &arr[0]) != EOF) {
    // brown, green, clear
    int idealB, idealG, idealC;
    int sumB, sumG, sumC;
    int indexB, indexG, indexC;
    string order = "BGC";
    // char one, two, three;
    for (i = 1; i < 9; i++) {
      scanf("%d", &arr[i]);
    }

    sumB = arr[0] + arr[3] + arr[6] - findMax(arr[0], arr[3], arr[6]);
    sumG = arr[1] + arr[4] + arr[7] - findMax(arr[1], arr[4], arr[7]);
    sumC = arr[2] + arr[5] + arr[8] - findMax(arr[2], arr[5], arr[8]);


    int first = findMaxIndex(sumB, sumG, sumC);
    if (first == 0) {

    }


    indexB = findMaxIndex(arr[0], arr[3], arr[6]);
    indexG = findMaxIndex(arr[1], arr[4], arr[7]);
    indexC = findMaxIndex(arr[2], arr[5], arr[8]);


  }

  return 0;
}

