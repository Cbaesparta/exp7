
#include<iostream>
using namespace std;

int main() {
    int n, i, j=0, k, l;
    cout<<"Enter size of array: ";
    cin>>n;
    int a1[n], a2[n];


    
    for(i=0;i<n;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
   
    cout<<"\nArray given by user: ";
    for(l=0;l<n;l++) {
        cout<<a1[l]<<" ";
    }
    cout<<endl;
   
    for(k=n-1;k>=0;k--) {
       
       a2[n - 1 - k] = a1[k];
    }
    
    cout<<"Reversed array: "<<' ';
    for(l=0;l<n;l++) {
        cout<<a2[l]<<" ";
    }
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ array4.cpp -o array4 } ; if ($?) { .\array4 }
Enter size of array: 2
Enter element-1: 5
Enter element-2: 6

Array given by user: 5 6
Reversed array:  6 5*/