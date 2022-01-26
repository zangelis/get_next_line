# get_next_line

In this project I learned about file systems and wrote a function that returns a line read from a file descriptor.

## Installation & Usage
To test my library, just clone the repository like this:
```
git clone https://github.com/zangelis/get_next_line.git
cd get_next_line
```
You will compile your code as follows (a buffer size of 42 is used as an example):
```
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
```
In case you would like to manage multiple file descriptors at the same time, use the file with the _bonus.[c\h] suffix. 