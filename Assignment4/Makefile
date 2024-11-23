CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -I./ -pthread

SRCS_TEST = test_artillery.cpp \
       test_scouts.cpp \
       test_soldiers.cpp \
       test_transformer.cpp \
       Artillery.cpp \
       PowerCore.cpp \
       Scouts.cpp \
       Soldiers.cpp \
       Status.cpp \
       Transformer.cpp \
       TransformerGettersAndSetters.cpp

SRCS_EXAMPLE = MyDebugFile.cpp \
              Artillery.cpp \
              PowerCore.cpp \
              Scouts.cpp \
              Soldiers.cpp \
              Status.cpp \
              Transformer.cpp \
              TransformerGettersAndSetters.cpp

HEADERS = Artillery.h \
          PowerCore.h \
          Scouts.h \
          Soldiers.h \
          Status.h \
          Transformer.h

OBJS_TEST = $(SRCS_TEST:.cpp=.o)
OBJS_EXAMPLE = $(SRCS_EXAMPLE:.cpp=.o)

LIBS = -lgtest -lgtest_main

.PHONY: default
default: all

example: $(OBJS_EXAMPLE)
	$(CXX) $(CXXFLAGS) -o example $(OBJS_EXAMPLE)

test: $(OBJS_TEST)
	$(CXX) $(CXXFLAGS) -o testCheck $(OBJS_TEST) $(LIBS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<


.PHONY: clean
clean:
	rm -f $(OBJS_TEST) $(OBJS_EXAMPLE) testCheck example

