#include <stdio.h>

// some notes:
// *pointerVar = value stored at the address the pointer points to
// pointerVar  = address stored inside the pointer
// &pointerVar = address of the pointer itself

/*Write a C program that:
Stores n in a variable.
Declares a pointer to that variable
Prints the following info on each line
- the value of n 
- the address of n (via the pointer)
- the value of n via the pointer (dereference)
- the address of the pointer itself
- the size of the pointer (in bytes)
*/

int main()
{

    int n = 42; //storing n as a variable

    int *nP = &n;  //declaring pointer to n

    printf("n's address = %p\n", &n);
    printf("n's value = %d\n" , n);
    printf("The address of n (via the pointer) = %p\n", nP);
    printf("The value of n (via the pointer) =  %d\n" , *nP);
    printf("The address of the pointer itself = %p\n" , &nP);

    //finding the size of our pointer
    printf("Size of pointer = %lu (bytes)\n" , sizeof(nP));
    return 0;

}