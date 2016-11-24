/*
 * echo.c
 * project ignition, an instant messaging prototype
 * echo, server simply replies whatever it receives
 *
 * ron
 * Nov 21, 2016
 */


#include <stdio.h>


int send_server(const char *from, const char *mesg) {
    /*
     * MAGIC:
     * receiving and processing the incoming message
     */

    /* reply an echo message to where it coming from */

    printf("server: %s (from %s)\n", mesg, from);

    return (0);
}


int send(const char *from, const char *mesg) {
    printf("%s: %s\n", from, mesg);

    send_server(from, mesg);

    return (0);
}


int main(int argc, char **argv) {
    send("alice", "Bonjour!");

    return (0);
}


/* //:)~ */
