CC = gcc
CFLAGS = -I/usr/local/include/SDL3 -DSDL_MAIN_HANDLED
LDFLAGS = -L/usr/local/lib -lSDL3
SRC = main.c
OUT = gummyBear

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) -o $(OUT)

run: $(OUT)
	./$(OUT)

clean:
	rm -f $(OUT)
