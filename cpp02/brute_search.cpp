#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <array>
using namespace std;

#define ARRSIZE 6
#define MILLISECOND chrono::milliseconds

// Array equality function
bool array_eq(const array<int,ARRSIZE>& arr1, const array<int,ARRSIZE>& arr2);

int main(){

  srand(time(NULL));

  std::array<int, ARRSIZE> key;
  std::array<int, ARRSIZE> guess;

  MILLISECOND start_time = chrono::duration_cast<MILLISECOND>(
    chrono::system_clock::now().time_since_epoch());

  // Generate a key array with 3 random integers
  for (unsigned int i=0; i<key.size(); i++){
    key[i] = rand() % 10 + 1;
  }

  // Print the key
  cout << "Key: [";
  for (unsigned int i=0; i<key.size(); i++) cout << " " << key[i];
  cout << "]" << endl;

  // Random brute force key search
  unsigned int k=0;
  while (!array_eq(key, guess)){

    // Try to guess the key: Generate 3 random integers
    for (unsigned int i=0; i<guess.size(); i++){
      guess[i] = rand() % 10 + 1;
    }

  if (k%100000 == 0){
    cout << "Guess #" << k << ": [";
    for (unsigned int i=0; i<guess.size(); i++) cout << " " << guess[i];
    cout << "]" << endl;
  }

  k++;
  }

  cout << "Key found! Key array is: [";
  for (unsigned int i=0; i<guess.size(); i++) cout << " " << guess[i];
  cout << "]" << endl;
  MILLISECOND run_time = chrono::duration_cast<MILLISECOND>(
    chrono::system_clock::now().time_since_epoch()) - start_time;

    cout << "Total runtime: " << run_time.count() << "ms" << endl;
  return 0;
}


bool array_eq(const std::array<int,ARRSIZE>& arr1, const std::array<int,ARRSIZE>& arr2){

  // Check whether the arrays have the same size
  if (arr1.size() != arr2.size()) return false;

  // Check element equality
  for (unsigned int i=0; i<arr1.size(); i++){
    if (arr1[i] != arr2[i]) return false;
  }

  // If the program gets here, the arrays are equal
  return true;
}
