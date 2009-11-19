/*
**  Copyright (c) 2009, The OpenDKIM Project.  All rights reserved.
**
**  $Id: opendkim-lua.c,v 1.1.2.1 2009/11/19 20:05:05 cm-msk Exp $
*/

#ifndef lint
static char opendkim_lua_c_id[] = "@(#)$Id: opendkim-lua.c,v 1.1.2.1 2009/11/19 20:05:05 cm-msk Exp $";
#endif /* !lint */

#ifdef _FFR_LUA

/* system includes */
#include <sys/types.h>
#include <assert.h>

/* LUA includes */
#include <lua.h>

/* libopendkim includes */
#include <dkim.h>

/* opendkim includes */
#include "opendkim-lua.h"
#include "opendkim-db.h"
#include "opendkim.h"

/*
**  DKIMF_LUA_SIGN_HOOK -- hook to LUA for handling a message while signing
**
**  Parameters:
**  	ctx -- session context, for making calls back to opendkim.c
**  	script -- script to run
**  	lres -- LUA result structure
**
**  Return value:
**  	0 -- success
**  	-1 -- failure
**
**  Side effects:
**  	lres may be modified to relay the script's signing requests, i.e.
**  	which key/selector(s) to use, whether to use "l=", etc.
** 
**  Notes:
**  	Called by mlfi_eoh() so it can decide what signature(s) to apply.
**
**  	Will require the ability to access databases, i.e. the
**  	dkimf_db_*() functions and the "conf" handle that contains
**  	references to available databases.  opendkim.c will need to export
**  	some functions for getting DB handles for this purpose.
*/

int
dkimf_lua_sign_hook(void *ctx, const char *script,
                    struct dkimf_lua_sign_result *lres)
{
	assert(ctx != NULL);
	assert(script != NULL);
	assert(lres != NULL);
}

/*
**  DKIMF_LUA_VERIFY_HOOK -- hook to LUA for handling a message while signing
**
**  Parameters:
**  	ctx -- session context, for making calls back to opendkim.c
**  	dkim -- DKIM verifying handle
**  	script -- script to run
**  	lres -- LUA result structure
**
**  Return value:
**  	0 -- success
**  	-1 -- failure
**
**  Notes:
**  	Called by mlfi_eom() so it can decide whether or not the message
**  	is acceptable.
**
**  	Will require the ability to access databases, i.e. the
**  	dkimf_db_*() functions and the "conf" handle that contains
**  	references to available databases.  opendkim.c will need to export
**  	some functions for getting DB handles for this purpose.
*/

int
dkimf_lua_verify_hook(void *ctx, DKIM *dkim, const char *script,
                      struct dkimf_lua_verify_result *lres)
{
	assert(ctx != NULL);
	assert(dkim != NULL);
	assert(script != NULL);
	assert(lres != NULL);
}

#endif /* _FFR_LUA */
