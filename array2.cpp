#include<iostream>
using namespace std;
int main()
{
 int a[4]={51,65,84,96};
 int b[7]={1,2,3,5,8,88,9};
 int c[2]={89,37};
 cout<<" array a: ";
for(int i=0;i<4;i++){
    cout<<a[i]<<' ';}
cout<<endl;
cout<<"array b: ";
    for(int j=0;j<7;j++){
    cout<<b[j]<<' ';}
    cout<<endl;
    cout<<" array c: ";
    for(int k=0;k<2;k++){
    cout<<c[k]<<' ';}
    cout<<endl;

return 0;
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ array2.cpp -o array2 } ; if ($?) { .\array2 }
 array a:  51 65 84 96 
array b: 1 2 3 5 8 88 9
 array c: 89 37*/