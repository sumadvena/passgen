# Passgen

Passgen is a **dead simple** random password utility written in C.

It could be used to create a random string and paste it (copying is done automatically) to a password manager.
Aim of this magnificent piece of software is **just excercise**. 

## Installation
### Requirements
```
just wl-clipboard bash
```

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
[ ] Text file lookup for generations history
