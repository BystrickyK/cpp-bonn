#include <iostream>
#include <stdlib.h>
#include <chrono>
#include "tools.h"
using namespace std;


int main(){

  srand(time(NULL));

  array<int, ARRSIZE> key;
  array<int, ARRSIZE> guess;

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
  while (!ArrayEq(key, guess)){

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
