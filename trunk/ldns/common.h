/*
 * common.h
 *
 * Common definitions for LDNS
 *
 * a Net::DNS like library for C
 *
 * (c) NLnet Labs, 2004
 *
 * See the file LICENSE for the license
 */

#ifndef _LDNS_COMMON_H
#define _LDNS_COMMON_H

#ifdef HAVE_STDBOOL_H
#include <stdbool.h>
#else

#ifndef __cplusplus

typedef unsigned char bool;
#define false 0
#define true  1

#endif /* !__cplusplus */

#endif /* !HAVE_STDBOOL_H */

#ifdef HAVE_ATTR_FORMAT
#define ATTR_FORMAT(archetype, string_index, first_to_check) \
    __attribute__ ((format (archetype, string_index, first_to_check)))
#else /* !HAVE_ATTR_FORMAT */
#define ATTR_FORMAT(archetype, string_index, first_to_check) /* empty */
#endif /* !HAVE_ATTR_FORMAT */

#if defined(__cplusplus)
#define ATTR_UNUSED(x)
#elif defined(HAVE_ATTR_UNUSED)
#define ATTR_UNUSED(x)  x __attribute__((unused))
#else /* !HAVE_ATTR_UNUSED */
#define ATTR_UNUSED(x)  x
#endif /* !HAVE_ATTR_UNUSED */

#endif /* !_LDNS_COMMON_H */
