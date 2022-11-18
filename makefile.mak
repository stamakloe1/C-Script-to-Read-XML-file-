all: myapp.exe
myapp.exe: myapp.o
        gcc -o myapp.exe myapp.o
myapp.o: myapp.cpp
        gcc -c myapp.cpp
clean:
        rm myapp.o myapp.exe
