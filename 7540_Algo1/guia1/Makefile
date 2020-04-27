# makefile
all:

#	Compila la clase Persona
		g++ -c ./guia1.cpp
		g++ -c ./guia1_test.cpp
		g++ ./All_test.cpp guia1.o guia1_test.o /usr/local/lib/libgtest.a -o guia1_exe -fPIC -O2 -g -Wall -lpthread


	rm -r *.o
	#rm ./Calculator-program.bin
	