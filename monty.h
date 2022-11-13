#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include <ctype.h>

/* structs */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer data
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct inventory_s - inventory structure
 * @code: code from parseln function
 * @input: int data
 */
typedef struct inventory_s
{
	char *code;
	char *n;
	stack_t *stack;
	char *line;
} inventory_t;

/* global data */
extern inventory_t *inventory;
inventory_t *inventory;

/* op functions */
void push(stack_t **, unsigned int);
void pall(stack_t **, unsigned int);
void pint(stack_t **, unsigned int);

/* Utility functions */
char *readln(int);
void (*get_op_func(char *))(stack_t **, unsigned int);
int build_inventory(void);
int parseln(char *);
int execute(int, unsigned int);
int to_int(char *);
void free_all();
void free_stack(void);
void free_inventory();

#endif /* MAIN_H */
