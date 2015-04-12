/**
 * @file
 * @brief A "floor tile" in the caves
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

#ifndef CCAVETILE_H
#define CCAVETILE_H

#include <string.h>

class CCaveTile
{
public:
    CCaveTile(): content(' '){}
    CCaveTile(char _content): content(_content){}

    char content;

private:

};

#endif // CCAVETILE_H
