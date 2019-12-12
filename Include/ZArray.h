#ifndef __ZARRAY_H_INCLUDED__
#define __ZARRAY_H_INCLUDED__

#include<array>
#include<math.h>


using namespace std;

class ZArray {

public:
    // Constructor and Destructor functions
    ZArray(); 
    ZArray(int i);
    ZArray(int i, int j);
    ~ZArray();
    // Initialization functions
    uint8_t BlankArray(); 
    uint8_t RandomArray();
    
    // Output functions
    float GeneratePlot(uint8_t array);
    void ShowPlot(uint8_t array);
    void SavePlot(uint8_t array);

    //May need to add get_well and set_well methods later, not sure if I'll be able to use random assignment
    //Also may need to add a growing command here, i.e. have substantiated a new object and fill it in with values

private:
    int rows {0};
    int cols {0}; 
    uint8_t** array;  //** means it's dynamically allocated (really just defining the pointer I think)
};

#endif