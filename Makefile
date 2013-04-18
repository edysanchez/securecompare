all: bin/securecompare
bin/securecompare:tmp/securecompare.o
		gcc tmp/securecompare.o -o bin/securecompare
tmp/securecompare.o:src/securecompare.c
		gcc -c src/securecompare.c -o tmp/securecompare.o
clean:
		rm tmp/*
