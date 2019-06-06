/*
    cheali-charger - open source firmware for a variety of LiPo chargers
    Copyright (C) 2014  Paweł Stawicki. All right reserved.

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
#ifndef PINS_H_
#define PINS_H_
 
#define OUTPUT_VOLTAGE_MINUS_PIN        45
#define OUTPUT_VOLTAGE_PLUS_PIN         44
#define DISCHARGE_CURRENT_PIN           47
//pin 4 - nRST                             //(4)        nRST (debug wire)
//[HW Uart Rx pin: 5(P3.0) or 37(P0.3) - selectable (not connected)]
#define RX_HW_SERIAL_PIN5              5
//pin 6 - AVSS                             //(6)        AVSS
//[HW Uart Tx pin: 7(P3.1) or 38(P0.2) - selectable (not connected)]
#define TX_HW_SERIAL_PIN7               7
#define BUTTON_STOP_PIN                 31
#define BUTTON_DEC_PIN                  29
#define BUTTON_INC_PIN                  30
#define BUTTON_START_PIN                28
#define BUZZER_PIN                      32
 
#define BALANCER5_LOAD_PIN              39
#define BALANCER4_LOAD_PIN              38
//pin 15 - XTAL2                           //(3+12)     XTAL2
//pin 16 - XTAL1                           //(4+12)     XTAL1
//pin 17 - VSS                             //(5+12)     VSS
//pin 18 - LDO_CAP                         //(6+12)     LDO_CAP (internnal voltage regulator CAP)
#define OUTPUT_DISABLE_PIN              48
//[the same pin for charge and discharge: pin 20]
#define DISCHARGE_VALUE_PIN             23
#define SMPS_VALUE_BOOST_PIN            23
#define BALANCER3_LOAD_PIN              37
#define BALANCER2_LOAD_PIN              35
#define BALANCER6_LOAD_PIN              40
#define BALANCER1_LOAD_PIN              34
 
 
#define MUX_ADR2_PIN                    8
#define SMPS_VALUE_BUCK_PIN             25
#define SMPS_DISABLE_PIN                22
#define MUX_ADR1_PIN                    9
#define MUX_ADR0_PIN                    12
//pin 30 - ICE_CLK                         //(6+2*12)   P4.6 - ICE_CLK (debug wire)
//pin 31 - ICE_DAT                         //(7+2*12)   P4.7 - ICE_DAT (debug wire)
#define LCD_D3_PIN                      14
#define LCD_D2_PIN                      13
#define LCD_D1_PIN                      11
#define LCD_D0_PIN                      10
#define LCD_ENABLE_PIN                  19
 
 
#define LCD_RS_PIN                      20
//[HW Uart Tx pin: 7(P3.1) or 38(P0.2) - selectable (not connected)]
//#define TX_HW_SERIAL_PIN38              7
//pin 41 - VDD                             //(5+3*12)   VDD
//pin 42 - AVDD                            //(6+3*12)   AVDD
#define MUX0_Z_D_PIN                    1
#define DISCHARGE_DISABLE_PIN           33
#define UART_TX_PIN                     2
#define T_EXTERNAL_PIN                  2
#define V_IN_PIN                        43
#define SMPS_CURRENT_PIN                46
//pin 48 - UNKNOWN                         //(12+3*12)  P4.2 - PWM2[2]
 
 
 
//virtual pin
#define T_INTERNAL_PIN                  3+128
 
//Multiplexer addresses:
#define MADDR_V_BALANSER_BATT_MINUS     0
#define MADDR_V_BALANSER1               1
#define MADDR_V_BALANSER2               2
#define MADDR_V_BALANSER3               3
#define MADDR_V_BALANSER4               4
#define MADDR_V_BALANSER5               5
#define MADDR_V_BALANSER6               6
//#define MADDR_T_EXTERN                  7
 
 
#endif /* PINS_H_ */
