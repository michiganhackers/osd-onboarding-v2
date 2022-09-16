CC=g++
PROJ=welcome

release: $(PROJ).cpp sort.cpp
	$(CC) -O2 -o $(PROJ) -std=c++17 $+

debug: $(PROJ).cpp sort.cpp
	$(CC) -g -o $(PROJ)_$@ -std=c++17 $+

clean:
	rm  -fv $(PROJ) $(PROJ)_debug
