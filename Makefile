CC=g++
PROJ=welcome

release: $(PROJ).cpp
	$(CC) -O2 -o $(PROJ) -std=c++17 $+

debug: $(PROJ).cpp
	$(CC) -g -o $(PROJ)_$@ -std=c++17 $+

clean:
	rm -v $(PROJ) $(PROJ)_debug
