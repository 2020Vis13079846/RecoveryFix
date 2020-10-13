CC      = gcc
CFLAGS  = 

LDFLAGS = ligate -lusb-1.0

TARGET  = fix
Q       = @

all: fix

fix:
	$(Q) $(CC) main.c -o $(TARGET) $(CFLAGS) $(LDFLAGS)
