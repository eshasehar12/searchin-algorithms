#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
  if (high >= low) {

    int mid = low + (high - low) / 2; 

    if (arr[mid] == key) return mid; 
    if (arr[mid] > key) 
      return binarySearch(arr, low, mid - 1, key); 

    return binarySearch(arr, mid + 1, high, key); 
  } 

  return -1; 
}

int main()
{
  int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int key = 0;


  cout << "Enter Search Element: ";
  cin >> key;

  int size = sizeof(array)/sizeof(array[0]);


  int index = binarySearch(array, 0, size, key);

  if(index == -1)
    cout << key << " Not Found" << endl;
  else
    cout << key << " Found at Index = " << index << endl;

  return 0;
}
