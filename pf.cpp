#include "pf.h"
using namespace std;
int sum(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++)
        result += arr[i];
    return result;
}
int product(int arr[], int size){
    int result = 1;
    for (int i = 0; i < size; i++)
        result *= arr[i];
    return result;
}
void invert(int arr[], int size){
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[size - i - 1];
        cout << temp[i] << " ";
    }
}
void increasing(int arr[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    output(arr, size);
}

void decreasing(int arr[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    output(arr, size);
}
void output(int arr[], int size){
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

void (*fun(int arr[], int size))(int[], int){
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    if (sum == arr[0])
        return &invert;
    else
        if (sum > arr[0])
            return &increasing;
        else
            return &decreasing;
}