TARGET="animation.c"
OUTPUT=animation

$(TARGET) : $(OUTPUT)
	gcc animation.c -o animation -lncurses
