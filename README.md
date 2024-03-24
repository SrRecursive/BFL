# BFL

## Description

Big Function Library is a UNIX collection of functions made from scratch.
It uses the libraries _stdarg.h_, _stddef.h_, _stdlib.h_ and _unistd.h_.

## Requirements

- make
- gcc

> [!NOTE]
>
> Run this command to install the requirements
>
> ```Shell
> sudo apt update
> sudo apt install make \
>                 build-essential
> ```

## Usage

Go to you project directory

```Shell
cd /path/to/your/project
```

Clone the repository

```Shell
git clone https://github.com/SrVariable/BFL.git
```

Compile the library and link it to your project

```Shell
make -C BFL
gcc main.c -L./BFL -lBFL -I BFL/include
```

> [!NOTE]
>
> Remember to include the header file in your project
>
> ```C
> #include "BFL.h"
>
> int main(int argc, char **argv)
> {
>     ft_printf("Hello World\n");
>     return (OK);
> }
> ```

## Contributing

If you find any bug or have any suggestion, please open an issue
[here](https://github.com/SrVariable/BFL/issues/new).
