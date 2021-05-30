#include "cargs.h"

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
    ArgumentConfig* config = NULL;
    Argument arg;
    int length;

    ArgumentNode* args;

    arg.type = Flag;
    arg.flag = "-d";

    config = add_arg(config, &arg, &length);
    
    arg.type = Flag;
    arg.flag = "-c";

    config = add_arg(config, &arg, &length);

    parse_args(config, args, argc, argv);

    get_arg(args, "-d", &arg);

    return 0;
}