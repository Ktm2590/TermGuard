all:
	gcc -o tguard src/main.cpp -lstdc++
	install tguard ~/../usr/bin/
	rm tguard