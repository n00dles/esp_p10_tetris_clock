// *********************************************************************
// Types and data that describes how numbers are drawed
// *********************************************************************

// Type that describes how a brick is falling down
typedef struct
{
  int blocktype;  // Number of the block type
  int color; // Color of the brick
  int x_pos;      // x-position (starting from the left number staring point) where the brick should be placed
  int y_stop;     // y-position (1-16, where 16 is the last line of the matrix) where the brick should stop falling
  int num_rot;    // Number of 90-degree (clockwise) rotations a brick is turned from the standard position
} fall_instr;

int xShiftClock[4] = {0, 7, 17, 24};

// *********************************************************************
// Fall instructions for all numbers
// *********************************************************************

// *********************************************************************
// Number 0
// *********************************************************************
#define SIZE_NUM_0 12
fall_instr num_0[SIZE_NUM_0] = {
    {2, 5, 4, 16, 0},
    {4, 7, 2, 16, 1},
    {3, 4, 0, 16, 1},
    {6, 6, 1, 16, 1},
    {5, 1, 4, 14, 0},
    {6, 6, 0, 13, 3},
    {5, 1, 4, 12, 0},
    {5, 1, 0, 11, 0},
    {6, 6, 4, 10, 1},
    {6, 6, 0, 9, 1},
    {5, 1, 1, 8, 1},
    {2, 5, 3, 8, 3}};

// *********************************************************************
// Number 1
// *********************************************************************
#define SIZE_NUM_1 5
fall_instr num_1[SIZE_NUM_1] = {
    {2, 5, 4, 16, 0},
    {3, 4, 4, 15, 1},
    {3, 4, 5, 13, 3},
    {2, 5, 4, 11, 2},
    {0, 0, 4, 8, 0}};

// *********************************************************************
// Number 2
// *********************************************************************
#define SIZE_NUM_2 11
fall_instr num_2[SIZE_NUM_2] = {
    {0, 0, 4, 16, 0},
    {3, 4, 0, 16, 1},
    {1, 2, 1, 16, 3},
    {1, 2, 1, 15, 0},
    {3, 4, 1, 12, 2},
    {1, 2, 0, 12, 1},
    {2, 5, 3, 12, 3},
    {0, 0, 4, 10, 0},
    {3, 4, 1, 8, 0},
    {2, 5, 3, 8, 3},
    {1, 2, 0, 8, 1}};

// *********************************************************************
// Number 3
// *********************************************************************
#define SIZE_NUM_3 11
fall_instr num_3[SIZE_NUM_3] = {
    {1, 2, 3, 16, 3},
    {2, 5, 0, 16, 1},
    {3, 4, 1, 15, 2},
    {0, 0, 4, 14, 0},
    {3, 4, 1, 12, 2},
    {1, 2, 0, 12, 1},
    {3, 4, 5, 12, 3},
    {2, 5, 3, 11, 0},
    {3, 4, 1, 8, 0},
    {1, 2, 0, 8, 1},
    {2, 5, 3, 8, 3}};

// *********************************************************************
// Number 4
// *********************************************************************
#define SIZE_NUM_4 9
fall_instr num_4[SIZE_NUM_4] = {
    {0, 0, 4, 16, 0},
    {0, 0, 4, 14, 0},
    {3, 4, 1, 12, 0},
    {1, 2, 0, 12, 1},
    {2, 5, 0, 10, 0},
    {2, 5, 3, 12, 3},
    {3, 4, 4, 10, 3},
    {2, 5, 0, 9, 2},
    {3, 4, 5, 10, 1}};

// *********************************************************************
// Number 5
// *********************************************************************
#define SIZE_NUM_5 11
fall_instr num_5[SIZE_NUM_5] = {
    {0, 0, 0, 16, 0},
    {2, 5, 2, 16, 1},
    {2, 5, 3, 15, 0},
    {3, 4, 5, 16, 1},
    {3, 4, 1, 12, 0},
    {1, 2, 0, 12, 1},
    {2, 5, 3, 12, 3},
    {0, 0, 0, 10, 0},
    {3, 4, 1, 8, 2},
    {1, 2, 0, 8, 1},
    {2, 5, 3, 8, 3}};

// *********************************************************************
// Number 6
// *********************************************************************
#define SIZE_NUM_6 12
fall_instr num_6[SIZE_NUM_6] = {
    {2, 5, 0, 16, 1},
    {5, 1, 2, 16, 1},
    {6, 6, 0, 15, 3},
    {6, 6, 4, 16, 3},
    {5, 1, 4, 14, 0},
    {3, 4, 1, 12, 2},
    {2, 5, 0, 13, 2},
    {3, 4, 2, 11, 0},
    {0, 0, 0, 10, 0},
    {3, 4, 1, 8, 0},
    {1, 2, 0, 8, 1},
    {2, 5, 3, 8, 3}};

// *********************************************************************
// Number 7
// *********************************************************************
#define SIZE_NUM_7 7
fall_instr num_7[SIZE_NUM_7] = {
    {0, 0, 4, 16, 0},
    {1, 2, 4, 14, 0},
    {3, 4, 5, 13, 1},
    {2, 5, 4, 11, 2},
    {3, 4, 1, 8, 2},
    {2, 5, 3, 8, 3},
    {1, 2, 0, 8, 1}};

// *********************************************************************
// Number 8
// *********************************************************************
#define SIZE_NUM_8 13
fall_instr num_8[SIZE_NUM_8] = {
    {3, 4, 1, 16, 0},
    {6, 6, 0, 16, 1},
    {3, 4, 5, 16, 1},
    {1, 2, 2, 15, 3},
    {4, 7, 0, 14, 0},
    {1, 2, 1, 12, 3},
    {6, 6, 4, 13, 1},
    {2, 5, 0, 11, 1},
    {4, 7, 0, 10, 0},
    {4, 7, 4, 11, 0},
    {5, 1, 0, 8, 1},
    {5, 1, 2, 8, 1},
    {1, 2, 4, 9, 2}};

// *********************************************************************
// Number 9
// *********************************************************************
#define SIZE_NUM_9 12
fall_instr num_9[SIZE_NUM_9] = {
    {0, 0, 0, 16, 0},
    {3, 4, 2, 16, 0},
    {1, 2, 2, 15, 3},
    {1, 2, 4, 15, 2},
    {3, 4, 1, 12, 2},
    {3, 4, 5, 12, 3},
    {5, 1, 0, 12, 0},
    {1, 2, 2, 11, 3},
    {5, 1, 4, 9, 0},
    {6, 6, 0, 10, 1},
    {5, 1, 0, 8, 1},
    {6, 6, 2, 8, 2}};

int blocksPerNumber[10] = {SIZE_NUM_0, SIZE_NUM_1, SIZE_NUM_2, SIZE_NUM_3, SIZE_NUM_4, SIZE_NUM_5, SIZE_NUM_6, SIZE_NUM_7, SIZE_NUM_8, SIZE_NUM_9};

// *********************************************************************
// Helper function that that return the falling instruction for a given number
// *********************************************************************
fall_instr getFallinstrByNum(int num, int blockindex)
{
  Serial.println("Getting");
  Serial.println(num);
  
  if (num == 0)
  {
    return num_0[blockindex];
  }
  if (num == 1)
  {
    return num_1[blockindex];
  }
  if (num == 2)
  {
    return num_2[blockindex];
  }
  if (num == 3)
  {
    return num_3[blockindex];
  }
  if (num == 4)
  {
    return num_4[blockindex];
  }
  if (num == 5)
  {
    return num_5[blockindex];
  }
  if (num == 6)
  {
    return num_6[blockindex];
  }
  if (num == 7)
  {
    return num_7[blockindex];
  }
  if (num == 8)
  {
    return num_8[blockindex];
  }
  if (num == 9)
  {
    return num_9[blockindex];
  }
}
