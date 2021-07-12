all:
	mkdir quick/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r quick
run:
	cd quick && ./sort


