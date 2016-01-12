#ifndef MIXEDLIST_H_INCLUDED
#define MIXEDLIST_H_INCLUDED
#endif // LIST_H_INCLUDED

class mixedList{
protected:
    int counter; //Keeps a count of the number of Nodes in the List, it is only updated inside the add(Node *) function and removeFromIndex() function
    //Creating node for all data types
        /*Namely:
            int
            short
            long
            float
            double
            char
            char* */
    Node *create_new_node(int );
    Node *create_new_node(short int );
    Node *create_new_node(long int );
    Node *create_new_node(float );
    Node *create_new_node(double );
    Node *create_new_node(const char *);
    Node *create_new_node(char );
    //To add a Node to the list
    void add(Node *);
    //Traversal till the index i
    Node *traverse_till(int );
public:
         //To add various data types to the list
         void addToList(int );
         void addToList(long int );
         void addToList(short int );
         void addToList(float );
         void addToList(double );
         void addToList(const char *);
         void addToList(char );
         //To remove a Node at index i
         void removeFromIndex(int );
         //To clear the entire List
         void clearList();


     //The constructor
         mixedList(const char *,...);
    //The default constructor
         mixedList();
    //To display the contents of the List with a space in between
         void display();

   //The getAtIndex() overloads...
         int getAtIndex(int ,int );
         long int getAtIndex(int,long int );
         char getAtIndex(int ,char );
         float getAtIndex(int ,float );
         double getAtIndex(int,double );
         const char* getAtIndex(int ,const char* );



  //putAtIndex() overloads...
         void putAtIndex(int ,int );
         void putAtIndex(int ,long int );
         void putAtIndex(int ,short int );
         void putAtIndex(int ,char );
         void putAtIndex(int ,float );
         void putAtIndex(int ,double );
         void putAtIndex(int ,char* );
    //To return the no of Nodes in the List
         int getCount();
};

