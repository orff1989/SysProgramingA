CC = gcc
OBJECT_LOOP = advancedClassificationLoop.c basicClassification.c
OBJECT_REC = advancedClassificationRecursion.c basicClassification.c
FLAGS = -Wall -g -lm

loop: $(OBJECT_LOOP)
	ar -rcs -lm libclassloops.a $(OBJECT_LOOP)

recursives:$(OBJECT_REC)
	ar -rcs -lm libclassrec.a $(OBJECT_REC)

recursived:$(OBJECT_REC) 
	$(CC) -shared -o -lm libclassrec.so $(OBJECT_REC)

loopd:$(OBJECT_LOOP)
	$(CC) -shared -o -lm libclassloops.so $(OBJECT_LOOP)

mains: main.c recursives
	$(CC) $(FLAGS) -o mains main.c ./recursives

maindloop: main.c loopd
	$(CC) $(FLAGS) -o maindloop main.c loopd 

maindrec: main.c 
	$(CC) $(FLAGS) -o maindrec main.c recursived

all: ./loop ./recursives ./recursived ./loopd ./mains ./maindloop ./maindrec

clean:
	rm -f *.o *.a *.so loop recursives
