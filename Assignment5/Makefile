CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -I./ -pthread
GTEST_LIB = -lgtest -lgtest_main

SRCS_EXAMPLE = MyDebugFile.cpp \
              Artillery.cpp \
              PowerCore.cpp \
              Scouts.cpp \
              Soldiers.cpp \
              Status.cpp \
              Transformer.cpp \
              TransformerGettersAndSetters.cpp

TEST_SRCS = virtual_methods_test.cpp

HEADERS = Artillery.h \
          PowerCore.h \
          Scouts.h \
          Soldiers.h \
          Status.h \
          Transformer.h

OBJS_EXAMPLE = $(SRCS_EXAMPLE:.cpp=.o)
OBJS_TEST = $(TEST_SRCS:.cpp=.o)

.PHONY: default
default: example

example: $(OBJS_EXAMPLE)
	$(CXX) $(CXXFLAGS) -o example $(OBJS_EXAMPLE)

test: $(OBJS_TEST) $(filter-out MyDebugFile.o, $(OBJS_EXAMPLE))
	$(CXX) $(CXXFLAGS) -o runTests $(OBJS_TEST) $(filter-out MyDebugFile.o, $(OBJS_EXAMPLE)) $(GTEST_LIB)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJS_EXAMPLE) $(OBJS_TEST) example runTests
