CC=gcc
CFLAGS=-I. -Wall -fPIC
OBJS = power.o basicMath.o 
MAIN_O = main.o
RM = rm
.PHONY:clean all

all: maind mains

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

libmyMath.so: $(OBJS)
	$(CC) -shared -o $@ $^

libmyMath.a: $(OBJS)
	ar rcs $@ $^

mymaths: libmyMath.a

mymathd: libmyMath.so

mains: libmyMath.a $(MAIN_O)
	$(CC) -o $@ $(MAIN_O) libmyMath.a

maind: libmyMath.so $(MAIN_O)
	$(CC) -o $@ $(MAIN_O) ./libmyMath.so

clean:
	$(RM) -rf *.o maind mains libmyMath.a libmyMath.so



