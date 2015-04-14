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

#include "ccave.h"
#include "ccavetile.h"
#include "platform.h"

#ifdef PLATFORM_WIN32
#include "curses.h"
#else
#include <curses.h>
#endif

#include <stdlib.h>

/* w: width not including walls
 * h: height not including walls
 * x: x-coordinate of the cave (leftmost tile, not a wall)
 * y: y-coordinate of the cave (topmost tile, not a wall)
 */

CCave::CCave(int _w, int _h, int _x, int _y): w(_w), h(_h), x(_x), y(_y)
{
    /* Allocate memory for the tiles */
    tiles = new CCaveTile*[h];
    for (int i = 0; i < h; i++)
    {
        tiles[i] = new CCaveTile[w];
    }

    win = newwin(h+2, w+2, y-1, x-1);
}

CCave::~CCave()
{
    for (int i = 0; i < h; i++)
    {
        delete tiles[i];
    }
    delete tiles;

    delwin(win);
}

int CCave::draw()
{    
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            mvwaddch(win, i, j, tiles[i-1][j-1].content);
        }
    }

    box(win, 0, 0);
    wrefresh(win);
    return 0;
}
