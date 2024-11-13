//using memcpy:
#include <stdio.h>

#include <string.h>

int main() {
    char greetings[] = "Hello        World!";

    // Changing a block of characters using memcpy
    memcpy(&greetings[6], "Coder", 4); // Replace "World" with "Code"

    printf("%s", greetings);

    return 0;
}
// #using strncpy.

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char greetings[] = "Hello World!";

//     // Changing a block of characters using strncpy
//     strncpy(&greetings[6], "Coders", 6); // Replace "World" with "Coders"

//     printf("%s", greetings);

//     return 0;
// }
