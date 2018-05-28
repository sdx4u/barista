/*
 * Copyright 2015-2018 NSSLab, KAIST
 */

/**
 * \defgroup compnt_shim
 * @{
 * \defgroup compnt_alt Component CLI Alternative
 * \brief Functions to convert CLI messages to logging messages
 * @{
 */

/**
 * \file
 * \author Jaehyun Nam <namjh@kaist.ac.kr>
 */

#include "cli.h"

int cli_print(cli_t *cli, char *buf)
{
    printf("%s\n", buf);

    return 0;
}