## 4x6 Split Keyboard
[Project Github Page](https://github.com/jacekplonowski/4x6_split)

![assembled_keyboard_2]()
____
##### Pro Micro Pinout:
* Diode direction: column to row
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
____

![pcb_image_1](https://i.imgur.com/3nBktR2.jpg?1)
![pcb_image_1](https://i.imgur.com/RlEOXWn.jpg?1)

----

### Compiling:
~~~
$ make 4x6_split:default
~~~

### Flashing:
~~~
$ avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 flash:w:4x6_split_promicro_default.hex
~~~
