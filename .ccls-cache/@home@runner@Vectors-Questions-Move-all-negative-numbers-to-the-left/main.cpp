#include <iostream>
#include<vector>
using namespace std;



// Function to rearrange the array such that all positive elements are on the left side and all negative elements are on the right side
void getthearray(int l, int h, vector<int> v) {
  // Loop until the left pointer is less than the right pointer
  while (l < h) {
    // If the element at the left pointer is negative, increment the left pointer
    if (v[l] < 0) {
      l++;
    }
    // If the element at the right pointer is positive, decrement the right pointer
    else if (v[h] > 0) {
      h--;
    }
    // Otherwise, swap the elements at the left and right pointers
    else {
      swap(v[l], v[h]);
    }
  }

  // Print the rearranged array
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}

int main() {
  // Create a vector of integers
  vector<int> v = {1, -2, 3, -4, 5};

  // Set the left and right pointers
  int l = 0;
  int h = v.size() - 1;

  // Call the function to rearrange the array
  getthearray(l, h, v);

  return 0;
}
