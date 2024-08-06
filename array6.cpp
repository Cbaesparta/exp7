#include <iostream>
using namespace std;

#define SIZE 10

int main() {
int n; 
    float a1[SIZE]; 

    
    float sum = 0, avg;
cout << "Enter number of elements to use : ";
    cin >> n;
   
    for (int i = 0; i < n; i++) {

        cout << "Enter element-" << i + 1 << ": ";
        cin >> a1[i];
    }

   
    for (int j = 0; j < n; j++) {
        sum += a1[j];
    }
    /*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ array6.cpp -o array6 } ; if ($?) { .\array6 }
Enter number of elements to use : 2
Enter element-1: 3.2
Enter element-2: 2.3
Sum of elements = 5.5
Average = 2.75*/
/*Enter number of elements to use : 2
Enter element-1: 6
Enter element-2: 4
Sum of elements = 10
Average = 5*/

   
    avg = sum / n;

    
    cout << "Sum of elements = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}