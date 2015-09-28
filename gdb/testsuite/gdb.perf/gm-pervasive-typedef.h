/* Copyright (C) 2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* This file is used to create the conditions for the perf regression
   in pr 16253.  */

#ifndef GM_PERVASIVE_TYPEDEF_H
#define GM_PERVASIVE_TYPEDEF_H

typedef int my_int;

static my_int
use_my_int (my_int x)
{
  return x + 1;
}

#endif /* GM_PERVASIVE_TYPEDEF_H */
