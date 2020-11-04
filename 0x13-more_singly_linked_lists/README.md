# More singly linked lists

How to use linked lists
Start to look for the right source of information without too much help

# Useful Resources
[Estructuras de datos](https://www.youtube.com/playlist?list=PLTd5ehIj0goMTSK7RRAPBF4wP-Nj5DRvT)
[Linked Lists - Richard Buckland UNSW](https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s&ab_channel=UNSWeLearning)

## Task
- '0. Print list
- '1. List length 
- '2. Add node
- '3. Add node at the end
- '4. Free list
- '5. Free
- '6. Pop
- '7. Get node at index 
- '8. Sum list 
- '9. Insert
- '10. Delete at index

## Prototype functions
```c
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```

## David Alzate² [@illker](https://twitter.com/illker)
