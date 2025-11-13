# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -Wall -std=c++11

# Output name
TARGET = main
# Output directory
BINDIR = bin
# Include directory
INCDIR = ../common

SRC = $(wildcard *.cpp)
HDR = $(wildcard *.h) $(wildcard $(INCDIR)/*.h)

$(BINDIR)/$(TARGET): $(SRC) $(HDR)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $(SRC) $(addprefix -I,$(INCDIR)) -o $@ -g

all: $(BINDIR)/$(TARGET)

clean:
	$(RM) -r $(BINDIR)
