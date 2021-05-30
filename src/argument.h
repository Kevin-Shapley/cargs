#ifndef CARG_ARGUMENT_H
#define CARG_ARGUMENT_H

enum ArgType {
    Flag     = 0,
    Integer  = 1,
    String   = 2,

    TypeMax  = 3
};

typedef struct {
    enum ArgType  type;
    char*         flag;
    char*         sValue;
    int           dValue;
} Argument;

typedef struct {
    Argument*            arg;
    void* next;
} ArgumentNode, ArgumentConfig;

ArgumentConfig* add_arg(ArgumentConfig* config, Argument* arg, int* len);

void parse_args(ArgumentConfig* config, ArgumentNode* args, int argc, char** argv);
int  get_arg(ArgumentNode* args, char* flag, Argument* arg);

#endif // CARG_ARGUMENT_H