CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -I./ -pthread

# Разделение исходных файлов для примера и тестов
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

# Заголовочные файлы
HEADERS = Artillery.h \
          PowerCore.h \
          Scouts.h \
          Soldiers.h \
          Status.h \
          Transformer.h

# Объектные файлы
OBJS_TEST = $(SRCS_TEST:.cpp=.o)
OBJS_EXAMPLE = $(SRCS_EXAMPLE:.cpp=.o)

# Библиотеки для тестов
LIBS = -lgtest -lgtest_main

# Цели
.PHONY: default
default: all

# Компиляция примера
example: $(OBJS_EXAMPLE)
	$(CXX) $(CXXFLAGS) -o example $(OBJS_EXAMPLE)

# Компиляция тестов
test: $(OBJS_TEST)
	$(CXX) $(CXXFLAGS) -o testCheck $(OBJS_TEST) $(LIBS)

# Компиляция объектных файлов
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Очистка объектных файлов и бинарников
.PHONY: clean
clean:
	rm -f $(OBJS_TEST) $(OBJS_EXAMPLE)

.PHONY: cleanall
cleanall: clean
	rm -f testCheck example
