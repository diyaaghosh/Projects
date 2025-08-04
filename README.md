#  Security System in C++

A simple terminal-based **Security System** written in C++ that allows users to:

- Register (only if age ≥ 18)
- Login with credentials
- Change password
- Exit

User credentials (username, password, age) are stored in a local file (`File.txt`).

---

##  Features

-  Register with validation for minimum age (18+)
-  Login with username, password, and age verification
-  Secure password change functionality
-  User data stored in file for persistence
-  Password is masked when displayed (not shown in plain text)
  
---

##  How to Run

1. Make sure you have a C++ compiler (e.g., `g++`) installed.
2. Compile and run the program:

```bash
g++ security_system.cpp -o security_system
./security_system
```
## On windows
```
g++ security_system.cpp -o security_system.exe
security_system.exe

```
