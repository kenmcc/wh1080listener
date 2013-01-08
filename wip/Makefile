########################################
#
# Makefile for the weatherlogger
# 
#
#######################################

CC=gcc

INCLUDES = -I./include

SRCDIR:=src
SOURCES:=$(subst $(SRCDIR)/,,$(wildcard $(SRCDIR)/*.c))

OBJDIR:=objs
OBJS:=$(addprefix $(OBJDIR)/,$(SOURCES:.c=.o))



LIBFLAGS:=-lm

BIN=weatherlogger

all: $(OBJS) $(BIN)

$(BIN):
	@echo "---linking $(OBJS) ------"
	gcc $(OBJS)  $(LIBFLAGS) -o $(BIN)

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o:$(SRCDIR)/%.c
	@echo "-------Compiling $< -----"
	gcc -c $(INCLUDES) -o $@ $<

clean:
	@rm -rf $(OBJDIR)
	@rm -rf $(BIN)
	

#objs/wh1080_rf.o:src/wh1080_rf.c 
#	@echo "Making $<"
#	gcc -o $@ $<

