## Dactyl Manuform Split Keyboard
____
##### Pro Micro Pinout:
* Diode direction: row to col
* Column 0 = ESC key column
* Row 0 = QWERTY row
~~~
Rows:              Columns:
----------------------------
r0 : D3            c0 : F4 
r1 : D1            c1 : F5 
r2 : D0            c2 : F6 
r3 : D4            c3 : F7 
                   c4 : B1 
                   c5 : B3 
                           
~~~
----

### Compiling:
~~~
$ make dactyl_manuform
~~~

### Flashing:
~~~
$ avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 flash:w:dactyl_manuform_right.hex
$ avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 flash:w:dactyl_manuform_left.hex
~~~
