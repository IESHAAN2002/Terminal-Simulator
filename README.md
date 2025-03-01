Documentation for Shell 
Created by Ieshaan Awasthy
● Internal Commands 
1. pwd 
2. cd 
3. echo 
● External Commands 
1. mkdir 
2. ls 
3. date 
4. cat 
5. rm 
Internal Commands 
pwd - 
Options that command takes: “-L” and “-P” 
For ``pwd -L`` - this results in providing the logical current working directory. For ``pwd -P`` - this results in providing the physical current working directory. 
Testcase: 
pwd 
pwd -L 
cd - 
Options that command takes: “-L” and “-P” 
For ``cd -L`` - Force symbolic links to be followed. In other words, if you tell cd to move into a "directory", which is actually a symbolic link to a directory, it moves into the directory the symbolic link points to. 
For ``pwd -P`` - Use the physical directory structure without following symbolic links. In other words, only change into the specified directory if it actually exists as named; symbolic links are not followed. 
Corner Case: 
1. If cd is passed then it will go to parent directory 
2. If cd .. is passed then it will go to parent directory 
Testcase: 
cd .. 
cd -L
echo 
Options that command takes: “-n” and “-E”:- 
For ``echo -n`` - do not append a newline 
For ``echo -E`` - explicitly suppress interpretation of backslash escapes 
Corner Case: 
1. If echo some string then that string is printed 
2. If echo -E some string then that string is printed without considering the slashes 
Testcase: 
echo hello 
echo -n hello 
External Commands 
Cat : 
Testcases: 
1. Read text from a file - hello.txt 
Date : 
Testcase: 
1. Date - which printed the date and time 
Rm: 
Testcase; 
1. rm hello.txt - deleted the file 
Mkdir: 
Testcase: 
1. mkdir Ieshaan - made a separated folder 

