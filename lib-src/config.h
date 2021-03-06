/* lib-src/config.h.  Generated automatically by configure.  */
/*
 * config.h
 *
 * Copyright (C) 1998 - 2000 Rasca, Berlin
 * EMail: thron@gmx.de
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __CONFIG_H__
#define __CONFIG_H__


/*
 * let configure do it's job
 */

#define HAVE_LIBGTK 1

#define HAVE_SETENV 1
#define HAVE_PUTENV 1

#define HAVE_GETOPT_H 1
#define HAVE_LIMITS_H 1

/*
 */
#ifdef HAVE_LIMITS_H
#include	<limits.h>
#endif

#ifndef PATH_MAX
#define PATH_MAX 4095 /* default for linux */
#endif

#ifndef NAME_MAX
#define NAME_MAX 255 /* default for linux */
#endif

typedef unsigned int __uint;

#ifndef mode_t
#define mode_t __uint
#endif

#ifndef uid_t
#define uid_t __uint
#endif

#ifndef gid_t
#define gid_t __uint
#endif

#ifndef SHELL
#define SHELL "/bin/sh"
#endif
#endif

