#include "Header.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rafael Alvarez-Romero
 */

int add(const int a, const int b)
{
    return a + b;
}

/*
Can we declare a non-reference function argument const (e.g., void f(const int);)? 
What might that mean? 
Why might we want to do that? Why don’t people do that often? 

We can definitiy add in a non-reference function as my int add function above shows. 
All this means is that the int values of A and B are constant numbers and can not be change or modified to fit in the need of the user.
If you were to change the values, you would get a complier issue due to it being set to that specific number.
We might want to do that const when we know those values are not going to change and that we might need to use it alot in the rest of the code. 
We usually dont use const since it depends on the code at hand and we usually are working with changing numbers to fit best our needs and the needs of the user using the program.
Since it gives out that complier issue just because of change in values, we do not recommend using it unless it is needed for calcutions that we know the values at hand. 

*/

int main() {
	int a, b, result; 
	int c, d;

    int number = 0;

    cout << "Please enter 2 values: ";
    cin >> a;
    cin >> b;
    
    result = a + b;

    cout << "The value is: " << result;

    return 0;
}