# 0x0E. C - Structures, typedef

What are structures, when, why and how to use them
How to use typedef

## Task
- '0. Django
- '1. A dog is the only thing on earth that loves you more than you love yourself
- '2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
- '3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
- '4. A door is what a dog is perpetually on the wrong side of
- '5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

```c
dog.h
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
```


## David Alzate² [@illker](https://twitter.com/illker)
