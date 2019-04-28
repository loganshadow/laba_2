#include "pf.h"

using namespace std;
int main() {
    // 1-st part
    int array[] = {9, 1, 1, 1, 2};
    int (*pointer1)(int[], int) = &sum;
    int (*pointer2)(int[], int) = &product;
    cout << "sum: " << pointer1(array, 5) << endl;
    cout << "product: " << pointer2(array, 5) << endl;
    // 2-nd part
    void (*univer)(int[], int) = fun(array, 5);
    univer(array, 5);

    return 0;
}