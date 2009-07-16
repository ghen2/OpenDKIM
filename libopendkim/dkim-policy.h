/*
**  Copyright (c) 2007 Sendmail, Inc. and its suppliers.
**    All rights reserved.
**
**  Copyright (c) 2009, The OpenDKIM Project.  All rights reserved.
*/

#ifndef _DKIM_POLICY_H_
#define _DKIM_POLICY_H_

#ifndef lint
static char dkim_policy_h_id[] = "@(#)$Id: dkim-policy.h,v 1.1 2009/07/16 19:12:03 cm-msk Exp $";
#endif /* !lint */

/* libdkim includes */
#include "dkim.h"

/* prototypes */
extern int dkim_get_policy_dns __P((DKIM *, u_char *, bool, u_char *,
                                    size_t, int *));
extern int dkim_get_policy_file __P((DKIM *, u_char *, u_char *,
                                     size_t, int *));

#endif /* ! _DKIM_POLICY_H_ */
