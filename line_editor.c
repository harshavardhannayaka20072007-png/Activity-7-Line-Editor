#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LEN 256

char buffer[MAX_LINES][MAX_LEN];
int line_count = 0;

void print_buffer() {
    if (line_count == 0) {
        printf("[Buffer is empty]\n");
        return;
    }
    for (int i = 0; i < line_count; i++) {
        printf("%d: %s\n", i + 1, buffer[i]);
    }
}

void append_line() {
    if (line_count >= MAX_LINES) {
        printf("Error: Buffer full.\n");
        return;
    }
    printf("Enter text: ");
    getchar(); // Clear newline from input stream
    fgets(buffer[line_count], MAX_LEN, stdin);
    // Remove trailing newline character
    buffer[line_count][strcspn(buffer[line_count], "\n")] = 0;
    line_count++;
    printf("Line added.\n");
}

void edit_line() {
    int num;
    printf("Enter line number to edit (1-%d): ", line_count);
    if (scanf("%d", &num) != 1 || num < 1 || num > line_count) {
        printf("Invalid line number.\n");
        return;
    }
    printf("Current content: %s\n", buffer[num - 1]);
    printf("Enter new text: ");
    getchar(); // Clear newline
    fgets(buffer[num - 1], MAX_LEN, stdin);
    buffer[num - 1][strcspn(buffer[num - 1], "\n")] = 0;
    printf("Line updated.\n");
}

void delete_line() {
    int num;
    printf("Enter line number to delete (1-%d): ", line_count);
    if (scanf("%d", &num) != 1 || num < 1 || num > line_count) {
        printf("Invalid line number.\n");
        return;
    }
    for (int i = num - 1; i < line_count - 1; i++) {
        strcpy(buffer[i], buffer[i + 1]);
    }
    line_count--;
    printf("Line %d deleted.\n", num);
}

int main() {
    char command;
    while (1) {
        printf("\n--- LINE EDITOR --- [p]rint | [a]ppend | [e]dit | [d]elete | [q]uit\nCommand: ");
        scanf(" %c", &command);

        switch (command) {
            case 'p': print_buffer(); break;
            case 'a': append_line(); break;
            case 'e': edit_line(); break;
            case 'd': delete_line(); break;
            case 'q': printf("Exiting editor.\n"); exit(0);
            default:  printf("Unknown command.\n");
        }
    }
    return 0;
}
