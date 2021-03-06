/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2013  Paweł Stawicki. All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <Arduino.h>
#include "AnalogInputs.h"


//file provided by: Jozsef N.
//TODO: calibrate Vb6_pin, Textern

const AnalogInputs::DefaultValues AnalogInputs::inputsP_[AnalogInputs::PHYSICAL_INPUTS] PROGMEM = {
    {{0, 0},                        {36736, 16755}},    //Vout
    {{0, 0},                        {27516, 12552}},    //VreversePolarity
    {{574, 50},                        {5573, 1000}},    //Ismps
    {{384, 50},                        {2496, 300}},    //Idischarge

    {{0, 0},                        {44736, 23118}},    //VoutMux
    {{54784, 1800},                        {26511, 3500}},    //Tintern
    {{0, 0},                        {41491, 12158}},    //Vin
    {{280, 2292},                        {14300, 6000}},    //Textern??

    {{0, 0},                        {0, 0}},    //Vb0_pin
    {{0, 0},                        {55296, 4197}},    //Vb1_pin
    {{0, 0},                      {55488, 4190}},  //Vb2_pin
    {{0, 0},                      {55360, 4186}},  //Vb3_pin

    {{0, 0},                      {55360, 4183}},  //Vb4_pin
    {{0, 0},                      {55681, 4198}},  //Vb5_pin
    {{0, 0},                      {55681, 4198}},  //Vb6_pin??

    //1-1 correlation
    {{45, 50},                      {408, 1000}},  //IsmpsValue
    {{35, 50},                      {184, 300}},  //IdischargeValue
#ifdef ANALOG_INPUTS_V_UNKNOWN
    {{0, 0},                         {1, 1}},           //UNKNOWN0
    {{0, 0},                         {1, 1}},           //UNKNOWN1
#endif
};


