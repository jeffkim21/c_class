c_class for beginers
====================

# Day-1
0. Text book:
   - K. N. King, C Programming - A modern approach 2nd.
1. Computer language terminology
   . Tokens (Simmilar to "Word" in natutal language, 토큰)
      - Keyword, Indentifier, Constant, Operator, Delimiter
   . Statement (Similar to "Sentence" in natural language, 문 또믄 문장)
   . Syntax (Similar to "Grammer" in natual language, 구문 또는 문법)
3. Install MSYS2 (Compiler and development tools)
    - <https://www.msys2.org/>
    - $ pacman -S mingw-w64-ucrt-x86_64-toolchain
4. Exercise CLI commands (LINUX compatible)
   - clear, pwd, cd, ls, mkdir, alias, rm, echo, nano, notepad
5. Create pun.c
```C   
   #include <stdio.h>
   int main(void)
   {
     printf("To C, or not to C: that is the question\n");
     return 0;
   }
```
