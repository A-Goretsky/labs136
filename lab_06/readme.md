GDB Debugger Lab.

Note: As GDB has problems with Mac, I used LLDB for the debugging process, 
it is very similar to GDB, just with different commands.

I began with first compiling and running the program with several clang warning flags, 
-Wall and -Wextra for some basic error and warning information.

This led me to discover an if statement with no actual body because of a misplaced semicolon, a complete failure of the addUp method.

Next, I compiled with Clang sanitizers, "-fsanitize=undefined,address" and ran the program.
This showed me an index out of bounds error on line 20, and a stack-buffer-overflow on line 52.

Finally I tested mac's debugger, LLDB, which showed me the segmentation fault on line 74.

