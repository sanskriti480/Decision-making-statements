# Experiment 5: Decision-Making Statements in C++

## Aim
To study and implement **decision-making statements** (`if`, `else if`, `else`, `switch-case`) in C++ through practical coding problems.

---

## Tools Used
- Visual Studio Code (VS Code) / Programiz Online C++ Compiler.

---

## Theory

### Why C++ is More Efficient Than C

- **Object-Oriented Programming (OOP):**  
  Facilitates modular, reusable, and organized code with features like classes and inheritance.

- **Standard Template Library (STL):**  
  Provides pre-built efficient data structures and algorithms.

- **Function Overloading & Default Arguments:**  
  Adds flexibility and reduces redundancy.

- **Strong Type Checking:**  
  Helps avoid many common runtime errors.

- **Exception Handling and Namespaces:**  
  Enhances safety and large-scale project organization.

- **Dynamic Memory Management:**  
  Enables fine-tuned memory control using `new` and `delete`.

These features make C++ better suited than C for modern, large-scale, and complex applications.

Decision-making is a crucial concept in programming. In C++, we use control flow statements like `if-else` and `switch` to direct the program based on conditions.

These constructs allow the program to choose different paths based on the **logical evaluation** of expressions.

---

### Decision-Making Statements in C++

| Statement     | Purpose                                                        |
|---------------|----------------------------------------------------------------|
| `if`          | Executes a block if a condition is true                        |
| `if-else`     | Executes one block if true, another if false                   |
| `else if`     | Tests multiple conditions sequentially                         |
| `switch-case` | Selects execution based on the value of a variable or expression |
| `default`     | Provides fallback when no cases match                         |

---

## Program Descriptions

### Program 1: Even or Odd Checker

- **Purpose:** Check whether a number entered by the user is even or odd.
- **Concepts Used:**
  - `if-else` conditional
  - Modulus operator `%` to check divisibility
- **Logic:**  
  If a number is divisible by 2 (i.e., `num % 2 == 0`), it is even. Otherwise, it is odd.

---

### Program 2: Greatest of Three Numbers

- **Purpose:** Find the greatest among three user-entered numbers.
- **Concepts Used:**
  - Nested `if-else` statements
  - Comparison operators (`>`, `>=`)
- **Logic:**  
  Compares each number in sequence and also checks for equality to handle cases where numbers are the same.

---

### Program 3: Vowel or Consonant

- **Purpose:** Determine whether the entered alphabet is a vowel or consonant.
- **Concepts Used:**
  - Logical OR (`||`)
  - Character comparison
  - Case handling (uppercase and lowercase)
- **Logic:**  
  Checks if the letter is one of A, E, I, O, U (or lowercase versions). If not, it's treated as a consonant.

---

### Program 4: Simple Calculator (Switch Case)

- **Purpose:** Perform a basic arithmetic operation based on user's choice.
- **Operations Supported:**
  - Addition
  - Subtraction
  - Multiplication
  - Division (with division-by-zero check)
- **Concepts Used:**
  - `switch-case`
  - Arithmetic operators
  - Division safety using `if`
- **Logic:**  
  Based on a number (1 to 4), perform the respective operation between two entered numbers.

---

### Program 5: Day of the Week

- **Purpose:** Display the day corresponding to a number (1 to 7).
- **Concepts Used:**
  - `switch-case`
  - `default` case handling for invalid input
- **Logic:**  
  Map input `1` to `Monday`, `2` to `Tuesday`, ..., `7` to `Sunday`. Give a custom message for each.

---

## Sample Output

Program 1

Enter a number: 4

It is a even number.


Program 2

Enter first number: 2

Enter second number: 4

Enter third number: 1

4 is the greatest.


Program 3

Enter a alphabet: A

It is a vowel!!


Program 4 

Welcome to the calculator!!

1.Addition 

2.Subtraction 

3.Multiplication 

4.Division 

Enter 1/2/3/4: 3

Enter first number: 4

Enter second number: 8

The multiplication is: 32


Program 5

Enter a number from 1-7: 3

It is Wednesday. You are half way up!

----

## Conclusion

- Learned how to use if, else if, and else statements to make decisions based on conditions.

- Understood the structure and syntax of switch-case statements for multiple choice decision-making.

- Applied relational and logical operators to solve real-life problems like:

  -Even/Odd checking

  -Finding the greatest of three numbers

  -Identifying vowels and consonants

- Explored how to use modulus, comparison, and logical OR operators effectively.


