/* @(#) $Id$ */

/* Copyright (C) 2004-2008 Third Brigade, Inc.
 * All rights reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 3) as published by the FSF - Free Software
 * Foundation
 */


#ifndef _AGENTLESSDCONFIG_H
#define _AGENTLESSDCONFIG_H


/* Entry states. */
#define LESSD_STATE_CONNECTED   1
#define LESSD_STATE_PERIODIC    2


/* Structure for each entry. */
typedef struct _agentlessd_entries
{
    short int state;

    int frequency;
    int current_state;
    int port;
    int error_flag;
    
    char *type;
    char **server;
    char *options;
    char *command;
    
}agentlessd_entries;


/* Configuration structure. */   
typedef struct _agentlessd_config
{
    int queue;
    agentlessd_entries **entries;

}agentlessd_config;


#endif
