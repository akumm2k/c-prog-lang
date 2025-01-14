# Strings and String Constants

We already know what a
#module string.md string
is.  It is an array of non-null characters terminated by a null byte.  The null
character is part of the string.

- A *string literal* is a sequence of zero or more characters enclosed in
  double-quotes, as in `"xxx"`.  It is also called a *string constant*.

	- do not confuse it with a *character constant*, e.g. `'A'`, as it uses
	  single quotes.  In contrast to Python, for example, single and double
	  quotes are two different things in C.

- **a string constant internally initializes an array of characters, with a null
  character appended.**

- that also means that a string literal may include multiple null characters,
  thus defining multiple strings.  Note that a *string literal* and a *string*
  are two different things even that people mostly both call a string.

```C
$ cat main.c
#include <stdio.h>

int
main(void)
{
	printf("%s\n", "hello\0world.");
}
$ cc main.c
$ ./a.out
hello
```

- `'\0'` is just a special case of octal representation `'\ooo'`,
  called *octal escape sequence*, where `o` is an octal figure (0-7).  You can
  use any ASCII character like that.

	- the full syntax is `'\o'`, `'\oo'`, or `'\ooo'`.  `\6` is another
	  example of an octal character sequence while `\8` is illegal.

```C
$ cat main.c
/*
 * The code assumes that our environment uses ASCII but that is not mandatory.
 * See 5.2.1 Character Sets in the C99 standard for more information.
 */
#include <stdio.h>

int
main(void)
{
	/* Check the ascii manual page that 132 is 'Z', and 71 is '9'. */
	printf("%c\n", '\132');
	printf("%c\n", '\71');
	/* Will print "a<tab>b" */
	printf("a\11b\n");
}
$ ./a.out
Z
9
a	b
```

- a string constant may be used to initialize a `char` array and usually that is
  how the string initialization is used (in contrast to `{ 'a', 'b', ... }`)

```C
int
main(void)
{
	char s[] = "hello, world.";

	printf("%s\n", s);
}
```

```
$ gcc -Wall -Wextra main.c
$ ./a.out
hello, world.
```

- remember that if `{}` is used for the initialization, **you must add the
  terminating zero yourself** unless you use the size of the array and the
  string was shorter (in which case the rest would be initialized to zero as
  usual):

```C
char s[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
```

- so, the following is still a propertly terminated string but do not use it
  like that

```C
char s[10] = { 'h', 'e', 'l', 'l', 'o' };
```

Anyway, you would probably never do it this way.  Just use `= "hello"`.

#source array-fill.c
#source array-fill2.c

- string is printed via `printf()` as `%s`

```C
printf("%s\n", "hello, world");
```

- experiment with what `%5s` and `%.5s` do (use any reasonable number)

#source string-format.c
