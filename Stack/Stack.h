//
//  Stack.h
//  
//
//  Created by Andrew Cavanagh on 7/20/15.
//
//

#ifndef ____Stack__
#define ____Stack__

#include <stdio.h>

class Stack {
public:
    Stack(int size);
    void push(int x);
    void pop();
    int top();
    bool isEmpty();
    bool isFull();
    void freeStack();
    
private:
    int stackTop = -1;
    int *array;
    int arraySize;
};

#endif /* defined(____Stack__) */
