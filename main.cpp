#include <iostream>
using namespace std;



int getSumBetween2Nums(int firstNum, int secondNum) {
	int sum = 0;
	for (int i = firstNum; i <= secondNum; i++) {
		sum += i;
	}

	return sum;
}

int getTheMinNumInArr(int arr[], int arrLen) {
	int minNum = arr[0], IndexOfMinNum;
	for (int i = 1; i < arrLen; i++) {
		if (arr[i] < minNum) {
			minNum = arr[i];
			IndexOfMinNum = i;
		}
	}

	return minNum;
}

int getTheMaxNumInArr(int arr[], int arrLen) {
	int maxNum = arr[0], IndexOfMaxNum = 0;
	for (int i = 1; i < arrLen; i++) {
		if (arr[i] > maxNum) {
			maxNum = arr[i];
			IndexOfMaxNum = i;
		}
	}

	return maxNum;
}

int getArrSum(int arr[], int arrLen) {
	int sum = 0;

	for (int i = 0; i < arrLen; i++) {
		sum += arr[i];
	}

	return sum;
}




int sumOfMissingNumbers(int arr[], int arrLen) {
	return getSumBetween2Nums(getTheMinNumInArr(arr, arrLen), getTheMaxNumInArr(arr, arrLen)) - getArrSum(arr, arrLen);
}




int main(void) {

  // For example: the missing numbers in this array is: (13, 14), so the function return sum of these missing numbers of given array below.
  // Here in this example, the sum of missing numbers is equal to (27).
	int array[] = { 17, 16, 15, 10, 11, 12 };
	int arrayLenght = sizeof(array) / sizeof(array[0]);
	
	cout << sumOfMissingNumbers(array, arrayLenght) << endl;
	

	
	
	return 0;
}
