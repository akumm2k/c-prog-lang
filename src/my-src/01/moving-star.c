  /*
   * Implement a moving star that zick zacks on the __SAME__ line between some
   * boundary (say 50 character wide).
   *
   * You will only need:
   *
   *	- while loop
   *	- if statement (do not use else)
   *	- printf()
   *	- use a character '\r' to return to the beginning of a line
   *
   *	- use "poll(NULL, 0, <ms>);" to sleep <ms> miliseconds, do not worry
   *	  about not understanding what exactly it does.  To make the compiler
   *	  not complain, use "#include <poll.h>".  Alternatively, you can use
   *	  "sleep(1)" (#include <unistd.h>) but it is too slow then.  For
   *	  example:
   *
   *		poll(NULL, 0, 50);
   *
   *    - you will also need "fflush(stdout)" after each line is printed.  As
   *      standard error is buffered in the C library, the text will generally
   *      not be printed by printf() until a new line is printed, which will
   *      never be the case here. So, the fflush() call makes sure all buffered
   *      text is printed out.
   *
   * We expect something like this, with the star moving between those two
   * column-like barriers:
   *
   * |                                            *     |
   */

#include <stdio.h>
#include <poll.h>

int main(void) {
    const int width = 50;
    int dir = 1;
    int pos = 0;
    int i;

    while (1) {
        fprintf(stderr, "|");
        i = 0;

        for (int i = 0; i < width; i++) {
            if (i == pos)
                fprintf(stderr, "*");
            else fprintf(stderr, " ");
        }

        fprintf(stderr, "|");
        fflush(stdout);
        poll(NULL, 0, 50);
        fprintf(stderr, "\r");
        pos += dir;

        if (pos == width - 1 || pos == 0) dir = -dir;
    }
}

/**
 * ! DON'T FUCKING LET IT STOP YOU FROM ASKING !
 * ? __SAME__ ?
 *  ? why are we printing to stderr ?
 */


/**
 *
 * * Notes
 * - dynamic library
 * - compilation: gcc -> asm (assembly code) -> as -> machine code (binary)
 *
 * - gcc -E foo.c > processed-foo.c
 *      pre-processes foo.c - eg: includes all the libraries and rewrites macros
 * - "%d" -> decimal int
 * - Why is enclosing even a single line in braces important
 *      ! When merging the code without braces, then one of the statements might fall outside the loop / block.
 * - "%<x>" is called a conversion specifier
 * * Read the specification on floats
 *      1.12345678 -> %.
 */
