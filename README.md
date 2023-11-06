# system-security
# Registration and login system

It is a simple logging and logging system implemented in C++. The system allows users to register, log in and change their passwords. User data is stored in a file called "users.txt".

## Properties
- User registration: Users can register by providing a username, password and age. Registration data is stored securely in the "users.txt" file.
- User Login: Registered users can login by providing their username and password. The system checks the provided credentials against the stored data to authenticate the user.
- Password Change: Logged in users can change their password by providing the current password and a new password. The system verifies the current password before updating the password in the "users.txt" file.

## Usage
Compile the source code using the C++ compiler.
Run the compiled executable file.
Choose one of the following options:
- Option 1: New user registration.
- Option 2: Login with an existing user.
- Option 3: Change the password for a logged in user.
- Option 4: Termination of the program.


## The file structure
- `main.cpp`: the main source code file containing the logic of the registration and login system.
- `users.txt`: text file used to store user data in the format: username, password, age.

## Note
This system is intended for educational purposes and is not suitable for production environments. It does not provide advanced security measures and should not be used to store sensitive information.

Feel free to modify and improve the system according to your needs.
