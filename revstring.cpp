//Sai Sankar
//entc B2
//23070123112
//experiment 7
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"enter string you want to reverse: ";
    cin>>a;
    int i;
    cout<<"Here is your reversed string:"<<endl;
    for(i=a.length()-1;i>=0;i--)
    
    {
        cout<<a[i];
    }
    return 0;
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ revstring.cpp -o revstring } ; if ($?) { .\revstring }
enter string you want to reverse: sai
Here is your reversed string:
ias*/