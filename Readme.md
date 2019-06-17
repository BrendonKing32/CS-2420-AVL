You will be given a file of integers (a text file with one integer per line).  
Create a Hash Class that contains: 

Hash Table
:  an integer array of 20 elements. 
Example
:
int HashTable[MAX]; // where MAX is a defined constant of 20

No-argument constructor
 - initializes the contents of each element in the array to -999 (you will not get negative numbers 
in the data file).  
Example function signature
:  
hash();

Hash Function
 – returns the location in the array in which the passed integer value should be placed (the hash value).  Pass 
the function the value from the file to be inserted.  Remember the hash function is dependent upon the value to be stored in 
the hash table.   Implement your hash function using the mod (%) operator.  
Example function signature
: 
int getHashValue(value);

Insert Function
 – attempts to insert the passed integer value into the array unless there is a key value already in the array ( 
the value in the array is not -999).  If a key already exists then it detects a collision, prints the message “Collision detected at 
location %d, for value %d” on the screen.  Replace the first %d with the location in the array in which the insert function is 
attempting to put the value in the array (obtained from the call to getHashValue function).  Replace the second %d with the 
value attempting to be put into the array (the value read from the file). 
Example collision error message
: 
Collision detected at location 5, for value 255
This function returns that a collision was detected and the insert failed.  
Example function signature: 
bool insert(value, location)
;

Resolve Collision Function
 – this function implements some collision resolution method of your choosing to attempt to 
locate a new location in the array for an integer value, this function should always insert the value in the array unless the 
array is completely full.  
Example function signature
:
bool resolveCollision(value, originalLoc);

Show Function
 – shows the array element and the contents (value in each array element) for each element in the array with 
the following format on the screen.  Please note the Values in the following output are not the values you will have and they 
do not reflect any particular hash function or collision resolution function.  Allow the user to press enter when they are done 
viewing the data.  
Example function signature:
void show();
Example printout from the show function