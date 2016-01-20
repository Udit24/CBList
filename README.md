# CBList
<img src="https://github.com/Udit24/CBList/blob/master/CB/codebook.jpg" alt="CODEBOOK" width="200" height="200"> 
> This is a C++ Header file, that aims to eliminate the disadvantages of an array by still maintaining its advantages; in other words it aspires to improve "Lists" in C++ 

##Including the Header file
	Download and extract the ZIP file from "https://github.com/Udit24/CBList"
	Paste the 'CB' folder to your working directory.
	In your source file just type 
```
	#include “CB/List.h”
```
> And we are done , you can get going with it right ways.

##Tutorial

 **Standard array declaration:**
```
int arr[10]={1,2,3,4,5,6,7,8,9,0};
```
**The CBList declaration:**
```
CBList arr;
arr+1+2+3+4+5+6+7+8+9+0;
```
**Adding a new element to the Array:**
```
//Not possible to add an extra element- beyond the array size, as the memory for array is statically assigned
```
**Adding a new element to the CBList:**
```
arr+10; // Yes as simple as that
```
**Adding heterogeneous elements:**

> Arrays do not permit storage of heterogeneous data type,
however doing so in CBList is as simple as adding any element:

```
arr+ ”String 1” + ’a’ + 100 + 37.5f + ”String 2”;
```

>This adds “String 1” a string , ‘a’ a character , 100 an integer , 37.5 a floating point number and another string “String 2” ; quite easily without any conflict.

**Removing an element from a particular index in an array:**
```
int Index_tobe_removed=3;
for(int i= Index_tobe_removed ; i<SIZE_OF_ARRAY-1 ; i++){
	arr[i]=arr[i+1];
}
```
> And as we are aware of : the deleting an element does not reduce the memory allocated for the array

**Removing an element from a particular index in CBList:**
```
arr.removeFromIndex(3);
```
> The element deleted is removed actually from the memory

**Getting an element from an index in an array (addressing through index) :**
```
int a_variable=arr[3];
```
**Getting an element from CBList :**
```
arr.activateIndex(3);
int a_variable = arr<<(CB_INT);
```
> activateIndex() activates a particular index for fetching of data from that index

> arr<<(CB_INT) returns the integer stored at that particular index, where CB_INT serves as an overload factor

> which requires the programmer to know in prior the data type stored at the particular index.

> The list of overload factors include:

**CB_INT** for integer type 

**CB_LONG_INT** for long integer type 

**CB_CHAR** for character type 

**CB_FLOAT** for floating type 

**CB_DOUBLE** for double type 

**CB_STRING** for string type 

> Hence to get the value at an Index which contains character type value, we activate an index and fetch the data from it with the  right overloading factor, i.e. 
```
arr.activateIndex(3);
char a_var=arr<<(CB_CHAR);
```
> OR , another alternative is to use the getAtIndex() function, using this requires no prior call to activateIndex()

```
int a_variable=arr.getAtIndex(3,CB_INT);
```
> The first parameter is the index from which retrieval of value takes place,

> whereas the second parameter of the function getAtIndex() serves as the overload factor ,

> which is same as the former.


> Hence to get the value at an Index which contains character type value, we simply call the getAtIndex() member function with the character overloading factor, i.e. 
```
char a_var=arr.getAtIndex(3,CB_CHAR);
```

**To assign an element to an Index in an array:**
```
arr[5]=11;
```
**To assign an element to an Index in CBList:**
```
arr.activateIndex(5);
arr>>(11);
```
> activateIndex() activates an index for assigning data to it

> arr>>(11) assigns the data value 11 at the activated index.

> OR,  another alternative is to use the putAtIndex() function, using this requires no prior call to activateIndex()  
```
arr.putAtIndex(5,11);
```
> The first parameter of the function putAtIndex() specifies the index at which the insertion takes place, and the second parameter is the value to be inserted at that index.

**To display the contents of an array**
```
for( int i=0 ; i<SIZE_OF_ARRAY ; i++){
	cout<<arr[i];
}
```

**To display the contents of CBList:**
```
arr.display();
```
**To get the size of an array:**
> C++ standard library <string.h> has a function strlen() that returns the size of the array, by checking for the ‘\0’ character; 

> However that’s not true for a vector (integer type array) or arrays of other type.

**To get the size of a CBList:**
```
arr.getCount();
```

**To clear the List :**
```
arr.clearList();
```


 




