# static
# program_NAME := lib/libbazinga.a
# shared
program_NAME := lib/libbazinga.so

program_CXX_SRCS := $(wildcard src/*.cpp)
program_CXX_OBJS := ${program_CXX_SRCS:.cpp=.o}
program_OBJS := $(program_CXX_OBJS)
program_INCLUDE_DIRS := $(BAZINGA_DIR)/include
program_LIBRARY_DIRS :=
program_LIBRARIES :=

CXX := g++

# static
CPPFLAGS +=
# shared
CPPFLAGS += -fPIC

CPPFLAGS += $(foreach includedir,$(program_INCLUDE_DIRS),-I$(includedir)) 

LDFLAGS += $(shell pkg-config --libs gsl)
LDFLAGS += -shared
LDFLAGS += $(foreach librarydir,$(program_LIBRARY_DIRS),-L$(librarydir))
LDFLAGS += $(foreach library,$(program_LIBRARIES),-l$(library))

.PHONY: all clean

all: $(program_NAME) dir

dir:
	mkdir lib

# static
#$(program_NAME): $(program_OBJS) dir
#	ar -cvq $(program_NAME) $(program_OBJS)

# shared
$(program_NAME): $(program_OBJS) dir
	$(CXX) $(LDFLAGS) -o $(program_NAME) $(program_OBJS)

clean:
	@- $(RM) $(program_NAME)
	@- $(RM) $(program_OBJS)
	@- $(RM) -rf lib
