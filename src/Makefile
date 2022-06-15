CC	=	gcc
TARGET	=	cheer
SRCS	=	main.c	print_frame.c	clear_frame.c
OBJS	=	$(SRCS:.c=.o)
INCDIR	=	-I./

$(TARGET):	$(OBJS)
		$(CC)	-o	$@	$^

$(OBJS):	$(SRCS)
		$(CC)	$(INCDIR)	-c	$(SRCS)

all:	clean	$(OBJS)	$(TARGET)

clean:
		-rm	-f	$(OBJS)	$(TARGET)