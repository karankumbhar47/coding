nasm -f elf32 -g -F stabs $1.asm -o build/$1.o -l build/$1.lst

ld  -m  elf_i386 -o build/$1 build/$1.o  io.o 

