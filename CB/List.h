#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#endif // LIST_H_INCLUDED

#include<stdio.h>
#include<stdarg.h>

#define CBList mixedList
#define CB_RANDOM_INT 2147483647
#define CB_RANDOM_LONG_INT 2147483647
#define CB_RANDOM_CHAR 255
#define CB_RANDOM_FLOAT 765.836
#define CB_RANDOM_DOUBLE 1.04E001
#define CB_RANDOM_STRING "A Garbage String"
#define CB_INT 1
#define CB_LONG_INT 1L
#define CB_CHAR 'a'
#define CB_FLOAT 36.02f
#define CB_DOUBLE 36.02
#define CB_STRING "STRING"

struct Node{
        int i_val; short int h_val; long int l_val; float f_val; double e_val; char ch;const char *str; char typeInfo; /*A list of all the data types permitted by mixedList,
                                                                                                                    any possible extension to the list of data types permitted should begin from here*/
        Node *next;
    }*start,*rear,*newptr,*ptr;
     /* *start- points to the beginning of the Node
       *rear - points to the end of the list, it is necessary as insertion takes place at the end of the list
       *newptr,*ptr - are pointers used for temporary pointing towards a Node*/


#include "mixedList.source"
/*
#include "intList.source"
#include "shortIntList.source"
#include "longIntList.source"
#include "charList.source"
#include "stringList.source"
#include "floatList.source"
#include "doubleList.source"
*/


