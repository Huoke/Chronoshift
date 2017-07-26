////////////////////////////////////////////////////////////////////////////////
//                            --  REDALERT++ --                               //
////////////////////////////////////////////////////////////////////////////////
//
//  Project Name:: Redalert++
//
//          File:: NEWDEL.H
//
//        Author:: tomsons26
//
//  Contributors:: OmniBlade
//
//   Description:: Custom memory allocators for new and delete.
//
//       License:: Redalert++ is free software: you can redistribute it and/or 
//                 modify it under the terms of the GNU General Public License 
//                 as published by the Free Software Foundation, either version 
//                 2 of the License, or (at your option) any later version.
//
//                 A full copy of the GNU General Public License can be found in
//                 LICENSE
//
////////////////////////////////////////////////////////////////////////////////
#pragma once

#ifndef NEWDEL_H
#define NEWDEL_H

void* operator new(unsigned int size);
void* operator new[](unsigned int size);
void operator delete(void* ptr);

#endif