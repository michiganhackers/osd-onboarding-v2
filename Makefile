<<<<<<< HEAD
CC=g++
PROJ=welcome

release: $(PROJ).cpp sort.cpp
	$(CC) -O2 -o $(PROJ) -std=c++17 $+

debug: $(PROJ).cpp sort.cpp
	$(CC) -g -o $(PROJ)_$@ -std=c++17 $+

clean:
	rm -v $(PROJ) $(PROJ)_debug
=======
CC=g++
PROJ=welcome

release: $(PROJ).cpp sort.cpp
	$(CC) -O2 -o $(PROJ) -std=c++17 $+

debug: $(PROJ).cpp sort.cpp
	$(CC) -g -o $(PROJ)_$@ -std=c++17 $+

clean:
	rm  -fv $(PROJ) $(PROJ)_debug
>>>>>>> 805ad170938aeeb4df0491a845fa7d7d19ab2c64
