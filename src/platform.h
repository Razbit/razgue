/**
 * @file
 * @brief Macros for easily determining the platform.
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


#ifndef PLATFORM_H
#define PLATFORM_H

#if defined linux || defined __linux__ || defined __linux
#define PLATFORM_LINUX
#define PLATFORM_NAME "Linux"

#elif defined _WIN32 || defined WIN32 || defined __NT__ || defined __WIN32__
#define PLATFORM_WIN32
#define PLATFORM_NAME "Windows"

#elif (defined __MWERKS__ && defined __powerc && !defined macintosh) || defined __APPLE_CC__ || defined macosx
#define PLATFORM_OSX
#define PLATFORM_NAME "MacOS X"
#endif


#endif // PLATFORM_H
