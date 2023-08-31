#C-Project : Calculator

1. **Include Header File and Define Main Function:**
   
   The code starts by including the standard input/output library (`stdio.h`) and defining the `main` function, which is the entry point of the program.

2. **Declare Variables:**

   The program declares several integer variables, including arrays to store matrices (a, b, c, d), as well as variables for menu choices, matrix dimensions, and loop counters.

3. **Display Main Menu:**

   It displays the main menu using `printf` statements and prompts the user to choose between three options: Calculator, Matrix Calculator, or Exit.

4. **User Input:**

   It uses `scanf` to get the user's choice (`num`) from the keyboard.

5. **Calculator Option (if num == 1):**

   If the user chooses the Calculator option (`num == 1`), the program displays a submenu for basic arithmetic operations (addition, subtraction, multiplication, and division).

   - The user selects an operation.
   - The program reads two integers (`f` and `g`) from the user.
   - Depending on the chosen operation, it performs the calculation and displays the result.
   - The program then goes back to the main menu (`goto s`), allowing the user to perform more calculations.

6. **Matrix Calculator Option (if num == 2):**

   If the user chooses the Matrix Calculator option (`num == 2`), the program displays a submenu for matrix operations (addition, subtraction, multiplication, and transpose).

   - The user selects an operation.
   - The program asks for the number of rows and columns for the matrices (`row` and `col`).
   - The user enters values for two matrices (`a` and `b`).
   - Depending on the chosen matrix operation, the program calculates and displays the result in matrix `c` or transposes matrix `d`.
   - The program then goes back to the main menu (`goto strt`), allowing the user to perform more matrix operations.

7. **Exit Option (if num == 3):**

   If the user chooses the Exit option (`num == 3`), the program displays a farewell message and ends.

8. **Goto Statements:**

   The code uses `goto` statements (`strt`, `s`, `end`) to control the flow of the program, allowing the user to return to the main menu after each operation.

9. **End of the Program:**

   After the user selects the Exit option or the program completes an operation, it terminates.
