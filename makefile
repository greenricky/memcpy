OBJS = memcpy.o \
       main.o

TARGET = run

CFLAGS = -g

all: $(TARGET)

$(TARGET): $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	gcc $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
