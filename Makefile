all: shell.o rm.o mdkir.o ls.o date.o cat.o

shell.o: shell.c
	gcc -o shell shell.c 

cat.o: cat.c
	gcc -o cat cat.c

mdkir.o: mdkir.c
	gcc -o mdkir mdkir.c 

ls.o: ls.c 
	gcc -o ls ls.c

date.o: date.c
	gcc -o date date.c

rm.o: rm.c
	gcc -o rm rm.c