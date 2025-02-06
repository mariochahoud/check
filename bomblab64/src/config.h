/*
 * config.h - Configuration info for the bomb's automatic notification feature
 */
#ifndef __CONFIG_H__
#define __CONFIG_H__

/*
 * We don't want copies of bombs from all over the world contacting 
 * our server, so restrict bomb execution to one of the machines on 
 * the following NULL-terminated comma-separated list:
 */
char *host_table[128] = {

    /* Put your host names here */
    /*"m-dclap-p302-csd.abudhabi.nyu.edu",*/
      "cso-vm","cso-virtual-machine",
    0 /* The zero terminates the list */
};


#endif /* __CONFIG_H__ */

