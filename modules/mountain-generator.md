## Mountain scenery generator

A very simple moutain generator.  At every iteration you go either straight
(`-`), up (`/`), or down (`\`).  The program generates something like the
following:

```
$ a.out
               /                         /--
            / / \- /--                  /   \                       / /-
           / \    \   \              /--     \-                   /- \  \
          /            \            /          \             /-- /       \
      / /-              \-  /--   /-            \-          /   \         \
     / \                  \-   \ /                \-  /-- /-
    /                           \                   \-   \
 /--
-
```

You will need a two-dimensional array to fill, then print.  Use `memset()` to
initialize the array with spaces.  Check the man page for `memset()`.  For
random numbers, use `rand()` and `%` for modulo.  To initialize the random
generator, use `sranddev()` if you have it, or `srand(time(NULL))`.  Check the
documentation if unsure (each function is supposed to have its manual page).

BTW, there is no language construct to initialize all elements of an array with
a specific non-zero value.  You can only zero it out using an initializer `{ 0
}`, as we already know.

The algorithm goes from left to the right, one character at a time. At each
point it will decide whether the mountain will grow, descend or remain the same
(hence the random numbers).

Once you got a working program, restructure the code into small functions (one
for printing a character based on random number, one for printing the whole 2-D
array, etc.). Optionally you can try to avoid  global variables by passing the
array as parameter of function - however keep in mind that arrays cannot be
passed as value so the array dimensions will have to be passed as function
parameters as well.

### variant: nicer mountain

You can make it more complicated and make the ascii art smoother.  For example,
you can define that after `/` you cannot go down with `\` but you could do `/\`,
etc.  You would need to keep a state of the previous character.  You could
generate something like this (use your imagination):

```
            .
           / \
          /   \__
      /\_/       \__/|
     /               |
    /                |__/............................
  _/
```

### variant: mountain range

The top-level function (`mountain()`) can be also called with the array (and its
dimensions) as input and you can try calling it multiple times to see if a
mountain range can be generated.

  solution: [mountain-generator.c](src/mountain-generator.c)

