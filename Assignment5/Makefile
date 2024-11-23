CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -I./ -pthread

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

OBJS_EXAMPLE = $(SRCS_EXAMPLE:.cpp=.o)

.PHONY: default
default: example 

example: $(OBJS_EXAMPLE)
	$(CXX) $(CXXFLAGS) -o example $(OBJS_EXAMPLE)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJS_EXAMPLE) example
