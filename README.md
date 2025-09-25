# Experiment 16: Exception Handling in C++

---

## Aim
To understand the concept of Exception Handling in C++ and implement it through programs.  
The objectives are:  
1. To demonstrate exception handling using a **divide by zero error**.  
2. To apply error handling in **BMI calculation**, ensuring robustness against invalid inputs.

---

## Tools
- **Programming Language**: C++ (Standard C++11 or above recommended)  
- **Compiler**: g++ / MinGW / Turbo C++ or any modern compiler  
- **IDE/Editor**: Code::Blocks, Dev C++, VS Code, or any basic text editor  
- **Operating System**: Windows / Linux / macOS  

---

## Theory
In traditional programming, errors like division by zero or invalid inputs may cause a program to crash or behave unpredictably.  
**Exception Handling** is a technique in C++ that allows the program to respond to unexpected events at runtime in a controlled way.  

### Key Concepts:
1. **Exception**: An unexpected event or error that occurs during the execution of a program.  
2. **try block**: Contains the code where an exception might occur.  
3. **throw statement**: Used to signal that an exception has occurred.  
4. **catch block**: Handles the exception thrown and provides an alternative course of action.  

### Advantages of Exception Handling:
- Prevents abnormal termination of the program.  
- Allows clear separation between error-handling code and normal logic.  
- Provides flexibility to handle different types of runtime errors.  
- Improves **robustness** and **user-friendliness** of the program.  

### Example Scenarios in This Experiment:
- **Divide by Zero Error**:  
  Division by zero is mathematically undefined. In C++, this leads to logical failure. With exceptions, we can detect the condition and handle it gracefully.  

- **BMI Calculation Error**:  
  BMI = Weight (kg) / (Height (m)²).  
  If height or weight is zero/negative, the result is invalid. By using exceptions, we can prevent incorrect calculations and provide meaningful feedback to the user.  

---

## Algorithm

### A. Divide by Zero Error
1. Start the program.  
2. Input two numbers: numerator and denominator.  
3. Place the division operation inside a `try` block.  
4. If denominator equals zero:  
   - Throw an exception.  
5. Catch the exception and display: *"Error: Division by zero is not allowed."*  
6. If denominator is non-zero:  
   - Perform the division and display the result.  
7. Stop the program.  

---

### B. BMI Error Handling
1. Start the program.  
2. Input weight (kg) and height (m).  
3. Place the BMI calculation inside a `try` block.  
4. If weight ≤ 0 or height ≤ 0:  
   - Throw an exception indicating invalid input.  
5. Catch the exception and display: *"Error: Invalid weight or height for BMI calculation."*  
6. If input is valid:  
   - Compute BMI = weight / (height × height).  
   - Display the BMI value.  
   - Optionally classify BMI (Underweight, Normal, Overweight, etc.).  
7. End the program.  

---

## Functions Used
- **`main()`**: Entry point of the program.  
- **`try-catch` blocks**: Handle exceptions in both programs.  
- **`throw`**: Used to raise an exception when invalid data or conditions are encountered.  

*(No additional user-defined functions are strictly required, but modular functions can be written for BMI calculation if needed.)*  

---

## Conclusion
From this experiment, we learned the following:  

1. **Importance of Exception Handling**  
   - It prevents programs from crashing when errors such as divide by zero occur.  
   - It allows developers to provide user-friendly error messages instead of abrupt termination.  

2. **Divide by Zero Handling**  
   - We successfully implemented a program that checks for zero denominators and throws an exception, ensuring logical correctness.  

3. **BMI Calculation Handling**  
   - We ensured that invalid inputs like zero or negative values for height and weight are detected and handled.  
   - The program gracefully stops computation and notifies the user instead of producing incorrect results.  

4. **Practical Understanding**  
   - Exception handling separates normal logic from error-handling code.  
   - It makes real-world programs more robust and reliable, which is crucial in professional software development.  

Thus, the experiment demonstrated the significance of **Exception Handling in C++** through practical, real-life inspired examples.  
