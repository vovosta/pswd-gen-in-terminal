# Password Generator in Terminal

A simple password generator written in **C++** that runs directly in the terminal.

The goal of this project is to improve my C++ programming skills by progressively adding new features while building a useful command-line application.

## Current features available

* Random password generation
* Configurable password length
* Optional uppercase letters
* Optional lowercase letters
* Optional numbers
* Optional special characters
* Password analyzer
* Entropy calculation

## Future features

I'll maybe add in the future others features, such ass pass-phrase generation.

## Run

To run the project you must compile in the root file of the project with the following command : 
``
g++ -Wall -Wextra -std=c++17 main.cpp options.cpp password.cpp -o password-gen
``

Then you can run the application with :
``
./password-gen
``

## Project Roadmap

### Step 1 — Basic Password Generator

Generate random passwords using:

* Uppercase letters (`A-Z`)
* Lowercase letters (`a-z`)
* Numbers (`0-9`)

---

### Step 2 — Add Special Characters

Allow passwords to include symbols.

Example:

```text
! @ # $ % ^ & * ( ) - _ + = ? / < > { } [ ]
```

---

### Step 3 — Choose Password Length

Allow the user to choose the password length.

Example:

```text
Password length: 20
```

---

### Step 4 — Choose Character Types

Allow the user to choose which characters to include.

Example:

```text
Include uppercase letters? (y/n)
Include lowercase letters? (y/n)
Include numbers? (y/n)
Include symbols? (y/n)
```

---

### Step 5 — Generate Multiple Passwords

Generate several passwords at once.

Example:

```text
How many passwords?
5
```

---

### Step 6 — Ensure Strong Passwords

Make sure every generated password contains at least:

* One uppercase letter
* One lowercase letter
* One number
* One special character

---

### Step 7 — Password Strength Indicator

Display whether the generated password is:

* Weak
* Medium
* Strong

---

## Future Ideas

* Save generated passwords to a file
* Password history
* Colored terminal output
* Clipboard support

---

This project is developed for learning purposes and to progressively discover modern C++ while building a practical terminal application.

## License

This project is licensed under the GNU General Public License v3.0 (GPLv3).

You are free to use, study, modify, and redistribute this software under the terms of the GPLv3. Any distributed modified version must also be released under the GPLv3.
