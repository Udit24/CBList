# CBList
This is a C++ Header file, that aims to eliminate the disadvantages of an array by still maintaining its advantages; in other words it aspires to improve "Lists" in C++
##Including the Header file
*Download and extract the ZIP file from [here](https://github.com/Udit24/CBList).
*Paste the 'CB' folder to your working directory.
*In your source file just type ``` #include “CB/List.h” ```
And we are done , you can get going with it right ways.
##Tutorial
**The declaration**
**Standard array declaration: **
```
int arr[10]={1,2,3,4,5,6,7,8,9,0};
```
**The CBList declaration:**
```
CBList arr;
arr+1+2+3+4+5+6+7+8+9+0;
```
**Adding a new element to the Array: **
```
//Not possible as the memory for array is statically assigned
```
**Adding a new element to the CBList: **
```
arr+10; // Yes as simple as that
```
**Adding heterogeneous elements:**
Arrays do not permit storage of heterogeneous data type,
however doing so in CBList is simple as adding any element:
```
arr+”String 1”+’a’+100+37.5f+”String 2”;
```
This adds “String 1” a string , ‘a’ a character , 100 an integer , 37.5 a floating point number and another string “String 2” ; quite easily without any conflict.

**Removing an element from a particular index in an array: **
```
int Index_tobe_removed=3;
for(int i= Index_tobe_removed ; i<SIZE_OF_ARRAY-1 ; i++){
	arr[i]=arr[i+1];
}
```
**Removing an element from a particular index in CBList: **
```
arr.removeFromIndex(3);
```
**Getting an element from an index in an array (addressing through index) : **
```
int a_variable=arr[3];
```
**Getting an element from CBList : **
```
int a_variable=arr.getAtIndex(3,CB_INT);
```
The first parameter is the index from which retrieval of value takes place, whereas the second parameter of the function getAtIndex() serves as an overload factor , which requires the programmer to know in prior the data type stored at a particular index.
The list of overload factors include:
**CB_INT** *for integer type *
**CB_LONG_INT** *for long integer type *
**CB_CHAR** *for character type * 
**CB_FLOAT** *for floating type *
**CB_DOUBLE** *for double type *
**CB_STRING** *for string type *
Hence to get the value at an Index which contains character type value, we simply call the getAtIndex() member function with the character overloading factor, i.e. 
```
char a_var=arr.getAtIndex(3,CB_CHAR);
```
**To assign an element to an Index in an array: **
```
arr[5]=11;
```
**To assign an element to an Index in CBList: **
```
arr.putAtIndex(5,11);
```
The first parameter of the function putAtIndex() specifies the index at which the insertion takes place, and the second parameter is the value to be inserted at that index.

**To display the contents of an array: **
```
for( int i=0 ; i<SIZE_OF_ARRAY ; i++){
	cout<<arr[i];
}
```
**To display the contents of CBList: **
```
arr.display();
```
**To get the size of an array: **
C++ standard library <string.h> has a function strlen() that returns the size of the array, by checking for the end of line ‘\0’ character; However that’s not true for a vector (integer type array) or arrays of other types.
**To get the size of a CBList: **
```
arr.getCount();
```
**To clear the List : **
```
arr.clearList();
```


 




