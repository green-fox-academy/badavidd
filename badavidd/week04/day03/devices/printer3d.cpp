#include "printer3d.h"

Printer3d::Printer3d(int sizeX, int sizeY, int sizeZ) {
_sizeX = sizeX;
_sizeY = sizeY;
_sizeZ = sizeZ;
}

std::string Printer3d::getSize() {
    return std::to_string(_sizeX) + "x" + std::to_string(_sizeY) + "x" + std::to_string(_sizeZ);
}