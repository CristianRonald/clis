google: google.o
	cc google.o -o google

google.o: google.c
	cc -c google.c -c main.o

clean:
	rm -f *.o google
