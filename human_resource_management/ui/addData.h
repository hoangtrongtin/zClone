#ifndef ui_addData_H_
#define ui_addData_H_

#include <iostream>
#include <string>
#include <fstream>
#include "../DataTable.h"

class addData{
private:
public:
    addData();
    void AddToTable(DataTable* data);// add new data to file
};

#endif