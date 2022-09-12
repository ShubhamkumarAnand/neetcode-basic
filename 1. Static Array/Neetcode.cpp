/*
   * Author :  imskanand
   ^ Time   : 12 September 2022 (17:32)
*/

#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using i64 = long long;

void takingInput(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    cin >> arr[i];
  }
}

void readingOutput(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << ' ';
  }
  cout << '\n';
}

void insertingEnd(int arr[], int length, int capacity, int number) {
  if (length < capacity) {
    arr[length] = number;
  }
}

void removingEnd(int arr[], int length) {
  if (length > 0) {
    arr[length - 1] = 0;
  }
}

// ! Not Understanding the following concept
void insertMiddle(int arr[], int length, int index, int value) {
  for (int i = length - 1; i >= index; i--) {
    arr[i + 1] = arr[i];
  }
  arr[index] = value;
}

void removeMiddle(int arr[], int length, int index) {
  for (int i = index + 1; i < length; i++) {
    arr[i + 1] = arr[i];
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  return 0;
}
