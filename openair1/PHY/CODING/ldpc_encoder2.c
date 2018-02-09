#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <types.h>
#include "assertions.h"
#include "PHY/TOOLS/time_meas.h"
#include "defs.h"

#include "ldpc384_byte.c"
#include "ldpc352_byte.c"
#include "ldpc320_byte.c"
#include "ldpc288_byte.c"
#include "ldpc256_byte.c"
#include "ldpc240_byte.c"
#include "ldpc224_byte.c"
#include "ldpc208_byte.c"
#include "ldpc192_byte.c"
#include "ldpc176_byte.c"
#include "ldpc_BG2_Zc384_byte.c"
#include "ldpc_BG2_Zc352_byte.c"
#include "ldpc_BG2_Zc320_byte.c"
#include "ldpc_BG2_Zc288_byte.c"
#include "ldpc_BG2_Zc256_byte.c"
#include "ldpc_BG2_Zc240_byte.c"
#include "ldpc_BG2_Zc224_byte.c"
#include "ldpc_BG2_Zc208_byte.c"
#include "ldpc_BG2_Zc192_byte.c"
#include "ldpc_BG2_Zc176_byte.c"
#include "ldpc_BG2_Zc160_byte.c"
#include "ldpc_BG2_Zc144_byte.c"
#include "ldpc_BG2_Zc128_byte.c"
#include "ldpc_BG2_Zc120_byte.c"
#include "ldpc_BG2_Zc112_byte.c"
#include "ldpc_BG2_Zc104_byte.c"
#include "ldpc_BG2_Zc96_byte.c"
#include "ldpc_BG2_Zc88_byte.c"
#include "ldpc_BG2_Zc80_byte.c"
#include "ldpc_BG2_Zc72_byte.c"



void encode_parity_check_part_optim(uint8_t *c,uint8_t *d, short BG,short Zc,short Kb)
{

  if (BG==1)
  {
    switch (Zc)
    {
    case 2: break;
    case 3: break;
    case 4: break;
    case 5: break;
    case 6: break;
    case 7: break;
    case 8: break;
    case 9: break;
    case 10: break;
    case 11: break;
    case 12: break;
    case 13: break;
    case 14: break;
    case 15: break;
    case 16: break;
    case 18: break;
    case 20: break;
    case 22: break;
    case 24: break;      
    case 26: break;
    case 28: break;
    case 30: break;
    case 32: break;
    case 36: break;
    case 40: break;
    case 44: break;
    case 48: break;
    case 52: break;
    case 56: break;
    case 60: break;
    case 64: break;
    case 72: break;
    case 80: break;   
    case 88: break;   
    case 96: break;
    case 104: break;
    case 112: break;
    case 120: break;
    case 128: break;
    case 144: break;
    case 160: break;
    case 176: ldpc176_byte(c,d); break;
    case 192: ldpc192_byte(c,d); break;
    case 208: ldpc208_byte(c,d); break;
    case 224: ldpc224_byte(c,d); break;
    case 240: ldpc240_byte(c,d); break;
    case 256: ldpc256_byte(c,d); break;
    case 288: ldpc288_byte(c,d); break;
    case 320: ldpc320_byte(c,d); break;
    case 352: ldpc352_byte(c,d); break;
    case 384: ldpc384_byte(c,d); break;
    default: AssertFatal(0,"BG %d Zc %d is not supported yet\n",BG,Zc); break;
    }
  }
  else if (BG==2) {
    switch (Zc)
    {
    case 2: break;
    case 3: break;
    case 4: break;
    case 5: break;
    case 6: break;
    case 7: break;
    case 8: break;
    case 9: break;
    case 10: break;
    case 11: break;
    case 12: break;
    case 13: break;
    case 14: break;
    case 15: break;
    case 16: break;
    case 18: break;
    case 20: break;
    case 22: break;
    case 24: break;      
    case 26: break;
    case 28: break;
    case 30: break;
    case 32: break;
    case 36: break;
    case 40: break;
    case 44: break;
    case 48: break;
    case 52: break;
    case 56: break;
    case 60: break;
    case 64: break;
    case 72: ldpc_BG2_Zc72_byte(c,d); break;
    case 80: ldpc_BG2_Zc80_byte(c,d); break;   
    case 88: ldpc_BG2_Zc88_byte(c,d); break;   
    case 96: ldpc_BG2_Zc96_byte(c,d); break;
    case 104: ldpc_BG2_Zc104_byte(c,d); break;
    case 112: ldpc_BG2_Zc112_byte(c,d); break;
    case 120: ldpc_BG2_Zc120_byte(c,d); break;
    case 128: ldpc_BG2_Zc128_byte(c,d); break;
    case 144: ldpc_BG2_Zc144_byte(c,d); break;
    case 160: ldpc_BG2_Zc160_byte(c,d); break;
    case 176: ldpc_BG2_Zc176_byte(c,d); break;
    case 192: ldpc_BG2_Zc192_byte(c,d); break;
    case 208: ldpc_BG2_Zc208_byte(c,d); break;
    case 224: ldpc_BG2_Zc224_byte(c,d); break;
    case 240: ldpc_BG2_Zc240_byte(c,d); break;
    case 256: ldpc_BG2_Zc256_byte(c,d); break;
    case 288: ldpc_BG2_Zc288_byte(c,d); break;
    case 320: ldpc_BG2_Zc320_byte(c,d); break;
    case 352: ldpc_BG2_Zc352_byte(c,d); break;
    case 384: ldpc_BG2_Zc384_byte(c,d); break;
    default: AssertFatal(0,"BG %d Zc %d is not supported yet\n",BG,Zc); break;
    }
  }
  else {
    AssertFatal(0,"BG %d is not supported yet\n",BG);
  } 

}


int ldpc_encoder_optim(unsigned char *test_input,unsigned char *channel_input,short block_length,int nom_rate,int denom_rate,time_stats_t *tinput,time_stats_t *tprep,time_stats_t *tparity,time_stats_t *toutput)
{

  short BG,Zc,Kb,nrows,ncols;
  int i,i1;
  int no_punctured_columns,removed_bit;

  //Table of possible lifting sizes
  short lift_size[51]= {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,20,22,24,26,28,30,32,36,40,44,48,52,56,60,64,72,80,88,96,104,112,120,128,144,160,176,192,208,224,240,256,288,320,352,384};

  int simd_size;

  //determine number of bits in codeword
  if (block_length>3840)
    {
      BG=1;
      Kb = 22;
      nrows=46; //parity check bits
      ncols=22; //info bits
    }
  else if (block_length<=3840)
    {
      BG=2;
      nrows=42; //parity check bits
      ncols=10; // info bits
      
      if (block_length>640)
	Kb = 10;
      else if (block_length>560)
	Kb = 9;
      else if (block_length>192)
      Kb = 8;
    else
      Kb = 6;
    }

  //find minimum value in all sets of lifting size
  Zc=0;
  for (i1=0; i1 < 51; i1++)
  {
    if (lift_size[i1] >= (double) block_length/Kb)
    {
      Zc = lift_size[i1];
      //printf("%d\n",Zc);
      break;
    }
  }
  AssertFatal(Zc>0,"no valid Zc found for block length %d\n",block_length);

  if ((Zc&31) > 0) simd_size = 16;
  else          simd_size = 32;

  unsigned char c[22*Zc] __attribute__((aligned(32))); //padded input, unpacked, max size
  unsigned char d[46*Zc] __attribute__((aligned(32))); //coded parity part output, unpacked, max size

  unsigned char c_extension[2*22*Zc*simd_size] __attribute__((aligned(32)));      //double size matrix of c

  // calculate number of punctured bits
  no_punctured_columns=(int)((nrows-2)*Zc+block_length-block_length*3)/Zc;
  removed_bit=(nrows-no_punctured_columns-2) * Zc+block_length-(int)(block_length*3);
  // printf("%d\n",no_punctured_columns);
  // printf("%d\n",removed_bit);
  // unpack input
  memset(c,0,sizeof(unsigned char) * ncols * Zc);
  memset(d,0,sizeof(unsigned char) * nrows * Zc);

  start_meas(tinput);

  for (i=0; i<block_length; i++)
  {
    //c[i] = test_input[i/8]<<(i%8);
    //c[i]=c[i]>>7&1;
    c[i]=(test_input[i/8]&(1<<(i&7)))>>(i&7);
  }

  stop_meas(tinput);

  if ((BG==1) || (BG==2 && Zc>64)) { 
    // extend matrix
    start_meas(tprep);
    for (i1=0; i1 < ncols; i1++)
      {
	memcpy(&c_extension[2*i1*Zc], &c[i1*Zc], Zc*sizeof(unsigned char));
	memcpy(&c_extension[(2*i1+1)*Zc], &c[i1*Zc], Zc*sizeof(unsigned char));
      }
    for (i1=1;i1<simd_size;i1++) {
      memcpy(&c_extension[(2*ncols*Zc*i1)], &c_extension[i1], (2*ncols*Zc*sizeof(unsigned char))-i1);
      //    memset(&c_extension[(2*ncols*Zc*i1)],0,i1);
      /*
	printf("shift %d: ",i1);
	for (int j=0;j<64;j++) printf("%d ",c_extension[(2*ncols*Zc*i1)+j]);
	printf("\n");
      */
    }
    stop_meas(tprep);
    //parity check part
    start_meas(tparity);
    encode_parity_check_part_optim(c_extension, d, BG, Zc, Kb);
    stop_meas(tparity);
  }
  else {
    if (encode_parity_check_part_orig(c, d, BG, Zc, Kb, block_length)!=0) {
      printf("Problem with encoder\n");
      return(-1);
    }
  }
  start_meas(toutput);
  // information part and puncture columns
  memcpy(&channel_input[0], &c[2*Zc], (block_length-2*Zc)*sizeof(unsigned char));
  memcpy(&channel_input[block_length-2*Zc], &d[0], ((nrows-no_punctured_columns) * Zc-removed_bit)*sizeof(unsigned char));
  stop_meas(toutput);
  return 0;
}

int ldpc_encoder_optim_8seg(unsigned char **test_input,unsigned char **channel_input,short block_length,int nom_rate,int denom_rate,int n_segments,time_stats_t *tinput,time_stats_t *tprep,time_stats_t *tparity,time_stats_t *toutput)
{

  short BG,Zc,Kb,nrows,ncols;
  int i,i1,j;
  int no_punctured_columns,removed_bit;
  //Table of possible lifting sizes
  short lift_size[51]= {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,20,22,24,26,28,30,32,36,40,44,48,52,56,60,64,72,80,88,96,104,112,120,128,144,160,176,192,208,224,240,256,288,320,352,384};

  int simd_size;


  AssertFatal(n_segments>0&&n_segments<=8,"0 < n_segments %d <= 8\n",n_segments);

  //determine number of bits in codeword
  if (block_length>3840)
    {
      BG=1;
      Kb = 22;
      nrows=46; //parity check bits
      ncols=22; //info bits
    }
  else if (block_length<=3840)
    {
      BG=2;
      nrows=42; //parity check bits
      ncols=10; // info bits
      
      if (block_length>640)
	Kb = 10;
      else if (block_length>560)
	Kb = 9;
      else if (block_length>192)
      Kb = 8;
    else
      Kb = 6;
    }

  //find minimum value in all sets of lifting size
  Zc=0;
  for (i1=0; i1 < 51; i1++)
  {
    if (lift_size[i1] >= (double) block_length/Kb)
    {
      Zc = lift_size[i1];
      //printf("%d\n",Zc);
      break;
    }
  }
  AssertFatal(Zc>0,"no valid Zc found for block length %d\n",block_length);

  if ((Zc&31) > 0) simd_size = 16;
  else          simd_size = 32;

  unsigned char c[22*Zc] __attribute__((aligned(32))); //padded input, unpacked, max size
  unsigned char d[46*Zc] __attribute__((aligned(32))); //coded parity part output, unpacked, max size

  unsigned char c_extension[2*22*Zc*simd_size] __attribute__((aligned(32)));      //double size matrix of c

  // calculate number of punctured bits
  no_punctured_columns=(int)((nrows-2)*Zc+block_length-block_length*3)/Zc;
  removed_bit=(nrows-no_punctured_columns-2) * Zc+block_length-(int)(block_length*3);
  // printf("%d\n",no_punctured_columns);
  // printf("%d\n",removed_bit);
  // unpack input
  memset(c,0,sizeof(unsigned char) * ncols * Zc);
  memset(d,0,sizeof(unsigned char) * nrows * Zc);

  start_meas(tinput);
#if 0
  char temp;
  for (i=0; i<block_length; i++) {
    for (j=0; j<n_segments; j++) {

      temp = (test_input[j][i/8]&(1<<(i&7)))>>(i&7);
      //printf("c(%d,%d)=%d\n",j,i,temp);
      c[i] |= (temp << j);
    }
  }
#else
#ifdef __AVX2__
  __m256i shufmask = _mm256_set_epi64x(0x0303030303030303, 0x0202020202020202,0x0101010101010101, 0x0000000000000000);
  __m256i andmask  = _mm256_set1_epi64x(0x8040201008040201);  // every 8 bits -> 8 bytes, pattern repeats.
  __m256i zero256   = _mm256_setzero_si256();
  __m256i masks[8];
  register __m256i c256;
  masks[0] = _mm256_set1_epi8(0x1);
  masks[1] = _mm256_set1_epi8(0x2);
  masks[2] = _mm256_set1_epi8(0x4);
  masks[3] = _mm256_set1_epi8(0x8);
  masks[4] = _mm256_set1_epi8(0x10);
  masks[5] = _mm256_set1_epi8(0x20);
  masks[6] = _mm256_set1_epi8(0x40);
  masks[7] = _mm256_set1_epi8(0x80);

  for (i=0; i<block_length>>5; i++) {
    c256 = _mm256_and_si256(_mm256_cmpeq_epi8(_mm256_andnot_si256(_mm256_shuffle_epi8(_mm256_set1_epi32(((uint32_t*)test_input[0])[i]), shufmask),andmask),zero256),masks[0]);
    for (j=1; j<n_segments; j++) {
      c256 = _mm256_or_si256(_mm256_and_si256(_mm256_cmpeq_epi8(_mm256_andnot_si256(_mm256_shuffle_epi8(_mm256_set1_epi32(((uint32_t*)test_input[j])[i]), shufmask),andmask),zero256),masks[j]),c256);
    }
    ((__m256i *)c)[i] = c256;
  }
#else
  AssertFatal(1==0,"Need AVX2 for this\n");
#endif
#endif

  stop_meas(tinput);

  if ((BG==1) || (BG==2 && Zc>64)) { 
    // extend matrix
    start_meas(tprep);
    for (i1=0; i1 < ncols; i1++)
      {
	memcpy(&c_extension[2*i1*Zc], &c[i1*Zc], Zc*sizeof(unsigned char));
	memcpy(&c_extension[(2*i1+1)*Zc], &c[i1*Zc], Zc*sizeof(unsigned char));
      }
    for (i1=1;i1<simd_size;i1++) {
      memcpy(&c_extension[(2*ncols*Zc*i1)], &c_extension[i1], (2*ncols*Zc*sizeof(unsigned char))-i1);
      //    memset(&c_extension[(2*ncols*Zc*i1)],0,i1);
      /*
	printf("shift %d: ",i1);
	for (int j=0;j<64;j++) printf("%d ",c_extension[(2*ncols*Zc*i1)+j]);
	printf("\n");
      */
    }
    stop_meas(tprep);
    //parity check part
    start_meas(tparity);
    encode_parity_check_part_optim(c_extension, d, BG, Zc, Kb);
    stop_meas(tparity);
  }
  else {
    if (encode_parity_check_part_orig(c, d, BG, Zc, Kb, block_length)!=0) {
      printf("Problem with encoder\n");
      return(-1);
    }
  }
  start_meas(toutput);
  // information part and puncture columns
  /*
  memcpy(&channel_input[0], &c[2*Zc], (block_length-2*Zc)*sizeof(unsigned char));
  memcpy(&channel_input[block_length-2*Zc], &d[0], ((nrows-no_punctured_columns) * Zc-removed_bit)*sizeof(unsigned char));
  */
#if 0
  for (i=0;i<(block_length-2*Zc);i++) 
    for (j=0; j<n_segments; j++) 
      channel_input[j][i] = (c[2*Zc+i]>>j)&1;
  for (i=0;i<((nrows-no_punctured_columns) * Zc-removed_bit);i++)
    for (j=0; j<n_segments; j++) 
      channel_input[j][block_length-2*Zc+i] = (d[i]>>j)&1;
#else
#ifdef __AVX2__
  uint32_t l1 = (block_length-(2*Zc))>>5;
  uint32_t l2 = ((nrows-no_punctured_columns) * Zc-removed_bit)>>5;
  AssertFatal(((2*Zc)&31) == 0,"2*Zc needs to be a multiple of 32 for now\n");
  AssertFatal(((block_length-(2*Zc))&31) == 0,"block_length-(2*Zc) needs to be a multiple of 32 for now\n");
  __m256i *c256p = (__m256i *)&c[2*Zc];
  __m256i *d256p = (__m256i *)&d[0];
  //  if (((block_length-(2*Zc))&31)>0) l1++;

  for (i=0;i<l1;i++)
    for (j=0;j<n_segments;j++) ((__m256i *)channel_input[j])[i] = _mm256_and_si256(_mm256_srai_epi16(c256p[i],j),masks[0]); 

  //  if ((((nrows-no_punctured_columns) * Zc-removed_bit)&31)>0) l2++;

  for (i1=0;i1<l2;i1++,i++)
    for (j=0;j<n_segments;j++) ((__m256i *)channel_input[j])[i] = _mm256_and_si256(_mm256_srai_epi16(d256p[i1],j),masks[0]); 
#else
  AssertFatal(1==0,"Need AVX2 for now\n");
#endif
#endif
  stop_meas(toutput);
  return 0;
}
