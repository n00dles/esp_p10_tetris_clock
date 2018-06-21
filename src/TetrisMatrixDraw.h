/*
Copyright (c) 2018 Tobias Blum . All right reserved.

Tetris Matrix Clock

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.
You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/


#ifndef TetrisMatrixDraw_h
#define TetrisMatrixDraw_h

#include <Arduino.h>
#include "Adafruit_GFX.h"

#define TETRIS_MAX_NUMBERS 9

#define TETRIS_DISTANCE_BETWEEN_DIGITS 7

// Type that describes the current state of a drawn number
typedef struct
{
  int num_to_draw; // Number to draw (0-9)
  int blockindex;  // The index of the brick (as defined in the falling instructions) that is currently falling
  int fallindex;   // y-position of the brick it already has (incrementing with each step)
  int x_shift;     // x-position of the number relative to the matrix where the number should be placed.
} numstate;

class TetrisMatrixDraw
{
    public:
        TetrisMatrixDraw (Adafruit_GFX  &display);
        Adafruit_GFX  *display;
        void drawNumbers(int x = 0, int y = 0, bool displayColon = false);
        void drawText(int x = 0, int y = 0);
        void drawChar(String letter, uint8_t x, uint8_t y, uint16_t color);
        void drawShape(int blocktype, uint16_t color, int x_pos, int y_pos, int num_rot);
        void setTime(String time);
        void setNumbers(int value);
        void setNumState(int index, int value, int x_shift);
        void setText(String txt);
        bool _debug = false;
        uint16_t tetrisColors[9];
        uint16_t tetrisRED;
        uint16_t tetrisGREEN;
        uint16_t tetrisBLUE;
        uint16_t tetrisWHITE;
        uint16_t tetrisYELLOW;
        uint16_t tetrisCYAN;
        uint16_t tetrisMAGENTA;
        uint16_t tetrisORANGE;
        uint16_t tetrisBLACK;

    private:
        void intialiseColors();
        // void clearNumStates();
        numstate numstates[TETRIS_MAX_NUMBERS];
        int sizeOfValue;
};

#endif