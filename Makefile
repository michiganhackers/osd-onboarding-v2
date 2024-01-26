CC=g++
CC_FLAGS ?= -Wall -Werror -pedantic -g --std=c++17 -Wno-sign-compare -Wno-comment
PROJ=welcome

release: $(PROJ).cpp sort.cpp
	$(CC) -O2 -o $(PROJ) -std=c++17 $+

debug: $(PROJ).cpp sort.cpp
	$(CC) -g -o $(PROJ)_$@ -std=c++17 $+

test: tests.cpp sort.cpp
	$(CC) $(CC_FLAGS) tests.cpp sort.cpp -o test

clean:
	rm  -rfv $(PROJ) $(PROJ)_debug.dSYM $(PROJ)_debug
