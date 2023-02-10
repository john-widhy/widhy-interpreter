#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    while (1) {
    	printf(">>");
        scanf("%s", input);
        if (strcmp(input, "exit") == 0) {
            break;
        }
        if (strncmp(input, "print", 5) == 0) {
         char *output = strtok(input + 6, "\n");
         printf("%s\n", output);
    }
       
    }
    return 0;
}

