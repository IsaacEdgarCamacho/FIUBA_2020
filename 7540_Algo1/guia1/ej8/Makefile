# makefile
all:

#	Compila la clase Persona
		g++ -c ./model/ej8.c
		g++ -c ./test/ej8_test.cpp
		g++ ./test/All_test.cpp ej8.o ej8_test.o /usr/lib/libgtest.a -o ej8_exe -fPIC -O2 -g -Wall -lpthread


	rm -r *.o
	#rm ./Calculator-program.bin
	