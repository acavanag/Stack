//
//  Stack.cpp
//  
//
//  Created by Andrew Cavanagh on 7/20/15.
//
//

#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(int size) {
    array = new int[size];
    arraySize = size;
}

void Stack::push(int x) {
    if (!isFull()) {
        stackTop = stackTop + 1;
        array[stackTop] = x;
    }
}

void Stack::pop() {
    if (!isEmpty()) {
        stackTop = stackTop - 1;
    }
}

int Stack::top() {
    return array[stackTop];
}

void Stack::freeStack() {
    delete [] array;
}

bool Stack::isEmpty() {
    if (stackTop == -1) {
        cout << "Empty Stack" << endl;
        return true;
    }
    return false;
}

bool Stack::isFull() {
    if (stackTop == arraySize - 1) {
        cout << "Stack Overflow" << endl;
        return true;
    }
    return false;
}