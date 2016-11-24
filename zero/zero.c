/*
 * zero.c
 * project ignition, an instant messaging prototype
 * zero, starting with the most straightforward function, send()
 *
 * ron
 * Nov 21, 2016
 */


#include <stdio.h>


int send(const char *from, const char *mesg) {
    printf("%s: %s\n", from, mesg);

    return (0);
}


int main(int argc, char **argv) {
    send("alice", "hi");
    send("bob", "hello");

    return (0);
}


/* //:)~ */
