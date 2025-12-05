## 1️⃣ Project Overview
- Introduce **JIK** as a simple lightweight CLI tool written in C.
- Mention the 3 commands: greet, bye, and length.
- Mention that it's beginner-friendly and a good intro to CLI development.

- Example: JIK is a lightweight custom Command Line Interface built in C.
It supports basic text commands such as greeting users, saying goodbye, and calculating the length of a name.
Designed as a simple educational project to practice C programming and CLI argument handling.

## 2️⃣ Features 
- --greet <name> → Prints a friendly greeting
- --bye <name> → Prints a goodbye message
- --length <name> → Counts how many characters the name has

## 3️⃣ Usage Examples
### :sparkles: --greet <name> 
#### Input :
```--greet
./JIK --greet Jana
```
#### Output :
```Hello 
Hello Jana
```

### :sparkles: --bye <name>
#### Input :
```--bye
./JIK --bye Ismail
```
#### Output :
```Goodbye
Goodbye Ismail
```

### :sparkles: length <name>
#### Input :
```--length
./JIK --length Sarah
```
#### Output :
```characters
The name 'Sarah' has 5 characters
```

## 4️⃣ File Structure
### 📁 Project Structure
```characters
JanaCommand/
 └── JIK/
      ├── JIK.c      # Source code
      └── JIK        # Compiled binary (Linux)
```

## ⭐ What I Learned

- Through building JIK, I learned how command-line tools work behind the scenes and how to handle arguments in C. This project helped me understand how to design simple CLI commands, print dynamic output, and manage different user inputs,I also gained hands-on experience with compiling C programs, organizing project files.
