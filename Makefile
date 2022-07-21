CC=g++
PROJ=welcome
Que=paneraQueue

release: $(PROJ).cpp $(Que).cpp
	$(CC) -O2 -o program -std=c++17 $+

debug: $(PROJ).cpp $(Que).cpp
	$(CC) -g -o $(PROJ)_$@ -std=c++17 $+
	$(CC) -g -o $(Que)_$@ -std=c++17 $+

clean:
	rm -v program
	rm -v *.o
	rm -v *_debug

