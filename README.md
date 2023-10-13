# 42-ft_printf

recreating printf in my own way

## getting started

In this project we are required to recreate the printf function. printf is a rare kind of function called variadic functions. variadic function are kind of function that takes a varying number of parametrs like in this example :

```c
printf("%s this is %s, and this one takes %d parameters%c", "hello user", "a variadic function", 4, '\n');
```

This type of functions has a the following prototype:

```c
int printf(const char *str, ...);
```

the variadic functions can have other first paramters and other return types.
the '...' parameters is reserved for the parameters and it is called ellipsis and that parameters is responsible for storing the parameters passed to the function when called

the variadic function is found in the stdarg.h and it has macros that are used the variadic functions

we have the first macro va_list, which is used to store the that comes from the ellipsis.

```c
va_list param;
```

the seccond macro used is the va_start. this macro is the one used to initialize the va_list struct. to understand how the va_list works with va_start check this <a href="https://youtu.be/oDC208zvsdg">video</a>

```c
va_start(param, str);
```

the third macro is va_arg. this macro is  the one responsible for extracting the arguments from the va_list that are going to be used when the right flag is found

```c
<function_name>(va_arg(<the type of argument that the called function takes>, param));
```

this <a href="https://youtu.be/89GryDno_IE">video</a> and this <a  href="https://youtu.be/3iX9a_l9W9Y">one</a> also explain how all those macros work together

And the last macro is va_end. the entire proccess from beginning to end works fine without using this macro, but it is better and safer to use this macro at the end of the variadic function and it is also considered a good practice to use it.

```c
va_end(param);
```

the use cases of the variadic functions are many, for example you have a function that takes a big number of parameters, it is practical to use a variadic function so that the prototype of the function is not as long and you can give it any number of parameters

for the students of 42/1337 network, i can't stress enough when i say that you need to know what happens upon argument extraction or when the va_start used and what are the component of the va_list and what does each one do, because you are required to know all of those informration for a better evaluation session.

# Resoures

(.)<a href="https://youtu.be/z6g_echs8jE"> variadic functions in arabic</a>
<br>
(.)<a href="https://youtu.be/xtl3ZpyhBTo">1# C - Variadic functions</a>
<br>
(.)<a href="https://www.geeksforgeeks.org/variadic-functions-in-c/">variadic function geeks for geeks</a>
<br>
(.)<a href="https://en.cppreference.com/w/c/variadic">varaidic functions learncpp</a>

hope you have a great time reading docs and enjoy the learning process
