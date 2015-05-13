all:
	g++ -o deli -m32 dthreads.o deli.cc libinterrupt.a -ldl
clean:
	rm -f deli