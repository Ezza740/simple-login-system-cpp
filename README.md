Simple Login System (C++)


A beginner-friendly C++ project demonstrating user registration and login functionality using basic programming concepts.

 Overview:

This project is a basic console-based login and registration system built using C++. It allows users to create a username and password, and then log in using the same credentials.

The system demonstrates fundamental programming concepts such as functions, conditionals, loops, and global variables.

 Features:

1) User Registration
2) User Login Authentication
3) Menu-driven interface
4) Instant success/error messages
5) Exit option

  Technologies Used:
          C++
          
Standard Library (<iostream>)

 Project Structure:
 
simple-login-system/
│
├── main.cpp        # Contains complete source code
└── README.md       # Project documentation

 

When you run the program, you will see:

1)Registration
2)Login
3)Exit

 Registration:
User enters a username and password

Credentials are stored in global variables:

string savedusername;
string savedpassword;
A success message is displayed

 Login:
User enters username and password

The system checks:

if (username == savedusername && password == savedpassword)
If correct →  Login successful
If incorrect →  Invalid username

 Exit:
 
Ends the program with a goodbye message

 Concepts Used:
1)Functions (newregister(), login())
2)Global variables
3)if-else conditions
4)switch statement
5)do-while loop
6)User input/output (cin, cout)

 Limitations:
1) Only one user can register at a time
2) Data is not saved permanently (lost after program ends)
3) No password hiding (visible input)
4) No input validation
5) Error message does not distinguish between wrong username/password
 
 Future Improvements:
 
1) File handling for saving user data
2) Password masking (hidden input)
3) Multiple user accounts
4) Input validation
5) Retry limit for login attempts
6) GUI-based version

 Author:

EZZA SAEED
GitHub: https://github.com/Ezza740


