/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mayank Goyal
 */

#include <iostream>

using namespace std;

// function definition to add the values.
int add(int x, int y) {

   x = 400;

   return x + y;

}

// function declaration
int add(int x, int y);

int main () 
{

   // local variable declaration:

   int a = 100;

   int b = 200;

 

   int result = add(a, b);

    

   cout << a << " + " << b << " = " << result <<"\n";

   return 0;

}