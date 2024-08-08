//SAI SANKAR
//entc B2
//23070123112
//experiment 7
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"enter a string: ";
    cin>>a;
    int n=a.length(),i,flag=0;
    for(i=0;i<a.length();i++)
    {
        if(a[i]==a[n-1])
        {
            flag=1;
        }
        n--;
    }
    if(flag==1)
    {
        cout<<a<<" is palindrome";
    }
    else
    {
        cout<<a<<" is not palindrome";
    }
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ PALINDROME.cpp -o PALINDROME } ; if ($?) { .\PALINDROME }
enter a string: MALAYALAM
MALAYALAM is palindrome
PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ PALINDROME.cpp -o PALINDROME } ; if ($?) { .\PALINDROME }
enter a string: SEMICINDUCTOR
SEMICINDUCTOR is palindrome*/