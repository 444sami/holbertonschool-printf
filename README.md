<img src="https://i.postimg.cc/9MfDHrdW/Printf-proyect.png)" width="1050" height="120">

<a href="https://github.com/444sami"> <strong>Samara González</strong>, </a>
 <a href="https://github.com/coxan33"> <strong> Christopher Oxandabarat</strong> </a>
 <h2>
<div id="Description">
        <strong>Description</strong>
</h2>
                <p>printf <code>int printf(const char *format, ...);</code> is the C language function to do formatted printing, it's return value it's an int. In the most simple case, printf takes one argument: a string of characters to be printed, but if we want to print the content of variables we have to use specifiers (percent sign and a letter), so we add another argument.
</p>
</h2>
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

<p>How does printf work? it starts printing the characters it finds in the first argument, when it finds a percent (specifier) it goes to the next argument and uses it value, printing it according to that specification. It then returns to printing a character at a time.</p>
<table>
  <tr>
    <th>Parameter passed</th>
    <th>printf Produces</th>
  </tr>
  <tr>
    <td>("%d",0)</td>
    <td>0</td>
  </tr>
  <tr>
    <td>("%s", "Let's try to printf a simple sentence.\n")</td>
    <td>Let's try to printf a simple sentence.</td>
  </tr>
  <tr>
    <td>("My name starts with %c.\n",'S')</td>
    <td>My name starts with S.
</td>
  </tr>
</table>
The function prints characters, but the value of the return is the amount of characters printed excluding the null char.

<h2>
        <strong>Flowchart</strong>
</h2>
        <img src="" alt="Flowchart" width="800" height="800">

<h2>Requirements of the project:</h2>
<h3>Compilation</h3>
                <p> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c </p>
                <hr>
<h3>General</h3>
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
<h3>Authorized functions and macros</h3>
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
Samara González, Christopher Oxandabarat. Cohort 20.
