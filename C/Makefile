GCC=gcc
CFLAGS=-Wall
Loadlibs=

3-1-1cn: 3-1-1cn.c
	gcc -o 3-1-1cn 3-1-1cn.c

3-1-1df: 3-1-1df.c
	gcc -o 3-1-1df 3-1-1df.c

3-2-3: 3-2-3.c
	gcc -o 3-2-3 3-2-3.c

3-2-4: 3-2-4.c
	gcc -o 3-2-4 3-2-4.c

3-2-4f:3-2-4f.c
	gcc -o 3-2-4f 3-2-4f.c

array: array.c
	gcc -o array array.c

array2: array2.c
	gcc -o array2 array2.c

getdist: getdist.o mylib.o
	gcc -o getdist getdist.o mylib.o -lm

getdist2: getdist2.o mylib.o
	gcc -o getdist2 getdist2.o mylib.o -lm

genrand: genrand.c
	gcc -o genrand genrand.c

getdist.o: getdist.c
	gcc -c -o getdist.o getdist.c

getdist2.o: getdist2.c
	gcc -c -o getdist2.o getdist2.c

mylib: mylib.c
	gcc -c -o mylib.o mylib.c

7-1-b: 7-1-b.c
	gcc -o 7-1-b 7-1-b.c

7-2-b: 7-2-b.c
	gcc -o 7-2-b 7-2-b.c -lm

7-2-c: 7-2-c.c
	gcc -o 7-2-c 7-2-c.c -lm

clean:
	rm *.o *~






