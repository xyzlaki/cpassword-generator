### Password Generator in C

A simple, fast, and secure command-line **Password Generator** written in C. It helps users generate strong, random passwords based on a custom length. 

### Features

* **Custom Length:** Choose exactly how long you want your password to be.
* **Strong Characters:** Generates passwords using a mix of uppercase letters, lowercase letters, numbers, and special symbols (!@#$%^&*).
* **True Randomness:** Uses system time (srand(time(NULL))) to ensure that every generated password is completely unique every time you run the app.

### How It Works (Code Breakdown)

The core logic of the program relies on three main parts: 

1. **The Character Pool:** All safe-to-use characters are stored in a single string array: 

c

char allchars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";

Use code with caution.
2. **Dynamic Boundary:** The program automatically calculates the size of the character pool using sizeof(allchars) - 1, excluding the hidden null-terminator (\0).
3. **Modulo Randomness:** To pick a character safely without going out of bounds, the program uses the modulo operator (%): 

c

int index = rand() % numchars;

Use code with caution.

*This ensures the generated index is always a valid position between 0 and the maximum length of our character pool.*

### How to Run It

### Prerequisites

You need a C compiler installed on your system (like gcc, clang, or MinGW for Windows). 

### Compilation

Open your terminal or command prompt, navigate to the folder where your file is located, and run: 

bash

gcc password_generator.c -o password_generator

Use code with caution.

### Execution

Run the compiled executable: 

* **On Linux / macOS:** 

bash

./password_generator

Use code with caution.
* **On Windows:** 

bash

password_generator.exe

Use code with caution.

### 📜 License

This project is licensed under the MIT License - see the LICENSE file for details.
