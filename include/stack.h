/**
 * Copyright © 2024 Austin Berrio
 *
 * @file include/stack.h
 */

#include "linked_list.h"

typedef struct Stack {
    LinkedList* list; // Stack implemented as a linked list
} Stack;

Stack* stack_create();
void   stack_free(Stack* stack);

void  stack_push(Stack* stack, void* data);
void* stack_pop(Stack* stack);
void* stack_peek(const Stack* stack);
