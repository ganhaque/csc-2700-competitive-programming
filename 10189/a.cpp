#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int main() {
  int a,b,c,d,e;
  int i, j, k;
  string line;
  int counter = 1;

  while(scanf("%d %d", &a, &b)) {
    // while (getline(cin, line)) {
    // }
    bool firstLine = true;
    // sscanf(line, "%d %d", &a, &b);
    printf("Field #%d:\n", counter);
    counter += 1;

    // int row[];
    // string column;
    printf("%d %d\n", a, b);

    string row[a];
    // for (i = 0; i < a; i++) {
    //   getline(cin, row[i]);
    //   printf("\n");
    //   printf("%c", row[i][b-1]);
    // }

    // for (i = 0; i < a; i++) {
    //   for (j = 0; j < b; j++) {
    //     if (row[i][j] != '*') {
    //       int mineCounter = 0;
    //
    //       //scan surrounding
    //       if (i - 1 > 0) { // top
    //         if (j - 1 > 0) { // top left
    //           if (row[i-1][j-1] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //         else if (j + 1 < a) { // top right
    //           if (row[i-1][j+1] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //         else { // top mid
    //           if (row[i-1][j] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //       }
    //
    //       else if (i + 1 < a) { //bottom
    //         if (j - 1 > 0) { // bottom left
    //           if (row[i+1][j-1] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //         else if (j + 1 < a) { // bottom right
    //           if (row[i+1][j+1] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //         else { // bottom mid
    //           if (row[i+1][j] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //       }
    //
    //       else { // mid
    //         if (j - 1 > 0) { // mid left
    //           if (row[i][j-1] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //         else if (j + 1 < a) { // mid right
    //           if (row[i][j+1] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //         else { // mid mid
    //           if (row[i][j] == '*') {
    //             mineCounter += 1;
    //           }
    //         }
    //       }
    //
    //       // row[i][j] = mineCounter;
    //       printf("%d", mineCounter);
    //     }
    //     else {
    //       printf("*");
    //     }
    //   }
    //   printf("\n");
    // }
  }

  return 0;

}

