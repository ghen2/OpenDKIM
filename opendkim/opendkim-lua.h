/*
**  Copyright (c) 2009, The OpenDKIM Project.  All rights reserved.
**
**  $Id: opendkim-lua.h,v 1.1.2.1 2009/11/19 20:05:05 cm-msk Exp $
*/

#ifndef _OPENDKIM_LUA_H_
#define _OPENDKIM_LUA_H_

#ifndef lint
static char opendkim_lua_h_id[] = "@(#)$Id: opendkim-lua.h,v 1.1.2.1 2009/11/19 20:05:05 cm-msk Exp $";
#endif /* !lint */

/* system includes */
#include <sys/types.h>

/* libopendkim includes */
#include <dkim.h>

/* types */
struct dkimf_lua_sign_result
{
	_Bool	lrs_bodylength;
	char **	lrs_signkeys;
	char **	lrs_signdomains;
};

struct dkimf_lua_verify_result
{
	int	lrv_action;
	char *	lrv_message;
};

/* prototypes */
extern int dkimf_lua_sign_hook __P((void *, const char *,
                                    struct dkimf_lua_sign_result *));
extern int dkimf_lua_verify_hook __P((void *, DKIM *, const char *,
                                      struct dkimf_lua_verify_result *));

#endif /* _OPENDKIM_LUA_H_ */
