GreyCode
========

Binary to GreyCode, GreyCode to Binary conversion  16-bit

===============

The function called within gray2binary.c is copied from the Wikipedia on the Internet. 
Changed the type of the data from “unsigned int” (32 bit Gray code) to “unsigned short” (16 bit Grey code).

Used an example bin file collected for AuVid streaming (audio file in .bin format).
1)	C code uses the File I/O to convert that bin file in the binary code to another bin file in Grey code, and then
2)	Another C code  to convert the bin file in Gray code back to the bin file in the binary code.

That is:

streaming_Shon_persist.bin  --(binary2grey)->  stream_Shon_binary.bin –(grey2binary) -> stream_Shon_binary.bin

Then I compare the binary files and they are matched:

[Shon]$ cmp stream_Shon_binary.bin stream_Shon_persist.bin

================


This is C refresh in embedded system class "Embedded firmware essentials".
