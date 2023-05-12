/* Copyright 2023 DmNosachev
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* readability */
#define XXX KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

/*
 * ,------------------------------------------------------------------------------------.
 * | ~ ` |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  Bsp |
 * |------------------------------------------------------------------------------------|
 * |  Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |Ent |
 * |-------------------------------------------------------------------------------'    |
 * |  Caps  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;: |  '" |  \  |   |
 * |------------------------------------------------------------------------------------|
 * |Shift |  \  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /? |   Shift   |
 * '------------------------------------------------------------------------------------'
 *       | Opt |   Cmd   |                 Space                   |   Cmd   | Opt |
 *       `-------------------------------------------------------------------------'
*/


#define LAYOUT( \
	K00, K01, K02, K03, K04, K05, \
	K10, K11, K12, K13, K14, K15, \
	K20, K21, K22, K23, K24, K25, \
	K30, K31, K32, K33, K34, K35, \
	K40, K41, K42, K43, K44, K45, \
	K50, K51, K52, K53, K54, K55, \
	K60, K61, K62, K63, K64, K65, \
	K70, K71, K72, K73, K74, K75, \
	K80, K81, K82, K83, K84, K85, \
  K90, K91, K92, K93, K94, K95  \
) \
{ \
/* 0 */  { K00, K01, K02, K03, K04, K05 }, \
/* 1 */  { K10, K11, K12, K13, K14, K15 }, \
/* 2 */  { K20, K21, K22, K23, K24, K25 }, \
/* 3 */  { K30, K31, K32, K33, K34, K35 }, \
/* 4 */  { K40, K41, K42, K43, K44, K45 }, \
/* 5 */  { K50, K51, K52, K53, K54, K55 }, \
/* 6 */  { K60, K61, K62, K63, K64, K65 }, \
/* 7 */  { K70, K71, K72, K73, K74, K75 }, \
/* 8 */  { K80, K81, K82, K83, K84, K85 },  \
/* 9 */  { K90, K91, K92, K93, K94, K95 }  \
}
/*          0    1    2    3    4    5    */

#define LAYOUT_debug( \
	K00, K01, K02, K03, K04, K05, \
	K10, K11, K12, K13, K14, K15, \
	K20, K21, K22, K23, K24, K25, \
	K30, K31, K32, K33, K34, K35, \
	K40, K41, K42, K43, K44, K45, \
	K50, K51, K52, K53, K54, K55, \
	K60, K61, K62, K63, K64, K65, \
	K70, K71, K72, K73, K74, K75, \
	K80, K81, K82, K83, K84, K85, \
  K90, K91, K92, K93, K94, K95  \
) \
{ \
/* 0 */  { K00, K01, K02, K03, K04, K05 }, \
/* 1 */  { K10, K11, K12, K13, K14, K15 }, \
/* 2 */  { K20, K21, K22, K23, K24, K25 }, \
/* 3 */  { K30, K31, K32, K33, K34, K35 }, \
/* 4 */  { K40, K41, K42, K43, K44, K45 }, \
/* 5 */  { K50, K51, K52, K53, K54, K55 }, \
/* 6 */  { K60, K61, K62, K63, K64, K65 }, \
/* 7 */  { K70, K71, K72, K73, K74, K75 }, \
/* 8 */  { K80, K81, K82, K83, K84, K85 },  \
/* 9 */  { K90, K91, K92, K93, K94, K95 }  \
}
/*          0    1    2    3    4    5    */

