# Day Calculator

## Overview
The Day Calculator is a simple C++ console application that allows users to determine the day of the week after a specified number of days from the current day. It utilizes the system's current date and time to calculate the result.
<img width="520" alt="image" src="https://github.com/user-attachments/assets/3aec4b9f-1d74-41e4-b882-ad9c296989c4">


## Features
- Calculates the future day based on the current day and user input.
- Displays all days of the week.
- User-friendly console interface.

## Requirements
- C++ compiler (e.g., g++, clang++)
- Basic knowledge of how to compile and run C++ programs

## How to Compile and Run
1. **Create a new file** named `day_calculator.cpp` and copy the code into it.

2. **Open a Terminal** (or Command Prompt).

3. **Navigate to the Directory** where the file is saved.

4. **Compile the Program** using the following command:
   ```bash
   g++ -o day_calculator day_calculator.cpp
   ```

5. **Run the Program** using the command:
   ```bash
   ./day_calculator
   ```

## Usage Instructions
1. When the program runs, it prompts you to enter the number of days to calculate the future day.
2. Enter an integer value representing the number of days.
3. The program will display all the days of the week and the day that corresponds to your input from today.

## Example
- If today is Saturday and you input `2`, the output will show that the day after two days will be `MONDAY`.
- If you input `1`, the output will show `SUNDAY`.
- <img width="378" alt="image" src="https://github.com/user-attachments/assets/b433ab9a-c861-4e69-9b8f-2ed2789a82a4">


## Note
- The program uses the system's local time to determine the current day of the week.
- It correctly wraps around the week, so adding days will cycle through the week.

## License
This project is open-source and free to use. Feel free to modify and distribute it as needed!
