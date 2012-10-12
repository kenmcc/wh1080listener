########################################
#
# Makefile for the weatherlogger
# 
#
#######################################

CC=g++

INCLUDES = -I./includes -I/usr/include/boost

SRCDIR:=src
SOURCES:=$(subst $(SRCDIR)/,,$(wildcard $(SRCDIR)/*.cpp))

OBJDIR:=objs
OBJS:=$(addprefix $(OBJDIR)/,$(SOURCES:.cpp=.o))


LIBS+=-L/usr/lib64
LIBFLAGS:=-lm -lboost_program_options

BIN=weatherlogger

all: $(OBJS) $(BIN)

$(BIN):
	@echo "---linking $(OBJS) ------"
	$(CC) $(OBJS) $(LIBS) $(LIBFLAGS) -o $(BIN)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o:$(SRCDIR)/%.cpp
	@echo "-------Compiling $< -----"
	$(CC) -c $(INCLUDES) -o $@ $<

clean:
	@rm -rf $(OBJDIR)
	@rm -rf $(BIN)
	

#objs/wh1080_rf.o:src/wh1080_rf.c 
#	@echo "Making $<"
#	gcc -o $@ $<

