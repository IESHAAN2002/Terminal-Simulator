# Shell Documentation  
**Created by:** Ieshaan Awasthy (2021054)  

## Internal Commands  
These commands are built into the shell and do not require external programs for execution.  

### `pwd` (Print Working Directory)  
**Options:**  
- `-L` → Displays the logical current working directory (resolves symbolic links).  
- `-P` → Displays the physical current working directory (ignores symbolic links).  

**Test Cases:**  

pwd  
pwd -L  

### cd (Change Directory)
Options:

-L → Follows symbolic links when changing directories.
-P → Uses the physical directory structure without following symbolic links.
Edge Cases:

cd (without arguments) navigates to the home directory.
cd .. moves to the parent directory.

**Test Cases:**

cd ..  
cd -L  


### echo (Print Text to Console)
Options:

-n → Prevents appending a newline at the end.
-E → Suppresses interpretation of backslash escapes.

Edge Cases:
echo some_string prints the given string.
echo -E some_string prints the string as is, without interpreting escape sequences.

Test Cases:
echo hello  
echo -n hello  

## External Commands
These commands interact with the system by calling external programs.

- cat (Concatenate and Display File Contents)
Test Cases:
cat hello.txt  # Reads and displays the contents of hello.txt  

- date (Display System Date and Time)

Test Cases:
date  # Prints the current system date and time  

- rm (Remove Files or Directories)
Test Cases:
rm hello.txt  # Deletes hello.txt  

- mkdir (Create New Directory)
Test Cases:
mkdir Ieshaan  # Creates a directory named "Ieshaan"  
