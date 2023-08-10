//2.  int *p, q; What does both of these terms signify?
/*
      *p signifies that variable p is declared as a pointer which is used to store addresses.
      q is an integer not a pointer variable as discussed in class lecture of pointers.
*/
//3.  Predict the output of the following code snippet.
//int a = 10, b = 20;
//int *ptr = &a;
//b = *ptr + 1;
//ptr = &b;
//cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;

/*
11 10 11

*/

//4. Predict the output of the following code snippet.
//int a = 15, b = 20;
//int *ptr = &a;
//int *ptr2 = &b;
//*ptr = *ptr2;

/*
a gets the value of b
*/


//5. int a = 10, b = 20;
//int *ptr;
//*ptr = 5;

/*
The program is correct and will compile but might result in runtime error.This is
because ptr will have a garbage address which might even point to a location which
does not belong to our program.
*/