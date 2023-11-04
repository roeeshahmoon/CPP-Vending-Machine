# Vending Machine Project

This project implements a vending machine system with various components to manage transactions, item dispensing, user interface, and data structures.

## Project Structure

The project is organized into several C++ source files:

- **assignment1.cpp:** Main program file where execution begins.
- **CashRegister.cpp and CashRegister.h:** Implementation and declaration of the `CashRegister` class.
- **DispenserType.cpp and DispenserType.h:** Implementation and declaration of the `DispenserType` class.
- **Menu.cpp and Menu.h:** Implementation and declaration of the `Menu` class.
- **Stack.cpp and Stack.h:** Implementation and declaration of the `Stack` class.
- **StackNode.cpp and StackNode.h:** Implementation and declaration of the `StackNode` class.
- **VendingMachine.cpp and VendingMachine.h:** Implementation and declaration of the `VendingMachine` class.

## Compilation and Execution

To build and run the project:

1. Open a terminal or command prompt.
2. Navigate to the project directory.

    ```bash
    cd /path/to/project
    ```

3. Compile the source files.

    ```bash
    g++ assignment1.cpp CashRegister.cpp DispenserType.cpp Menu.cpp Stack.cpp StackNode.cpp VendingMachine.cpp -o vending_machine_app
    ```

4. Run the compiled executable.

    ```bash
    ./vending_machine_app
    ```

## Dependencies

Ensure you have a C++ compiler installed on your system (e.g., `g++` for Unix-like systems or MinGW for Windows). If you encounter compilation errors, check for missing dependencies or code issues.

## Additional Notes

- Customize the code as needed for your specific requirements.
- If you encounter issues or have questions, refer to the documentation in each header file for class functionalities.

---

Feel free to customize the README based on your specific project details and any additional information you want to provide to users or developers.