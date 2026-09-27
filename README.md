
````markdown
# Activity 7 — Simple Line Editor in C

## Team Members

- T S HARSHAVARDHAN NAYAKA
- VIGHNESH P KANHIRAKANDI
- TERRANCE PAUL S

## Overview

This project implements a simple command-line Line Editor in C.

The program stores multiple lines of text in memory and provides basic editing operations such as adding, displaying, editing, and deleting lines. The project demonstrates the use of arrays, strings, functions, input validation, and basic memory management concepts in C.

This project was prepared as part of **Activity 7 — Build a Simple Line Editor in C** for the 3rd Semester Portfolio Building / Coding Competition activity.

---

## Objectives

The main objectives of this project are:

- To build a basic command-line text editor using C.
- To store multiple lines of text in memory.
- To implement basic line editing operations.
- To practice arrays, strings, functions, loops, and conditional statements.
- To handle invalid line numbers safely.
- To maintain a simple and understandable program structure.

---

## Data Structure

The program uses a two-dimensional character array to store the document:

```c
char buffer[MAX_LINES][MAX_LEN];
````

The following constants are used:

```c
#define MAX_LINES 100
#define MAX_LEN 256
```

Therefore:

* Maximum number of lines = **100**
* Maximum characters per line = **255 characters plus the null terminator**
* Current number of stored lines is maintained using:

```c
int line_count = 0;
```

Each row of the `buffer` represents one line of the document.

---

## Features

The Line Editor supports the following operations:

### 1. Print Lines

Displays all lines currently stored in the buffer along with their line numbers.

Command:

```text
p
```

If the buffer is empty, the program displays an appropriate message.

---

### 2. Append a Line

Adds a new line of text to the end of the document.

Command:

```text
a
```

The program checks whether the buffer has reached its maximum capacity before adding a new line.

---

### 3. Edit a Line

Allows the user to select an existing line and replace its contents.

Command:

```text
e
```

The program asks for a valid line number and then accepts the new text.

---

### 4. Delete a Line

Removes a selected line from the document.

Command:

```text
d
```

After deleting a line, the following lines are shifted upward so that the document remains continuous.

---

### 5. Quit

Terminates the Line Editor program.

Command:

```text
q
```

---

## Command Reference

| Command | Operation             |
| ------- | --------------------- |
| `p`     | Print all lines       |
| `a`     | Append a new line     |
| `e`     | Edit an existing line |
| `d`     | Delete a line         |
| `q`     | Quit the program      |

---

## Program Workflow

The program continuously displays a command menu and waits for the user's input.

```text
Start
  |
  v
Display Command Menu
  |
  v
Read Command
  |
  +---- p ----> Print Lines
  |
  +---- a ----> Append Line
  |
  +---- e ----> Edit Line
  |
  +---- d ----> Delete Line
  |
  +---- q ----> Exit Program
  |
  v
Return to Command Menu
```

The program continues running until the user selects the `q` command.

---

## Core Logic

### Append Operation

1. Check whether the buffer is full.
2. Read the new line of text.
3. Store the text at the current `line_count` position.
4. Increase `line_count`.

### Edit Operation

1. Ask the user for the line number.
2. Validate the line number.
3. Display the current line.
4. Read the new text.
5. Replace the existing line.

### Delete Operation

1. Ask the user for the line number.
2. Validate the line number.
3. Shift all lines after the selected line one position upward.
4. Decrease `line_count`.

### Print Operation

1. Check whether the buffer is empty.
2. If empty, display an empty-buffer message.
3. Otherwise, display each stored line with its line number.

---

## Input Validation

The program performs basic validation for line numbers.

If the user enters a line number that is:

* Less than 1
* Greater than the current number of lines
* Not a valid integer

the program displays:

```text
Invalid line number.
```

The program also checks whether the maximum number of lines has been reached before appending a new line.

---

## Technologies Used

* **Programming Language:** C
* **Compiler:** GCC
* **Development Environment:** Visual Studio Code
* **Interface:** Command-Line Interface (CLI)
* **Data Structure:** Two-dimensional character array

---

## Source File

The main source code is:

```text
line_editor.c
```

---

## Compilation

Open a terminal in the project directory and compile the program using:

```bash
gcc line_editor.c -o line_editor
```

---

## Running the Program

### Windows

```bash
line_editor.exe
```

### Linux / macOS

```bash
./line_editor
```

---

## Example Usage

```text
--- LINE EDITOR --- [p]rint | [a]ppend | [e]dit | [d]elete | [q]uit
Command: a
Enter text: Hello World
Line added.

--- LINE EDITOR --- [p]rint | [a]ppend | [e]dit | [d]elete | [q]uit
Command: a
Enter text: This is a simple line editor.
Line added.

--- LINE EDITOR --- [p]rint | [a]ppend | [e]dit | [d]elete | [q]uit
Command: p
1: Hello World
2: This is a simple line editor.
```

An existing line can then be edited using:

```text
Command: e
Enter line number to edit: 1
```

A line can be removed using:

```text
Command: d
Enter line number to delete: 2
```

The program can be terminated using:

```text
Command: q
Exiting editor.
```

---

## Project Structure

```text
Activity-7-Line-Editor/
│
├── line_editor.c
├── README.md
├── HELP.md
└── Paper_Design/
    └── design.jpg
```

### File Description

| File / Folder   | Description                                            |
| --------------- | ------------------------------------------------------ |
| `line_editor.c` | Main C implementation of the Line Editor               |
| `README.md`     | Project overview, features, commands, and instructions |
| `HELP.md`       | Detailed help and command reference                    |
| `Paper_Design/` | Design evidence for the data structure and core logic  |

---

## Learning Outcomes

Through this activity, the following concepts were practiced:

* C programming fundamentals
* Two-dimensional arrays
* Character arrays and strings
* Functions
* Loops and conditional statements
* Input validation
* Array element shifting
* Command-line program design
* Basic software documentation
* GitHub repository organization

---

## Activity Information

**Activity:** Activity 7 — Build a Simple Line Editor in C

**Course:** Portfolio Building — Studio Course

**Semester:** 3rd Semester

**Programming Language:** C

**Project Type:** Command-Line Application

---

## Conclusion

The Simple Line Editor demonstrates how a basic text-editing system can be implemented using C and an in-memory two-dimensional character array.

The project provides essential line-level operations such as printing, appending, editing, and deleting text while maintaining a simple command-driven interface.

```
```
