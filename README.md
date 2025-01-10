# get_next_line

## Project Summary
The `get_next_line` project is designed to read a line from a file descriptor and return it. This function is useful for reading files line by line, which is a common requirement in many applications.

## Features
- Reads a line from a file descriptor.
- Handles multiple file descriptors simultaneously.
- Efficiently manages memory to handle large files.

## Testing
The `main.c` file contains a comprehensive test suite for the `get_next_line` function. Additionally, the test directory includes multiple text files to thoroughly test various scenarios and edge cases.

## Usage
To compile and run the tests, use the following commands:
```sh
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 main.c get_next_line.c get_next_line_utils.c -o get_next_line
./get_next_line
```

## Files
- `get_next_line.c`: Contains the implementation of the `get_next_line` function.
- `get_next_line_utils.c`: Contains utility functions used by `get_next_line`.
- `get_next_line.h`: Header file with function prototypes and necessary includes.
- `main.c`: Contains tests for the `get_next_line` function.
- `tests/`: Directory containing multiple text files for testing purposes.

## Bonus
- `get_next_line_bonus.c`: Contains the implementation of the `get_next_line` function with bonus features.
- `get_next_line_utils_bonus.c`: Contains utility functions used by `get_next_line_bonus`.
- `get_next_line_bonus.h`: Header file with function prototypes and necessary includes for the bonus implementation.