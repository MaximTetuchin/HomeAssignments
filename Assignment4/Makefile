TARGET = testCheck

CXX = g++
CXXFLAGS = -Wall -I./ -pthread

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

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

test: $(TARGET)
	./$(TARGET)
