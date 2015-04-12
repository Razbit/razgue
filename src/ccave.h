/**
 * @file
 * @brief A class describing a cave
 * @author Eetu "Razbit" Pesonen
 * @version 0.01
 * @date 2015
 * @copyright Eetu "Razbit" Pesonen, distributed under the GNU GPL 2
**/

/* Copyright (C) 2015  Eetu "Razbit" Pesonen
 *
 * This file is part of Razgue.
 *
 * Razgue is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * Razgue is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Razgue.  If not, see <http://www.gnu.org/licenses/>.
**/

#ifndef CCAVE_H
#define CCAVE_H

#include "ccavetile.h"

#include "platform.h"

#ifdef PLATFORM_WIN32
#include "curses.h"
#else
#include <curses.h>
#endif

#include <string.h>

class CCave
{
public:
    /* w: width not including walls
     * h: height not including walls
     * x: x-coordinate of the cave (leftmost tile, not a wall)
     * y: y-coordinate of the cave (topmost tile, not a wall)
     */
    CCave(int _w, int _h, int _x, int _y);
    virtual ~CCave();

    /* Draws the cave on the screen */
    int draw();

    int w, h;
    int x, y;
    CCaveTile** tiles;
    WINDOW* win;
};

#endif // CCAVE_H
