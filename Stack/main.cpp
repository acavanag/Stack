//
//  main.cpp
//  Stack
//
//  Created by Andrew Cavanagh on 7/20/15.
//  Copyright (c) 2015 andrewjmc. All rights reserved.
//

#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, const char * argv[]) {

    Stack stack = Stack(10);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);
    stack.push(11);
    
    for (int i = 0; i < 11; i++) {
        cout << stack.top() << endl;
        stack.pop();
    }
    
    stack.freeStack();
    
    return 0;
}
