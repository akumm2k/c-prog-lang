# Ternary operator

```
    cond ? expr1 : expr 2
```
same as
```
    if (cond) expr else expr2
```
e.g.
```
    max = (i > j) ? i : j;
```
note that if we add a semicolon, an expression becomes a statement, e.g.:
```
      (i == j) ? i++ : j++;
```
will increment `i` or `j`.  The parens are not needed but generally used for
better readability.

code: #source ternary-assign.c

## :wrench: toupper using ternary operator

Rewrite the
#module toupper.md convert small characters to upper case
program from last time using a function that utilizes the ternary operator
(single line of code)

#solution toupper-ternary.c

## :wrench: Min/max of 3 integer values

write an expression that returns maximum of 3 integers `i`, `j`, `k` using
ternary operator

  - do not use any macros

#solution 3max.c
