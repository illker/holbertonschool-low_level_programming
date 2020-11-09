# File I/O

## This project is about

:arrow_forward: Look for the right source of information online

:arrow_forward: How to create, open, close, read and write files

:arrow_forward: What are file descriptors

:arrow_forward: What are the 3 standard file descriptors, what are their purpose and what are their POSIX names

:arrow_forward: How to use the I/O system calls open, close, read and write

:arrow_forward: What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR

:arrow_forward: What are file permissions, and how to set them when creating a file with the open system call

:arrow_forward: What is a system call

:arrow_forward: What is the difference between a function and a system call

# Useful Resources
[File descriptor](https://en.wikipedia.org/wiki/File_descriptor)

[POSIX](https://en.wikipedia.org/wiki/POSIX)

[Standard streams](https://en.wikipedia.org/wiki/Standard_streams#Standard_input_(stdin))

## Task
- '0. Tread lightly, she is near 
- '1. Under the snow 
- '2. Speak gently, she can hear 
- '3. cp
- '4. elf 

## Prototype functions
```c
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
```

## David Alzate² [@illker](https://twitter.com/illker)
