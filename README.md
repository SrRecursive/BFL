# BFL

## Description

Big Function Library is a UNIX collection of functions made from scratch.

## Requirements

- Make
- GCC

**NOTE**: If you don't have any of these run these commands
```Shell
sudo apt update
sudo apt install make build-essential
```

## Usage

Clone the repository

```Shell
git clone https://github.com/SrRecursive/BFL.git
```

Go inside the directory

```Shell
cd BFL
```

Use make

```Shell
make
```

Copy the header and the library in your program path

```Shell
cp include/bfl.h bfl.a ../project
```
Compile your program adding the library bfl.a

```Shell
cd ../project
gcc main.c bfl.a
```

**NOTE**: Remember to include the header in your code 

```C
#include "bfl.h"
/* Your code */
```


