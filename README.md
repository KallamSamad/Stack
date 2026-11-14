# Stack

## Overview

- This is is a program that simulates the stack data structure. A stack is like a list which follows the Last In, First Out principle when it either Pushes or Pops data members inside the list.

## Features

- I initially created an pointer of pointers called items and set it to a nullptr because I wanted to intialise items to show to a default value. I used a pointer of pointers to store multiple memory addresses in the items array in Stack.cpp.
- I then initialised the capacity and count private variables to zero and made function prototypes for pop(), push() and display() in the Stack.h file. I also created the stack constructor using a default value of 2. This is optional, I am aware that if I create a stack without declaring the paramter it will use 2, otherwise will overwrite the value to the one specified.
- In the StackItem header file I gave the parameterised constructor called StackItem and then used a inline function, get item implementing the code for this function in the header file. Because it was inside the StackItem braces, I didn't need to declare it with the inline keyword.
- In the StackItem header file I used a constructor initialisation list to initialise the number variable instead of making a copy of the variable which is more efficient since it avoids separate assignment.
- In Stack.cpp I also used a constructor initialisation list to initailise values the constructor. Inside the constructor I created an array called items that is created in the heap. It stored a list of pointers to StackItem objects, with a length of capacity. I did this because I can create an array of dynamic length on the heap.
- I also defined the destructor by deleting each pointer inside items and then equating it to a nullptr to reduce risk of dangling pointers. I did the same thing for the items array itself after the loop.
- In the push function I checked if the stack is full, if it isn't I created a newItem which is a pointer to a stackItem object and then I gave it a value which was parameterised in the push function. I didn't use a pointer to a pointer (double *) because I'm interested in putting a single newItem address not multiple stackItem addresses. I added it to the list by using items[count] to store it on the top of the stack.
- In the resize function I doubled the capacity of the stack by 2. I then created a newer array with this new capacity so I used a pointer to a pointer of a StackItem address because I want to redefine the StackItem capacity. I then used a loop to add all the addresses into the new bigger list. I then deleted the items list to avoid memory leaks and then made the items list equal to the newArray.
- Conversely I did the pop function which has no parameters. It checks if the stack is empty and when it is it lets the user know.Or else, I used a temporary integer variable to 
- I then created a display function so when I stored items[count-1] because I wanted to access the last item's index. I then used an arrow function to access the dereference the pointer so I store this value in a temporary value.
- Immediately after I delete items[count-1] and set it to nullptr to avoid dangling pointers. I deleted to avoid memory leaks. I then decremented count. I then let the user know the item is popped.
- I also created a function called display so items[i] is dereferenced to display the value of the array of pointers

## Screenshot

<img width="600" height="277" alt="image" src="https://github.com/user-attachments/assets/3e236fb5-b044-4ad9-b7ad-1650a2e28611" />
