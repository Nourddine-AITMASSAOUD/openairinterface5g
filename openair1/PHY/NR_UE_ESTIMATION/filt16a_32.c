/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
#include "filt16a_32.h"

short filt16a_l0[16] = {
16384,12288,8192,4096,0,0,0,0,0,0,0,0,0,0,0,0};

short filt16a_r0[16] = {
0,0,0,0,0,4096,8192,12288,16384,20480,24576,28672,0,0,0,0};

short filt16a_m0[16] = {
0,4096,8192,12288,16384,12288,8192,4096,0,-4096,-8192,-12288,0,0,0,0};

short filt16a_l1[16] = {
20480,16384,12288,8192,4096,0,0,0,0,0,0,0,0,0,0,0};

short filt16a_r1[16] = {
0,0,0,0,0,0,4096,8192,12288,16384,20480,24576,0,0,0,0};

short filt16a_m1[16] = {
-4096,0,4096,8192,12288,16384,12288,8192,4096,0,-4096,-8192,0,0,0,0};

short filt16a_l2[16] = {
24576,20480,16384,12288,8192,4096,0,0,0,0,0,0,0,0,0,0};

short filt16a_r2[16] = {
0,0,0,0,0,0,0,4096,8192,12288,16384,20480,0,0,0,0};

short filt16a_m2[16] = {
-8192,-4096,0,4096,8192,12288,16384,12288,8192,4096,0,-4096,0,0,0,0};

short filt16a_l3[16] = {
28672,24576,20480,16384,12288,8192,4096,0,0,0,0,0,0,0,0,0};

short filt16a_r3[16] = {
0,0,0,0,0,0,0,0,4096,8192,12288,16384,0,0,0,0};

short filt16a_m3[16] = {
-12288,-8192,-4096,0,4096,8192,12288,16384,12288,8192,4096,0,0,0,0,0};

short filt16a_l0_dc[16] = {
16384,12288,8192,4096,0,0,0,0,0,0,0,0,0,0,0,0};

short filt16a_r0_dc[16] = {
0,0,0,0,0,3276,9830,13107,16384,19660,22937,26214,0,0,0,0};

short filt16a_m0_dc[16] = {
0,4096,8192,12288,16384,13107,6553,3276,0,-3277,-6554,-9831,0,0,0,0};

short filt16a_l1_dc[16] = {
16384,12288,8192,4096,0,-4096,0,0,0,0,0,0,0,0,0,0};

short filt16a_r1_dc[16] = {
0,0,0,0,0,0,6553,9830,13107,16384,19660,22937,0,0,0,0};

short filt16a_m1_dc[16] = {
-4096,0,4096,8192,12288,16384,9830,6553,3276,0,-3277,-6554,0,0,0,0};

short filt16a_l2_dc[16] = {
26214,22937,19660,16384,13107,9830,6553,0,0,0,0,0,0,0,0,0};

short filt16a_r2_dc[16] = {
0,0,0,0,0,0,0,4096,8192,12288,16384,20480,0,0,0,0};

short filt16a_m2_dc[16] = {
-6554,-3277,0,3276,6553,6553,16384,12288,8192,4096,0,-4096,0,0,0,0};

short filt16a_l3_dc[16] = {
26214,22937,19660,16384,13107,9830,3276,0,0,0,0,0,0,0,0,0};

short filt16a_r3_dc[16] = {
0,0,0,0,0,0,0,0,4096,8192,12288,16384,0,0,0,0};

short filt16a_m3_dc[16] = {
-9831,-6554,-3277,0,3276,6553,9830,16384,12288,8192,4096,0,0,0,0,0};

short filt16a_1[16] = {
16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384};

short filt16a_2l0[16] = {
16384,12288,8192,4096,-4096,0,0,0,0,0,0,0,0,0,0,0};

short filt16a_2r0[16] = {
0,4096,8192,12288,16384,20480,0,0,0,0,0,0,0,0,0,0};

short filt16a_2l1[16] = {
20480,16384,12288,8192,4096,0,0,0,0,0,0,0,0,0,0,0};

short filt16a_2r1[16] = {
-4096,0,4096,8192,12288,16384,0,0,0,0,0,0,0,0,0,0};

/*filter8*/
short filt8_l0[8] = {
16384,8192,0,0,0,0,0,0};

short filt8_mr0[8] = {
0,0,0,8192,16384,8192,0,-8192};

short filt8_r0[8] = {
0,8192,16384,24576,0,0,0,0};

short filt8_m0[8] = {
0,8192,16384,8192,0,0,0,0};

short filt8_mm0[8]= {
0,0,0,8192,16384,8192,0,0};

short filt8_l1[8] = {
24576,16384,0,0,0,0,0,0};

short filt8_ml1[8] = {
-8192,0,8192,16384,8192,0,0,0};

short filt8_r1[8] = {
0,0,8192,16384,0,0,0,0};

short filt8_m1[8] = {
0,0,8192,16384,8192,0,0,0};

short filt8_mm1[8]= {
0,0,0,0,8192,16384,8192,0};