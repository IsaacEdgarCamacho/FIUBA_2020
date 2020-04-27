
# A partir del ejercicio 9 todos los mismos seran resueltos usando TDD y test unitarios
# makefile
all:

#	Compila la clase Persona
		g++ -c ./guia3.cpp
		g++ -c ./guia3_test.cpp
		g++ ./All_test.cpp guia3.o guia3_test.o /usr/lib/libgtest.a -o guia3_exe -fPIC -O2 -g -Wall -lpthread


	rm -r *.o
	#rm ./Calculator-program.bin
	