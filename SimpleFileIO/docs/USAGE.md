# Usage

```Cpp
#include "SimpleFileIO.h"

#include <string> //if necessary for std::string

//writing to a file:
writeToFile("example.txt", "Hello, World!")

//reading from a file:
std::string content = readFromFile("example.txt")
```

# Error handling
SimpleFileIO ensures reliable file operations by:
- Checking file existence before reading
- Returning meaningful error codes/messages
