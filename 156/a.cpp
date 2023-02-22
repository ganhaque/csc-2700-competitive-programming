#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

// function to normalize a word by converting it to lowercase and sorting its letters
string normalize(const string& word) {
  string result = word;
  transform(result.begin(), result.end(), result.begin(), [](unsigned char c) {
      return tolower(c);
      });
  sort(result.begin(), result.end());
  return result;
}

int main() {
  map<string, string> dictionary; // map of normalized words to their original form
  vector<string> ananagrams; // vector of relative ananagrams
  int a,b,c,d;
  int i, j, k;
  int counter1;
  int counter2;
  int counter3;

  string line;
  while (getline(cin, line)) {
    if (line == "#") {
      break;
    }
    // split the line into words
    size_t start = 0, end;
    while ((end = line.find_first_of(" \t", start)) != string::npos) {
      string word = line.substr(start, end - start);
      start = end + 1;
      // add the normalized word to the dictionary if it's not already there
      string norm = normalize(word);
      if (dictionary.find(norm) == dictionary.end()) {
        dictionary[norm] = word;
      } else {
        dictionary[norm] = "";
      }
    }
    // add the last word on the line
    string word = line.substr(start);
    // add the normalized word to the dictionary if it's not already there
    string norm = normalize(word);
    if (dictionary.find(norm) == dictionary.end()) {
      dictionary[norm] = word;
    } else {
      dictionary[norm] = "";
    }
  }

  // iterate over the dictionary and add the relative ananagrams to the vector
  for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {
    if (it->second != "") {
      ananagrams.push_back(it->second);
    }
  }

  // sort the vector and output the relative ananagrams
  sort(ananagrams.begin(), ananagrams.end());
  for (const auto& word : ananagrams) {
    cout << word << endl;
  }

  return 0;

}
