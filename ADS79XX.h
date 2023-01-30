//
// Created by Harry Rodgers on 30/01/2023.
//

#ifndef ARDUINO_ADS79XX_H
#define ARDUINO_ADS79XX_H

#include <Arduino.h>
#include <SPI.h>
#include "ADS79XX.h"

const int PIN_NUM_MISO = 12;
const int PIN_NUM_MOSI = 11;
const int PIN_NUM_CLK = 10;
const int PIN_NUM_CS  = 13;

enum ADS79XX_MODE {
    ADS79XX_MANUAL,
    ADS79XX_AUTO1,
    ADS79XX_AUTO2
};


class ADS79XX {

};





#endif //ARDUINO_ADS79XX_H
