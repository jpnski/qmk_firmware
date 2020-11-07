## Ortho 50 Alps:

[Project Github Page](https://github.com/jacekplonowski/ortho_50_alps)
![assembled_keyboard](https://i.imgur.com/e3NicOM.jpg)

----

##### Pro Micro/Elite-C Pinout:
~~~
Rows:              Columns:             
------------------------------------------
r0 : D3            c0 : C6         c6 : F6
r1 : D2            c1 : D7         c7 : F7
r2 : D1            c2 : E6         c8 : B1
r3 : D0            c3 : B4         c9 : B3
r4 : D4            c4 : B5        c10 : B2
                   c5 : F5        c11 : B6
~~~

----

##### Compiling:
* In QMK build environment:

~~~
$ make ortho50alps:default
~~~

----

##### Firmware Flashing:

* For Elite-c: (atmel bootloader)

~~~
$ dfu-programmer atmega32u4 erase
$ dfu-programmer atmega32u4 flash ./ortho50alps_default.hex
$ dfu-programmer atmega32u4 start
~~~

* For Pro-Micro: (caterina bootloader)

~~~
$ avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 flash:w:ortho50alps_default.hex
~~~
