VPATH = source

run:main.o fullarray.o
	g++ -o run main.o fullarray.o
