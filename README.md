<h1 align=center>_printf Proyect, Holberton School</h1>

<h2>Peers:
</h2>
<ul>
<li><a href="https://github.com/444sami"> <strong>Samara González</strong> </a> </li>
<li> <a href="https://github.com/oxan33"> <strong> Christopher Oxandabarat</strong> </a> </li>
 </ul>
<h2>
        Index
</h2>
         <ul>
                <li>
                        <strong> _printf </strong> </a>
                </li>
                <li>
                        <strong> Description </strong> </a>
                </li>
                <li>
                        <strong> Compilation </strong> </a>
                </li>
                <li>
                       <strong> Examples </strong> </a>
                </li>
                <li>
                       <strong> Testing </strong> </a>
                </li>
                <li>
                        <strong> Requirements </strong> </a>
                </li>
                <li>
                        <strong> Authorized functions and macros </strong> </a>
                </li>
                <li>
                       <strong> Flowchart </strong> </a>
                </li>
<h2>
<div id="printf">
        <strong>printf</strong>
</h2>
                <p>printf is the C language function to do formatted printing.</p>

<div id="Description">
        <strong>Description</strong>
</h2>
        <p> A more limited recreation of the printf function where only certain conversion specifiers are implemented with other custom ones that aren't in the base printf.</p>
  <div id="Table">
    <strong>Specifier table</strong>
<table>
  <tr>
    <th>Conversion specifier</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>%c</td>
    <td>Prints a given character</td>
  </tr>
  <tr>
    <td>%s</td>
    <td>Prints a given string</td>
  </tr>
  <tr>
    <td>%i, %d</td>
    <td>Prints a given integer</td>
  </tr>
  <tr>
    <td>%%</td>
    <td>Prints %</td>
  </tr>
</table>
  
<div id="Compilation">
        <strong>Compilation</strong>
</h2>
                <p> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c </p>
  
<h2>
<div id="Examples">
        <strong>Examples</strong>
</h2>
<p> To print a simple sentence: </p>

        #include "main.h"
        _printf("Let's try to printf a simple sentence.\n");
        
<p> Or also: </p>

        #include "main.h"
        _printf("%s", "Let's try to printf a simple sentence.\n");

<p> To print the maximum value for an integer type: </p>

        #include "main.h"
        #include <limits.h>
        _printf("%d", INT_MAX);
<hr>
<h2>
<div id="Testing">
        <strong>Testing</strong>
</h2>
        <img src="https://i.ibb.co/Mgygv64/Testing.png" alt="Testing">
<hr>
<h2>
<div id="Requirement">
        <strong>Requirements</strong>
</h2>
<h3>
        General
</h3>
        <ul>
                <li> Allowed editors: vi, vim, emacs </li>
                <li> All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 </li>
                <li> All your files should end with a new line </li>
                <li> A README.md file, at the root of the folder of the project is mandatory </li>
                <li> Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl </li>
                <li> You are not allowed to use global variables </li>
                <li> No more than 5 functions per file </li>
                <li> In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t
                     have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at
                     compilation. Our main.c files might be different from the one shown in the examples
                <li> The prototypes of all your functions should be included in your header file called main.h </li>
                <li> Don’t forget to push your header file </li>
                <li> All your header files should be include guarded </li>
                <li> Note that we will not provide the _putchar function for this project </li>
        </ul>
<hr>
<h2>
<div id="More functions">
        <strong>Authorized functions and macros</strong>
</h2>
                <li>
                        write (man 2 write)
                </li>
                <li>
                        malloc (man 3 malloc)
                </li>
                <li>
                        free (man 3 free)
                </li>
                <li>
                        va_start (man 3 va_start)
                </li>
                <li>
                        va_end (man 3 va_end)
                </li>
                <li>
                        va_copy (man 3 va_copy)
                </li>
                <li>
                        va_arg (man 3 va_arg)
                </li>
        </ul>

<hr>
<h2>
<div id="Flowchart">
        <strong>Flowchart</strong>
</h2>
        <img src="" alt="Flowchart" width="800" height="800">
