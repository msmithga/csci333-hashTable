CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -pedantic

entry_test: entry_test.cpp Entry.o
	$(CPP) $(CPPFLAGS) -o entry_test entry_test.cpp Entry.o

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CPPFLAGS) -c Entry.cpp

hash_test: hash_test.cpp Hash.o
	$(CPP) $(CPPFLAGS) -o hash_test hast_test.cpp Hash.o

Hash.o: Hash.h Hash.cpp
	$(CPP) $(CPPFLAGS) -c Hash.cpp

clean:
	rm -f *.o;
	rm -f entry_test;
	rm -f hash_test;
	rm -f *~; 