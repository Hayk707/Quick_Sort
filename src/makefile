export EXE := sort
export C_FILES := $(wildcard *.cpp)
export O_FILES := $(patsubst %.cpp, %.o, $(C_FILES))

$(EXE) : $(O_FILES)
	g++ $^ -o ../quick/$@
%.o : %.cpp
	g++ -c $^ -o $@
clean :
	rm *.o 

