
#include <iostream>
#include <fstream>
#include <sys/stat.h>

//#include "libdxfrw.h"

#include "dx_iface.h"
#include "dx_data.h"

using namespace std;

int main()
{
    std::cout << "start \n" ;

    bool badState = false;
    //verify if input file exist
    std::ifstream ifs;

//    std::string name{ "example_2004.dxf" };
    std::string name{ "AUTOCADhely.dxf" };

    ifs.open (name.data(), std::ifstream::in);
    badState = ifs.fail();
    std::cout << "badState: " << badState << '\n';
    ifs.close();

    if(badState) {
        std::cout << "Error can't open " << name << std::endl;
    }
    else {
        std::cout << "in main \n";

        dx_data fData;
        dx_iface *input = new dx_iface();
        input->printText( name, &fData );
//        if (isOk) {
//            std::cout << " reading file OK " << name << std::endl;
//        } else {
//            std::cout << "Error reading file " << name << std::endl;
//        }
    }


    return 0;
}
