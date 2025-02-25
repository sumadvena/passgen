# Passgen

Passgen is a **dead simple** random password utility written in C.

It can be used to create a random string and paste it (copying is done automatically) to a password manager.
Aim of this magnificent piece of software is **just an excercise**. 

## Installation
### Requirements
```
just wl-clipboard bash
```
and then execute this command from shell: 
```
git clone REPOURL && cd passgen/ && just build && chmod +x passcopy.sh
```

## Usage
```
./passcopy.sh PASSWORD_LENGHT
```

The default PASSWORD_LENGHT is set to 13, but you can change it inside the `main.c` file and then build it again.

After running that command the new password is ready to use from inside your clipboard.

### Warning
This utility does not check the size of a provided integer or if an argument is integer - be reasonable.


# To-do
[x] Text file lookup for generations history
