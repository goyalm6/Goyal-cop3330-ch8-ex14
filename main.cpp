/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mayank Goyal
 */

/* Answer to initial questions:
  
  Q: Can we declare a non-reference function argument const (e.g., void((const int);)? 
  A: Yes

  Q: What might that mean? 
  A: You will get a compiler error if you try to modify the values of a and b inside the function's body, as they are marked as const.
     Instead, you can change those values if you omit the const.
     Again, those modifications will not be visible to the caller.
  
  Q: Why might we want to do that? 
  A: In functions where objects, arrays or such data types are passed its a good approach to use const to avoid mutation of original data structure.
     The only possible advantage is where your function is long and more complex and you want to avoid possible programming errors where the original values of a or b are changed during the function.
  
  Q: Why don't people do that often? 
  A: If we use const with variable then its value cannot be change and when it is used with const reference then its reference cannot be changed if we used it with object then whole data is used in object it can not be changed. 
*/

//Example #1 in separate file.


