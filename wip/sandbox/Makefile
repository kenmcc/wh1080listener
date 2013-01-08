########################################
#
# Makefile for the weatherlogger
# 
#
#######################################

CC=g++

INCLUDES = -I./includes -I/dubfiler2/users/ken.mccullagh/sandbox/weather/wh1080listener/boost/boost_1_51_0


SRCDIR:=src
SOURCES:=$(subst $(SRCDIR)/,,$(wildcard $(SRCDIR)/*.cpp))

OBJDIR:=objs
OBJS:=$(addprefix $(OBJDIR)/,$(SOURCES:.cpp=.o))


LIBS+=-L/dubfiler2/users/ken.mccullagh/sandbox/weather/wh1080listener/boost/boost_1_51_0/stage/lib
LIBFLAGS:=-static -lboost_program_options -lm

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
	


