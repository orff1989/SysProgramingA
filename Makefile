CC = gcc
OBJECT_LOOP = advancedClassificationLoop.c basicClassification.c
OBJECT_REC = advancedClassificationRecursion.c basicClassification.c
OBJECTS_MAIN = main.c
FLAGS = -t -Wall -g

loop: $(OBJECT_LOOP)
	ar -rcs libclassloops.a $(OBJECT_LOOP)

recursives: $(OBJECT_REC)
	ar -rcs libclassrec.a $(OBJECT_REC)

recursived: $(OBJECT_REC) 
	$(CC) -shared -o libclassrec.so $(OBJECT_REC)

loopd: $(OBJECT_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECT_LOOP)

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a

maindloop: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so 

maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) libclassrec.so

all: loop recursives recursived loopd mains maindloop maindrec

clean:
	rm -f *.o *.a *.so loop recursives
