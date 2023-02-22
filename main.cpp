#include "sls/Detector.h"
#include <iostream>

int main(){
    sls::Detector det;
    std::cout << "Detector type is: " << det.getDetectorType() << '\n';
    std::cout << "Hostname: " << det.getHostname() << "\n";

    //Store value in int, if values are different put -1
    int vb_comp = det.getDAC(sls::defs::VB_COMP, false).squash(-1);
    std::cout << "The value of vb_comp is " << vb_comp << " for all modules\n";

}
