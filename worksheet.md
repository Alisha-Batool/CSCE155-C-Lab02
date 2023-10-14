
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.
Today is 2023/10/13
Your birthday was 1970/09/09
Hello, Dennis.  You are 53 years, 4 weeks, and 6 days old today.



2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1980.  How old is he today?
Enter the year in which you were born: 1980
Enter the month in which you were born (1-12): 12
Enter the day of the month in which you were born (1-31): 30
Today is 2023/10/13
Your birthday was 1980/12/30
Hello, BjarneStroustrup.  You are 42 years, 41 weeks, and 0 days old today



3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.
Today is 2023/10/13
Your birthday was 1999/08/09
Hello, Denis.  You are 24 years, 9 weeks, and 2 days old today.
PS C:\Users\MIAN ZAIN\Desktop\ALISHA\cs2\labs\CSCE155-C-Lab02> gcc .\birthday_cli.c  
PS C:\Users\MIAN ZAIN\Desktop\ALISHA\cs2\labs\CSCE155-C-Lab02> .\a.exe Denis 1999 24 12
Today is 2023/10/13
Your birthday was 
Hello, Denis.  You are 22 years, 43 weeks, and 4 days old today.



4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
  Data type: character type.
Minimum value for signed char: -128.
Maximum value for signed char: 127.
Minimum value for unsigned char: 0.
Maximum value for unsigned char: 255.
Minimum value for char: -128.
Maximum value for char: 127.
Size of signed char: 1 byte.
* `short int`
  size:
  range:
  Minimum value for signed short: -32768.
Maximum value for signed short: 32767.
Size of signed short: 2 bytes.

Minimum value for unsigned short: 0.
Maximum value for unsigned short: 65535.
Size of unsigned short: 2 bytes.
* `int`
  size:
  range:
  Minimum value for signed int: -2147483648
Maximum value for signed int: 2147483647
Size of signed int: 4 bytes.

Minimum value for unsigned int: 0
Maximum value for unsigned int: 4294967295
Size of unsigned int: 4 bytes.
* `long int`
  size:
  range:
  Minimum value for signed long: -2147483648
Maximum value for signed long: 2147483647
Size of signed long: 4 bytes.

Minimum value for unsigned long: 0
Maximum value for unsigned long: 4294967295
Size of unsigned long: 4 bytes.
* `float`
  size:
  range: 7 digits of accuracy
  Data type: floating-point.
Size of float: 4 bytes.
* `double`
  size:
  range: 15 digits of accuracy
  Size of double: 8 bytes.
Size of long double: 16 bytes.


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25

  b) $1,000.52

  c) $968,410.12



6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?




7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?
Please enter the base of a triangle: 3
Please enter the height of a triangle: 4
The area is 6.000000 square units.

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?
Please enter the base of a triangle: 3
Please enter the height of a triangle: 5
The area is 7.500000 square units.

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
Please enter the base of a triangle: 22
Please enter the height of a triangle: 11
The area is 121.000000 square units.