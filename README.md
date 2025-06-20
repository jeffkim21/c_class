c_class for beginers
====================

# Day-1
0. Introduction
    - Text book
      	* K. N. King, C Programming - A modern approach 2nd.
    - History
		* Developed by Ken Thompson, Dennis Ritche and others during 1969 ~ 1973
		* In 1989, it was approved as ANSI standard (C89, ANSI C)
    	* In 1990, it was approved as ISO standard (C90)
		* In 1999, it was revised and approved as ISO standard (C99, this book)
		* As of 2025, C23 is the latest officially approved standard of the C programming language (C23)
1. Computer language terminology
   - Tokens (Simmilar to "Word" in natutal language, 토큰)
     * Keyword, Indentifier, Constant, Operator, Delimiter
   - Statement (Similar to "Sentence" in natural language, 문 또는 문장)
   - Syntax (Similar to "Grammer" in natual language, 구문 또는 문법)
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
