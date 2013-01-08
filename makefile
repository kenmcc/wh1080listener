########################################
#
# Makefile for the weatherlogger
# 
#
#######################################

CC=gcc

INCLUDES = -I.

SRCDIR:=.
SOURCES:=$(subst $(SRCDIR)/,,$(wildcard $(SRCDIR)/*.c))

OBJDIR:=objs
OBJS:=$(addprefix $(OBJDIR)/,$(SOURCES:.c=.o))



LIBFLAGS:=-lm -lsqlite3

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

