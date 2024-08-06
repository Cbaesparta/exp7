
#include<iostream>
#define MAX_SIZE 10
using namespace std;
int main() {
    int elem[MAX_SIZE];
    int i,n, j, num, flag=0, count=0;
    cout << "Enter size of the array : ";
    cin >> n;
    for(i=0;i<n;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>elem[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<n;j++) {
        if(elem[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0) {
        cout<<"Element not present";
    }
    else if(flag==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ array5.cpp -o array5 } ; if ($?) { .\array5 }
Enter size of the array : 3
Enter element-1: 5
Enter element-2: 6
Enter element-3: 94
Enter element to be searched: 6
Position of 6: 2
Element is present: 1 times*/
