#include <stdio.h>

int main(void) {
 
/*
Create an int variable and name it age.
Set its value to 28.
*/
int age = 28;

//Print age variable to the console
printf("Age: %d\n", age);




/*
Create a pointer named pointer_to_age and set it 
equal to the address of the age variable

The "*" signifies that we are creating a pointer
The "&" in front of age gives us address of the
age variable NOT its value
*/
int * pointer_to_age = &age;

//Print the address to the console
printf("Memory Address of age: %p\n", pointer_to_age);

/*
Create a variable called years and set it equal to
the value found at pointer_to_age.

The "*" in front of pointer_to_age says that you want
the value pointed to by pointer_to_age and not the address
itself. 
*/
int years = *pointer_to_age;

printf("Years: %d\n", years);

/*
Store the value of 29 at the memory location pointed to by
pointer_to_age. Again the "*" means that we want the value 
at the memory address NOT the address. Since pointer_to_age
is pointing to our age variable, age will now = 29; 
*/

*pointer_to_age = 29;

printf("Age has been updated to: %d\n", age);

  return 0;
}