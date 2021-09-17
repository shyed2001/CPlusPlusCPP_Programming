#include <iostream>
using namespace std;
void resizeArray(int*& arr, int currentsize, int newsize) (

	int* temp = new int[newsize];
for (int i = 0; i < currentSize; i++)
	temp[i] = arr[1];
delete[] arr;
arr = temp;

int main() {
	int size = 10;
	int.arr = new int[size]; ]
	for (int i = 0; i < size; i++)
		arr[i] = i * 10;

	int oneMore = 110;
	int newsize = size * 2;
	resizeArray(arr, size, newSize);
	size = newSize;
	arr[size++] = oneMore;
