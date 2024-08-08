# Experiment 7
# AIM:
Array and String Operations in C++
## Array vs String

This section provides a theoretical comparison between arrays and strings. 

## Comparison Table

| Feature           | Array                                           | String                                       |
|-------------------|-------------------------------------------------|----------------------------------------------|
| **Definition**    | A collection of elements of the same type stored in contiguous memory locations. | A sequence of characters, often implemented as an array of characters with additional functionalities. |
| **Size**          | Fixed size, determined at creation.            | Dynamic size, can change in many languages. |
| **Mutability**    | Elements can be modified.                      | Mutable or immutable depending on the language. |
| **Access**        | Accessed via indices.                          | Characters accessed via indices; includes built-in methods for manipulation. |
| **Operations**    | Manual operations for sorting, searching, etc.  | Built-in methods for concatenation, substring extraction, searching, etc. |
| **Memory Management** | Manual memory management in languages like C/C++. | Automatic memory management in higher-level languages. |

## ARRAY
An array is a collection of elements, all of the same type, stored in contiguous memory locations. Arrays provide a way to efficiently store and access multiple values using a single variable name, with each value accessible via an index.
Sure! Below is a detailed explanation of array declaration, initialization, and accessing in C++.

---

## Array Declaration in C++

### What is Array Declaration?
Array declaration is the process of specifying the type and size of an array in C++. When you declare an array, you allocate memory to store a fixed number of elements of the same type.

### Syntax
The syntax for declaring an array is as follows:

```cpp
type arrayName[array_size];
```

- **type**: Specifies the data type of the elements in the array (e.g., `int`, `float`, `char`).
- **arrayName**: The name you assign to the array, which will be used to reference it in your code.
- **array_size**: A positive integer that defines the number of elements the array can hold.

### Example
```cpp
int numbers[10];
```
In this example, an array named `numbers` is declared to hold 10 integer values. The array `numbers` can store elements of type `int`.

### Important Points:
- The size of the array (`array_size`) must be an integer constant greater than zero.
- Once the size of the array is defined, it cannot be changed.

---

## Array Initialization in C++

### What is Array Initialization?
Array initialization is the process of assigning initial values to the elements of an array at the time of declaration or after it. C++ provides multiple ways to initialize arrays.

### Initialization at Declaration
You can initialize an array when you declare it, using an initializer list:

```cpp
int arr[5] = {1000, 2, 3, 17, 50};
```

In this example, the array `arr` is initialized with 5 integer values. Each value in the initializer list corresponds to an element in the array.

### Default Initialization
If an array is partially initialized, the remaining elements are automatically initialized to zero (for numeric types) or `'\0'` (for characters):

```cpp
int arr[5] = {1, 2}; // arr = {1, 2, 0, 0, 0}
```

### Initialization After Declaration
You can also initialize array elements one by one after the array is declared:

```cpp
int arr[5];
arr[0] = 1000;
arr[1] = 2;
arr[2] = 3;
arr[3] = 17;
arr[4] = 50;
```

### Important Points:
- The number of elements in the initializer list cannot exceed the size of the array.
- If you initialize an array without specifying the size, C++ will automatically determine the size based on the number of elements in the initializer list.

---

## Accessing Array Elements in C++

### What is Accessing Array Elements?
Accessing array elements involves retrieving or modifying the value of an element at a specific index in the array. This is done using the array name followed by the index of the element within square brackets.

### Syntax
```cpp
arrayName[index];
```

- **arrayName**: The name of the array.
- **index**: The position of the element in the array, starting from 0.



### Important Points:
- Array indices start from 0. Therefore, the first element of the array has an index of 0, the second element has an index of 1, and so on.
- Accessing an index outside the array's bounds (e.g., using an index greater than or equal to the array's size) results in undefined behavior.

---



Understanding these concepts is essential for effectively using arrays in C++ programs.
## Key Characteristics of Arrays
Fixed Size: The size of an array
is determined when it is declared and cannot be changed during runtime. If you need a dynamic size, consider using other data structures like lists or vectors.

Homogeneous Elements: All elements in an array must be of the same type, such as integers, characters, or floating-point numbers.

Indexed Access: Each element in an array can be accessed directly using an index. In most programming languages, indexing starts from 0. For example, in an array a with 5 elements, a[0] refers to the first element and a[4] refers to the last element.

Contiguous Memory Allocation: Arrays are stored in contiguous memory locations, which means that the elements are stored next to each other. This allows for efficient access and iteration through the array.
## Strings:
#### Showing Strings
**Theory:**

Displaying a string involves simply presenting its content to the user. This operation is fundamental in programming and serves various purposes such as debugging, user feedback, and output generation. When you show a string, you typically output its content to the console or a user interface.

Key Points:

**Purpose**: To display or output the contents of a string to the user.
**Use Case** Debugging, logging, or displaying messages in a program.
**Implementation:** Generally involves calling a function or method that outputs the string to a screen or log file.
#### Reversing Strings
Theory:

Reversing a string involves creating a new string where the characters are in the opposite order compared to the original string. This operation is often used in algorithms, data processing, and sometimes in solving specific problems where the order of characters is significant.

Key Points:

Purpose: To reverse the sequence of characters in a string.
Use Case: Useful in algorithms, data manipulation, or when solving problems that require reversed data.
Implementation: Typically involves iterating over the string from the end to the beginning, or using built-in functions that reverse the order of characters.
#### Concatenating Strings
Theory:

Concatenating strings means joining two or more strings end-to-end to form a single, longer string. This operation is essential for constructing messages, generating dynamic content, or combining data from different sources.

Key Points:

Purpose: To combine multiple strings into one continuous string.
Use Case: Building messages, generating dynamic text, or merging data from different sources.
Implementation: Usually involves appending the characters of one string to another or using functions that handle string concatenation.
#### Checking Palindrome
Theory:

A palindrome is a string that reads the same forward and backward, such as "radar" or "level". Checking if a string is a palindrome involves comparing the string to its reverse. This operation is useful in various applications, including text processing and pattern recognition.

Key Points:

Purpose: To determine if a string is a palindrome.
Use Case: Used in text analysis, pattern matching, and certain algorithms where symmetry is a factor.
Implementation: Typically involves reversing the string and comparing it to the original. If both are identical, the string is a palindrome.
### Code 1:CALLING ARRAY
```
//Sai Sankar Jena
//23070123112
//Entc b2
#include<iostream>
using namespace std;
int main()
{
 int a[4]={51,65,84,96};
cout<< "array is "<< a[1];
return 0;
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ array.cpp -o array } ; if ($?) {
 .\array }
array is 65*/
```
### Code 2:INITIALISING ARRAY
```
//Sai Sankar Jena
//23070123112
//Entc b2
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
```

### Code 3:ELEMENTS IN ARRAY USING DEFINE
```
//Sai Sankar Jena
//23070123112
//Entc b2
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
```


### Code 4:REVERSED
```
//Sai Sankar Jena
//23070123112
//Entc b2
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
```
### Code 5:POSITION
```
//Sai Sankar Jena
//23070123112
//Entc b2
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
```

### Code 6: SUM/AVG
```
//Sai Sankar Jena
//23070123112
//Entc b2
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
    

   
    avg = sum / n;

    
    cout << "Sum of elements = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
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
```
### Code 7: MAX MIN
```
//Sai Sankar Jena
//23070123112
//Entc b2
#include<iostream>
using namespace std;
int main() {
    int n, i, max=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"Enter element-"<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ array7.cpp -o array7 } ; if ($?) { .\array7 }
Enter number of elements: 2
Enter element-0: 6
Enter element-1: 5
Maximum: 6
Minimum: 5*/
```
### Strings code 1:
```cpp
//Sai Sankar Jena
//entc B2
//23070123112
//experiment 7 strings1
#include <iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cout<<"enter any word: ";
    cin>>a;
    cout<<" entered string is "<<a<<endl;
    return 0;
}
/*PS C:\Users\asus\Desktop\cds> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ strings1.cpp -o strings1 } ; if ($?) { .\strings1 }
enter any word: saii
 entered string is saii*/
```
### Strings code 2:
```cpp
//Sai 
//entc B2
//23070123112
//experiment 7
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cout<<"enter string1: ";
    cin>>a;
cout<<"enter string 2:";
    cin>>b;
    cout<<"CONCATENATION: "<<a+b;
    return 0;
}
/*PS C:\Users\asus\Desktop\cds\arrayandstrings> cd "c:\Users\asus\Desktop\cds\arrayandstrings\" ; if ($?) { g++ concatenatestr.cpp -o concatenatestr } ; if ($?) { .\concatenatestr }
enter string1: sai
enter string 2:sankar
CONCATENATION: saisankar*/
```
### Strings code 3:
```cpp
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
```
### String Code 4:
```cpp
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
```


## Conclusion:Array
Arrays are a fundamental data structure in C++ that allow you to store a fixed-size sequence of elements of the same type. Below is a brief explanation of key concepts related to arrays.

- **Declaration**: Specifies the type and size of an array.
  - Example: `int numbers[10];`

- **Initialization**: Assigns initial values to array elements, either during declaration or afterward.
  - Example: `int arr[5] = {1000, 2, 3, 17, 50};`

- **Accessing Elements**: Retrieves or modifies elements using an index.
  - Example: `int num = arr[3];`
## Conclusion Strings


- **Arrays** are fixed-size collections of elements of the same type stored in contiguous memory locations, allowing for direct access via indices and requiring manual management for resizing and operations.

- **Strings** are sequences of characters with dynamic sizing capabilities in many languages, often featuring built-in methods for common operations like concatenation and substring extraction.

- **Mutability** of arrays and strings depends on the language: arrays are generally mutable, while strings may be mutable or immutable.

- **Memory Management** varies: arrays often require manual management in lower-level languages, while strings typically benefit from automatic memory management in higher-level languages.



