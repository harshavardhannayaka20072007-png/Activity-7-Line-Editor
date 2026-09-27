# Paper Design — Line Editor

## Data Structure

The Line Editor uses a two-dimensional character array:

`char buffer[MAX_LINES][MAX_LEN]`

- MAX_LINES = 100
- MAX_LEN = 256

## Commands

- p → Print
- a → Append
- e → Edit
- d → Delete
- q → Quit

## Core Logic

### Append
Check capacity → Read text → Store text → Increase line count

### Edit
Read line number → Validate → Replace existing text

### Delete
Read line number → Validate → Shift following lines → Decrease line count

### Print
Check buffer → Display stored lines with line numbers
