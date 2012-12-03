CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -pedantic

entry_test: entry_test.cpp Entry.o
	$(CPP) $(CPPFLAGS) -o entry_test entry_test.cpp Entry.o

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CPPFLAGS) -c Entry.cpp

clean:
	rm -f *.o;
	rm -f entry_test;
	rm -f *~; 