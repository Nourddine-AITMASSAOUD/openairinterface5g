/*******************************************************************************
    OpenAirInterface
    Copyright(c) 1999 - 2014 Eurecom

    OpenAirInterface is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.


    OpenAirInterface is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with OpenAirInterface.The full GNU General Public License is
   included in this distribution in the file called "COPYING". If not,
   see <http://www.gnu.org/licenses/>.

  Contact Information
  OpenAirInterface Admin: openair_admin@eurecom.fr
  OpenAirInterface Tech : openair_tech@eurecom.fr
  OpenAirInterface Dev  : openair4g-devel@lists.eurecom.fr

  Address      : Eurecom, Campus SophiaTech, 450 Route des Chappes, CS 50193 - 06904 Biot Sophia Antipolis cedex, FRANCE

 *******************************************************************************/
short primary_synch0[144] = {0,0,0,0,0,0,0,0,0,0,32767,0,-26120,-19785,11971,-30502,-24020,-22288,32117,6492,31311,9658,-16384,-28378,25100,-21063,-7292,-31946,20429,25618,14948,29158,11971,-30502,31311,9658,25100,-21063,-16384,28377,-24020,22287,32117,6492,-7292,31945,20429,25618,-26120,-19785,-16384,-28378,-16384,28377,-26120,-19785,-32402,4883,31311,-9659,32117,6492,-7292,-31946,32767,-1,25100,-21063,-24020,22287,-32402,4883,-32402,4883,-24020,22287,25100,-21063,32767,-1,-7292,-31946,32117,6492,31311,-9659,-32402,4883,-26120,-19785,-16384,28377,-16384,-28378,-26120,-19785,20429,25618,-7292,31945,32117,6492,-24020,22287,-16384,28377,25100,-21063,31311,9658,11971,-30502,14948,29158,20429,25618,-7292,-31946,25100,-21063,-16384,-28378,31311,9658,32117,6492,-24020,-22288,11971,-30502,-26120,-19785,32767,0,0,0,0,0,0,0,0,0,0,0};
short primary_synch1[144] = {0,0,0,0,0,0,0,0,0,0,32767,0,-31754,-8086,-24020,-22288,2448,32675,-26120,19784,27073,18458,-16384,28377,25100,21062,-29523,14217,-7292,31945,-13477,-29868,-24020,-22288,27073,18458,25100,21062,-16384,-28378,2448,-32676,-26120,19784,-29523,-14218,-7292,31945,-31754,-8086,-16384,28377,-16384,-28378,-31754,-8086,31311,-9659,27073,-18459,-26120,19784,-29523,14217,32767,-1,25100,21062,2448,-32676,31311,-9659,31311,-9659,2448,-32676,25100,21062,32767,0,-29523,14217,-26120,19784,27073,-18459,31311,-9659,-31754,-8086,-16384,-28378,-16384,28377,-31754,-8086,-7292,31945,-29523,-14218,-26120,19784,2448,-32676,-16384,-28378,25100,21062,27073,18458,-24020,-22288,-13477,-29868,-7292,31945,-29523,14217,25100,21062,-16384,28377,27073,18458,-26120,19784,2448,32675,-24020,-22288,-31754,-8086,32767,0,0,0,0,0,0,0,0,0,0,0};
short primary_synch2[144] = {0,0,0,0,0,0,0,0,0,0,32767,0,-31754,8085,-24020,22287,2448,-32676,-26120,-19785,27073,-18459,-16384,-28378,25100,-21063,-29523,-14218,-7292,-31946,-13477,29867,-24020,22287,27073,-18459,25100,-21063,-16384,28377,2448,32675,-26120,-19785,-29523,14217,-7292,-31946,-31754,8085,-16384,-28378,-16384,28377,-31754,8085,31311,9658,27073,18458,-26120,-19785,-29523,-14218,32767,0,25100,-21063,2448,32675,31311,9658,31311,9658,2448,32675,25100,-21063,32767,0,-29523,-14218,-26120,-19785,27073,18458,31311,9658,-31754,8085,-16384,28377,-16384,-28378,-31754,8085,-7292,-31946,-29523,14217,-26120,-19785,2448,32675,-16384,28377,25100,-21063,27073,-18459,-24020,22287,-13477,29867,-7292,-31946,-29523,-14218,25100,-21063,-16384,-28378,27073,-18459,-26120,-19785,2448,-32676,-24020,22287,-31754,8085,32767,-1,0,0,0,0,0,0,0,0,0,0};
unsigned char primary_synch0_tab[72] = {0,0,0,0,0,85,110,97,109,146,145,106,92,103,139,137,97,145,92,127,124,146,130,139,110,106,127,110,118,88,146,103,85,92,124,118,118,124,92,85,103,146,88,118,110,127,106,110,139,130,146,124,127,92,145,97,137,139,103,92,106,145,146,109,97,110,85,0,0,0,0,0};
unsigned char primary_synch1_tab[72] = {0,0,0,0,0,85,114,109,133,123,142,127,141,121,130,105,109,142,141,106,100,123,112,130,114,127,106,114,88,91,123,121,85,141,100,88,88,100,141,85,121,123,91,88,114,106,127,114,130,112,123,100,106,141,142,109,105,130,121,141,127,142,123,133,109,114,85,0,0,0,0,0};
unsigned char primary_synch2_tab[72] = {0,0,0,0,0,85,119,124,100,110,91,106,92,112,103,128,124,91,92,127,133,110,121,103,119,106,127,119,145,142,110,112,85,92,133,145,145,133,92,85,112,110,142,145,119,127,106,119,103,121,110,133,127,92,91,124,128,103,112,92,106,91,110,100,124,119,85,0,0,0,0,0};
