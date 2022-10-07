#include <iostream>
#include "accounts.h"
#include <iomanip>
using namespace std;

void showValues(int [], int);
void swap(int&, int&);
void bubbleSort(int [], int);

int main() {

  cout << "Start: " << cpuTime() << endl;

  bubbleSort(accountBalances, maxAccounts);

  cout << "End: " << cpuTime();

  return 0;
  
}

void showValues(int array[], int SIZE){
  for(int count = 0; count < SIZE; count++)
    cout << array[count] << " ";
  cout << "\n\n";
}

void swap(int &a, int &b){

  int temp = a;
  a = b;
  b = temp;
}

void bubbleSort(int array[], int size){

  int minElement;
  int index;

  for(minElement = size - 1; minElement > 0; minElement--){
    for(index = 0; index < minElement; index++){
      if(array[index] < array[index + 1]){
        swap(array[index], array[index + 1]);
      }
    }
  }
  showValues(array, size); //Display sorted array
}