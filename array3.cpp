#include <iostream>
#define SIZE 6
using namespace std;

int main() {
    int a[SIZE];

    
    cout << "Enter " << SIZE << " elements of array: ";
    for (int index = 0; index < SIZE; index++) {
        cin >> a[index];
    }
    cout << endl;

    
    cout << "Array elements are: ";
    for (int j = 0; j < SIZE; j++) {
        cout << a[j] << "  ";
    }
    cout << endl;

    return 0;
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ array3.cpp -o array3 } ; if ($?) { .\array3 }
Enter 6 elements of array: 8
6
5
4
2
3

Array elements are: 8  6  5  4  2  3*/