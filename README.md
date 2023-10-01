### Instruction
To compile and run a C++ file on both Windows and Linux using a simple script, you can follow these steps:
1. Give Execution Permission:
```bash
chmod +x run
```
2. Run the Script:
```bash
./run cpp_file.cpp
```

### Note
If you are using Windows, you can run the script within Windows Subsystem for Linux (WSL) or a Bash emulator like Git Bash.

Make sure the 'g++' compiler is available in your PATH.

Ensure that the script has execute permission on Linux systems. If not, you can grant it by running:

```bash
chmod +x run
```

If compilation fails, check for errors in your C++ code, and ensure that you have properly installed the 'g++' compiler.

The script assumes that the 'out' directory should be created in the same directory as the script itself. If you want to change the output directory, you can modify the script accordingly.

Feel free to use or modify the script to simplify the process of compiling and executing the C++ programs.