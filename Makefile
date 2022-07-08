config.o:
	gcc -c config.c

foo.o:
	gcc -c foo.c

main.o:
	gcc -c main.c

main: main.o foo.o config.o
	gcc -Wl,--wrap=config_load -o main main.o foo.o config.o

clean:
	rm *.o main
