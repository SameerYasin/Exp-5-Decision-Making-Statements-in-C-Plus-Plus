# Exp-5-Decision-Making-Statements-in-C-Plus-Plus

## Aim
The aim of this project is to study and implement C++ decision-making statements.

## Software Required
I used Visual Studio to implement and test the program.

## Theory
Decision-making is the process of determining which part of the code should be executed or skipped based on certain conditions. In C++, decision-making is handled using conditional statements, also known as decision control statements. These statements allow specific blocks of code to execute based on given conditions.

### Types of Decision Making Statements in C++:
1. if Statement: The simplest decision-making statement in C++. The code inside the if block is executed only if the condition is true.

2. if-else Statement: This statement allows the execution of one block of code if the condition is true, and a different block of code if the condition is false.

3. if-else if Ladder: This statement is used to test multiple conditions. If one condition is true, its associated block is executed. If none of the conditions are true, the else block is executed.

4. Nested if-else: A condition inside another condition. It allows more complex decision-making by comparing multiple conditions.

5. Switch Statement: The switch statement is used when multiple conditions need to be evaluated based on the value of a variable or expression. It is cleaner and more efficient for handling multiple conditions compared to multiple if statements.

## Implementation
Based on the above decision-making statements, I have implemented simple programs to help understand how decision-making works in C++. The programs are:

### Program 1: Odd-Even Check
Objective: To determine whether a number entered by the user is even or odd.

Steps:

1. Ask the user to enter an integer n.
2. Read the input into variable n.
3. Check if n is divisible by 2:

    If n % 2 == 0, then display "This is an even number."
    Otherwise, display "This is an odd number."

### Program 2: Vowel Check
Objective: To determine whether the character entered by the user is a vowel or consonant.

Steps:

1. Declare a character variable str.
2. Ask the user to enter a character.
3. Check if the character is a vowel:

    If str is one of the vowels ('a', 'e', 'i', 'o', 'u' or their uppercase forms), display "The character entered is a Vowel."
    Otherwise, display "The character entered is a Consonant."

### Program 3: Find the Largest Number
Objective: To determine and display the largest number among three user-entered integers.

Steps:

1. Declare three integer variables a, b, and c.
2. Ask the user to enter three numbers.
3. Compare a, b, and c to find the largest number and display it.

### Program 4: Simple Calculator Using Switch Case
Objective: To perform one of four basic arithmetic operations—Addition, Subtraction, Multiplication, or Division—based on user input.

Steps:

1. Declare variables for the two numbers (a, b) and the result (sum, sub, mul, div).
2. Ask the user to enter two numbers.
3. Ask the user to select an operation:

    1 → Addition
    2 → Subtraction
    3 → Multiplication
    4 → Division
4. Use a switch-case statement to perform the selected operation:

   Case 1: Perform addition
   Case 2: Perform subtraction
   Case 3: Perform multiplication
   Case 4: Perform division
   Default: Display "Invalid input" if an invalid operation is selected.

### Program 5: Basic Banking System Using Switch Case
Objective: To simulate a basic banking system that handles user input for various services like checking the balance, withdrawing money, etc.

Steps:

1. Display a menu for the user to select a banking operation (e.g., Check balance, Deposit, Withdraw).
2. Use a switch-case statement to handle the selection:

   Case 1: Display current balance.
   Case 2: Deposit money into the account.
   Case 3: Withdraw money from the account.
   Case 4: Exit the program.
3. Continue prompting the user until they select the exit option.

## Conclusion

These programs helped me understand how decision-making statements work in C++. I learned how to implement various decision-making constructs like if, if-else, switch-case, and nested conditions to solve real-world problems. These statements are crucial in controlling the flow of execution in programs and are foundational for creating interactive applications.
