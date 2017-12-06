CXX = g++
CFLAGS = -Wall
LDFLAGS = 

target = res
srcs = main.cpp
objs = $(srcs:.cpp=.o)

.PHONY: all
all: $(target)

$(target): $(objs) FORCE
	$(CXX) $(LDFLAGS) -o $(target) $(srcs)

$(objs):%.o:%.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

.PHONY: FROCE
FORCE:  

clean:
	rm -f $(target) *.o

