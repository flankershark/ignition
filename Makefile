#
# Makefile for project ignition
# project ignition, an instant messaging prototype
#
# ron
# Nov 21, 2016
#


CC = cc
CFLAGS = -Wall -g


OBJS += zero/zero.o echo/echo.o


TMPS += *~ zero/*~ echo/*~


BIN_ZERO = zero/zero
BIN_ECHO = echo/echo

OUTS += $(BIN_ZERO) $(BIN_ECHO)


build : $(OBJS) $(OUTS)


run : run_zero run_echo


run_zero : $(BIN_ZERO)
	$(BIN_ZERO)


run_echo : $(BIN_ECHO)
	$(BIN_ECHO)


stat :
	find `pwd` -name "*.[hc]" | xargs wc


$(OUTS) : %: %.o
	$(CC) $(CFLAGS) -o $@ $<


$(OBJS) : %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY : clean
clean :
	$(RM) $(OBJS) $(OUTS)
	$(RM) $(TMPS)


# <EOF> //:)~
