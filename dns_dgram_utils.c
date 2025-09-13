#include <arpa/inet.h>
#include <assert.h>
#include <netinet/in.h>
#include <stdint.h>
#include <sys/socket.h>
#include "dns_relay.h"
#include "dns_dgram_utils.h"

/*
    parse the domain name, type and class from question section of a dns datagram
    parameters:
        name: the resolved domain name
        question: other fields except domain name in question section
        buf: the pointer point to the begin of the dns datagram
*/
void parse_question_section(char *name, dns_question_t *question, const unsigned char *buf) {
    /* 
        TODO: implement this function 
    */
    return;
}

/**
    try to find answer to the domain name by reading the local host file
    parameters:
        ip: the ip in string format (eg. "192.168.1.1")
        name: the domain name try to answer
        question: other fields except domain name in question section
        file_path: the path to the local host file
    return:
        0 if no record, positive if any record
    note: supports one IP mapping to multiple domain names per line
*/
int try_answer_local(char ip[MAX_ANSWER_COUNT][MAX_IP_BUFFER_SIZE], const char *name, const char *file_path) {
    /* 
        TODO: implement this function 
    */
    return 0;
}

/**
    transform a dns request datagram to a dns response datagram
    parameters:
        buf: original dns request datagram
        len: original dns request datagram length
        ip: the the ip in string format (eg. "192.168.1.1")
        count: how many ip bind to this domain name
        question: other fields except domain name in question section
    return:
        length of the new dns response datagram
    note: do not need domain name, use domain name compression instead
 */
int transform_to_response(unsigned char *buf, int len, const char ip[MAX_ANSWER_COUNT][MAX_IP_BUFFER_SIZE], int count, const dns_question_t *question) {
    /* 
        TODO: implement this function 
    */
    return len;
}