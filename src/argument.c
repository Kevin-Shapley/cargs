#include "argument.h"

#include <stdlib.h>
#include <stdio.h>

ArgumentConfig* add_arg(ArgumentConfig* config, Argument* arg, int* len) {
    ArgumentConfig* head = config;
    *len = 1;

    if(!config) {
        config = (ArgumentConfig*) malloc(sizeof(ArgumentConfig));
        config->arg = (Argument*) malloc(sizeof(Argument));
        config->next = NULL;
        config->arg->type = arg->type;
        config->arg->flag = arg->flag;
        return config;
    }

    ++(*len);
    while(config->next) {
        config = config->next;
        ++(*len);
    }

    // Create next node
    config->next = (ArgumentConfig*) malloc(sizeof(ArgumentConfig));
    config = config->next;
    config->next = NULL;

    config->arg = (Argument*) malloc(sizeof(Argument));
    config->arg->type = arg->type;
    config->arg->flag = arg->flag;

    return head;
}

void parse_args(ArgumentConfig* config, ArgumentNode* args, int argc, char** argv) {
    int i;
    for(i=0; i<argc; ++i) {

    }
}

int get_arg(ArgumentNode* args, char* flag, Argument* arg) {
    printf("Get Arg\r\n");
}