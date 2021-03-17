# _printf
This is printf project is about building a function as similar as possible to the original printf.

# Features
- The main function uses structures to call the function corresponding to the case.
- The function has a buffer that stores and prints the output strings every 1024 bytes just like the original printf.
- The returns of our function are the number of characters printed, and when there's an incorrect input the return is going to be -1 as an error, just like the original printf.

------
## Flowchart of _printf implementation
![_printf flowchart](https://cdn.discordapp.com/attachments/819387081709191179/821551674429538314/Printf_planning_brainstorm_1.jpg)
![_printf flowchart #2](https://cdn.discordapp.com/attachments/819387081709191179/821551705099075634/Printf_planning_brainstorm_2.jpg)
## Files and Descriptions
| FILE  | DESCRIPTION |
| ------------- | ------------- |
| _printf  | Function that prints like printf  |
| holberton.h  | Header file that contains our prototypes and includes.  |
| get_format  | Chooses the format to be used.  |
| formats.c  | Contains main function formats to print: %c, %s, '%', %d. |
| formats_advanced_1.c  | Contains %R format specifier to encode to rot13, and %r to reverse a string|
| formats_advanced_2.c  | Contains advanced function formats to print: %b, %u, %o, %X, %x  |
| _string.c  |  Concatenates a string to the buffer to print the strings you want.  |
| memory.c  | Checks size of buffer and allocates memory to be printed  |
| utilities.c  | Contains: _itoa, _uitoa_b_o_h, rev_string, and rot13 functions |
| man_3_printf  | Our manual with documentation about the function _printf  |
## Session log:

#### 12/02/21

<details>
  <summary>
    <h5>
    Session 0 (12/03/21 -  Duration: 3:35, from 18:34 to 22:09)
    </h5>
  </summary>
  <ul>
    <li>Planned modules for printf (Miro).</li>
    <li>First draft of flowchart.</li>
    <li>Proof of concept for task 1 (basic printf with `%c`, `%s` and `%%`).</li>
  </ul>
  <h5>
    Tomorrow
  </h5>
  <ul>
    <li>Function pointers for proof of concept.</li>
    <li>Structure for printf's modules.</li></li>
  </ul>
</details>

#### 13/03/21

<details>
  <summary>
    <h5>
    Session 1 (Duration: 3:08, from 10:52 to 14:00)
    </h5>
  </summary>
  <ul>
    <li>Function pointers implementation of proof of concept for task 1.</li>
  </ul>
  <h5>
    Next session:
  </h5>
  <ul>
    <li>Edge cases for printf's function pointer implementation.</li>
    <li>Implementation of %d and %i.</li>
    <li>Buffer allocation.</li>
  </ul>
</details>

<details>
  <summary>
    <h5>
    Session 2 (Duration: 4:56, from 17:36 to 22:32)
    </h5>
  </summary>
  <ul>
    <li>Edge cases for printf's function pointer implementation.</li>
    <li>Implementation of %d and %i.</li>
  </ul>
  <h5>
    Next session:
  </h5>
  <ul>
    <li>Buffer allocation.</li>
  </ul>
</details>

<details>
  <summary>
    <h5>
    Session 3 (Duration: 4:56, from 23:18 to +1 01:03)
    </h5>
  </summary>
  <ul>
    <li>Buffer allocation.</li>
  </ul>
  <h5>
    Tomorrow:
  </h5>
  <ul>
    <li>Planning for split work, implementation of other formats.</li>
  </ul>
</details>
<details>
  <summary>
    <h5>
    Session 4 (Duration: 03:10, from 16:14 to 19:25)
    </h5>
    <h5>
    Session 5 (Duration: 02:54 , from 20:33 to 23:27)      
    </h5>
  </summary>
  <ul>
    <li>Discussion about flags, width and precision</li>
  	<li>Implementation of strconcat</li>
    </ul>
  <h5>
    Tomorrow:
  </h5>
  <ul>
    <li>Plan how to implement more than two characters after the format %</li>
    <li>Alfredo will work in: %b, %X, %x, %R</li>
  	<li>Daniel will work in %u, %o, %r</li>
    </ul>
</details>
