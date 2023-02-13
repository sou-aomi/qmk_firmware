/* Copyright 2022 sou_aomi
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

#define LAYOUT( \
	L00, L01, L02, L03, L04,							R00, R01, R02, R03, R04,  \
	L10, L11, L12, L13, L14,							R10, R11, R12, R13, R14,  \
	L20, L21, L22, L23, L24,              R20, R21, R22, R23, R24,  \
	     L30,      L31, L32, L33,    R30, R31, R32,      R33       \
	) \
	{ \
		{ KC_NO, L04, L03, L02,   L01, L00 }, \
		{ KC_NO, L14, L13, L12,   L11, L10 }, \
		{ KC_NO, L24, L23, L22,   L21, L20 }, \
		{ L33,   L32, L31, KC_NO, L30, KC_NO }, \
		{ KC_NO, R00, R01, R02,   R03, R04 }, \
		{ KC_NO, R10, R11, R12,   R13, R14 }, \
		{ KC_NO, R20, R21, R22,   R23, R24 }, \
		{ R30,   R31, R32, KC_NO, R33, KC_NO }, \
	}
