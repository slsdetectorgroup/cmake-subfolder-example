#include "multiSlsDetector.h"
#include <iostream>


int main()
{

    multiSlsDetector det;
    std::cout << "Detector type is: " << det.getDetectorTypeAsString() << '\n';

    det.setExposureTime(0.5, true);
    det.setNumberOfFrames(1);
    det.setExposurePeriod(0);
    std::cout << "Hostname: " << det.getHostname() << "\n";
    std::cout << "exptime " << det.setExposureTime(-1, true) << " s\n";

    det.acquire();
}