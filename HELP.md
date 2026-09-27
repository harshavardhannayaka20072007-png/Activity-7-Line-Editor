# Line Editor — User Help Guide

## Introduction

The Line Editor is a command-line application written in C. It allows users to store and manage lines of text in a temporary in-memory buffer.

## Available Commands

| Command | Name | Description |
|---|---|---|
| `p` | Print | Displays all lines currently stored in the buffer. |
| `a` | Append | Adds a new line of text at the end of the document. |
| `e` | Edit | Replaces the content of an existing line. |
| `d` | Delete | Removes a selected line from the document. |
| `q` | Quit | Exits the program. |

## How to Use

### 1. Start the Program

Compile and run the C program.

```bash
gcc line_editor.c -o line_editor
```

On Windows:

```bash
line_editor.exe
```

### 2. Add Text

Enter `a` at the command prompt. When prompted, type the text you want to add.

Example:

```text
Command: a
Enter text: Hello World
Line added.
```

### 3. Display Text

Enter `p` to display all stored lines with their line numbers.

Example:

```text
Command: p
1: Hello World
2: This is my second line.
```

### 4. Edit a Line

Enter `e`, provide the line number, and enter the replacement text.

Example:

```text
Command: e
Enter line number to edit: 1
Current content: Hello World
Enter new text: Hello C Programming
Line updated.
```

### 5. Delete a Line

Enter `d`, then provide the line number you want to remove.

Example:

```text
Command: d
Enter line number to delete: 2
Line 2 deleted.
```

After deletion, the following lines are shifted upward.

### 6. Exit

Enter `q` to terminate the application.

Example:

```text
Command: q
Exiting editor.
```

## Data Structure

The program stores the document using a two-dimensional character array:

```c
char buffer[MAX_LINES][MAX_LEN];
```

The program supports:

- Maximum 100 lines
- Maximum 255 characters per line, excluding the terminating null character
- In-memory storage while the program is running

The current number of lines is tracked using:

```c
int line_count;
```

## Core Operations

### Print

Displays all lines currently stored in the buffer.

### Append

Adds a new line at the end of the document.

### Edit

Replaces the contents of an existing line.

### Delete

Removes a selected line and shifts the remaining lines upward.

### Quit

Exits the program.

## Input Validation

The program checks whether the entered line number is valid.

If an invalid line number is entered, the following message is displayed:

```text
Invalid line number.
```

The program also checks whether the maximum number of lines has been reached before adding a new line.

## Important Notes

- Line numbers begin at 1.
- The editor supports a maximum of 100 lines.
- Each line can hold up to 255 characters, excluding the terminating null character.
- Invalid line numbers are rejected.
- Text is stored in memory while the program runs.
- The current implementation does not save the document to a file, so the text is lost when the program exits.

## Troubleshooting

### Invalid Line Number

Enter a line number between 1 and the current number of stored lines.

### Buffer Full

The editor has reached its maximum capacity of 100 lines.

### Command Not Recognized

Use one of the supported commands:

```text
p
a
e
d
q
```

## Compilation

Use GCC to compile the program:

```bash
gcc line_editor.c -o line_editor
```

On Windows, run:

```bash
line_editor.exe
```

## Project File

The main source code is contained in:

```text
line_editor.c
```

This help file provides the commands and basic instructions required to use the Line Editor.
