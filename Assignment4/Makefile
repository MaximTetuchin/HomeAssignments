TARGET = testCheck
CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -I./ -pthread

SRCS = Artillery.cpp \
       PowerCore.cpp \
       Scouts.cpp \
       Soldiers.cpp \
       Status.cpp \
       Transformer.cpp \
       TransformerGettersAndSetters.cpp \
       test_artillery.cpp \
       test_scouts.cpp \
       test_soldiers.cpp \
       test_transformer.cpp

HEADERS = Artillery.h \
          PowerCore.h \
          Scouts.h \
          Soldiers.h \
          Status.h \
          Transformer.h

OBJS = $(SRCS:.cpp=.o)

LIBS = -lgtest -lgtest_main

.PHONY: default
default: all

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(LIBS)

all: $(TARGET)

test: $(TARGET)
	./$(TARGET)

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: cleanall
cleanall: clean
	rm -f $(TARGET)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)
