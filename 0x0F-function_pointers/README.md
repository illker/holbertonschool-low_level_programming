# 0x0F. C - Function pointers

What are function pointers and how to use them
What does a function pointer exactly hold
Where does a function pointer point to in the virtual memory

## Task
- '0. What's my name
- '1. If you spend too much time thinking about a thing, you'll never get it done
- '2. To hell with circumstances; I create opportunities
- '3. A goal is not always meant to be reached, it often serves simply as something to aim at
- '4.
- '5.


```c
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
```


## David Alzate² [@illker](https://twitter.com/illker)
