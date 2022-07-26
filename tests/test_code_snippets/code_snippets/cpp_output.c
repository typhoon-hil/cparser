# 1 "ex_codegen_dsp.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 332 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "ex_codegen_dsp.c" 2
# 17 "ex_codegen_dsp.c"
# 1 "./ex_codegen_dsp.h" 1
# 21 "./ex_codegen_dsp.h"
# 1 "c:\\pycparser\\utils\\fake_libc_include\\math.h" 1
# 1 "c:\\pycparser\\utils\\fake_libc_include/_fake_defines.h" 1
# 2 "c:\\pycparser\\utils\\fake_libc_include\\math.h" 2
# 1 "c:\\pycparser\\utils\\fake_libc_include/_fake_typedefs.h" 1



typedef int size_t;
typedef int __builtin_va_list;
typedef int __gnuc_va_list;
typedef int va_list;
typedef int __int8_t;
typedef int __uint8_t;
typedef int __int16_t;
typedef int __uint16_t;
typedef int __int_least16_t;
typedef int __uint_least16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef int __int64_t;
typedef int __uint64_t;
typedef int __int_least32_t;
typedef int __uint_least32_t;
typedef int __s8;
typedef int __u8;
typedef int __s16;
typedef int __u16;
typedef int __s32;
typedef int __u32;
typedef int __s64;
typedef int __u64;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef int _off_t;
typedef int __dev_t;
typedef int __uid_t;
typedef int __gid_t;
typedef int _off64_t;
typedef int _fpos_t;
typedef int _ssize_t;
typedef int wint_t;
typedef int _mbstate_t;
typedef int _flock_t;
typedef int _iconv_t;
typedef int __ULong;
typedef int __FILE;
typedef int ptrdiff_t;
typedef int wchar_t;
typedef int __off_t;
typedef int __pid_t;
typedef int __loff_t;
typedef int u_char;
typedef int u_short;
typedef int u_int;
typedef int u_long;
typedef int ushort;
typedef int uint;
typedef int clock_t;
typedef int time_t;
typedef int daddr_t;
typedef int caddr_t;
typedef int ino_t;
typedef int off_t;
typedef int dev_t;
typedef int uid_t;
typedef int gid_t;
typedef int pid_t;
typedef int key_t;
typedef int ssize_t;
typedef int mode_t;
typedef int nlink_t;
typedef int fd_mask;
typedef int _types_fd_set;
typedef int clockid_t;
typedef int timer_t;
typedef int useconds_t;
typedef int suseconds_t;
typedef int FILE;
typedef int fpos_t;
typedef int cookie_read_function_t;
typedef int cookie_write_function_t;
typedef int cookie_seek_function_t;
typedef int cookie_close_function_t;
typedef int cookie_io_functions_t;
typedef int div_t;
typedef int ldiv_t;
typedef int lldiv_t;
typedef int sigset_t;
typedef int __sigset_t;
typedef int _sig_func_ptr;
typedef int sig_atomic_t;
typedef int __tzrule_type;
typedef int __tzinfo_type;
typedef int mbstate_t;
typedef int sem_t;
typedef int pthread_t;
typedef int pthread_attr_t;
typedef int pthread_mutex_t;
typedef int pthread_mutexattr_t;
typedef int pthread_cond_t;
typedef int pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
typedef int pthread_rwlock_t;
typedef int pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
typedef int pthread_barrier_t;
typedef int pthread_barrierattr_t;
typedef int jmp_buf;
typedef int rlim_t;
typedef int sa_family_t;
typedef int sigjmp_buf;
typedef int stack_t;
typedef int siginfo_t;
typedef int z_stream;


typedef int int8_t;
typedef int uint8_t;
typedef int int16_t;
typedef int uint16_t;
typedef int int32_t;
typedef int uint32_t;
typedef int int64_t;
typedef int uint64_t;


typedef int int_least8_t;
typedef int uint_least8_t;
typedef int int_least16_t;
typedef int uint_least16_t;
typedef int int_least32_t;
typedef int uint_least32_t;
typedef int int_least64_t;
typedef int uint_least64_t;


typedef int int_fast8_t;
typedef int uint_fast8_t;
typedef int int_fast16_t;
typedef int uint_fast16_t;
typedef int int_fast32_t;
typedef int uint_fast32_t;
typedef int int_fast64_t;
typedef int uint_fast64_t;


typedef int intptr_t;
typedef int uintptr_t;


typedef int intmax_t;
typedef int uintmax_t;


typedef _Bool bool;


typedef void* MirEGLNativeWindowType;
typedef void* MirEGLNativeDisplayType;
typedef struct MirConnection MirConnection;
typedef struct MirSurface MirSurface;
typedef struct MirSurfaceSpec MirSurfaceSpec;
typedef struct MirScreencast MirScreencast;
typedef struct MirPromptSession MirPromptSession;
typedef struct MirBufferStream MirBufferStream;
typedef struct MirPersistentId MirPersistentId;
typedef struct MirBlob MirBlob;
typedef struct MirDisplayConfig MirDisplayConfig;


typedef struct xcb_connection_t xcb_connection_t;
typedef uint32_t xcb_window_t;
typedef uint32_t xcb_visualid_t;
# 3 "c:\\pycparser\\utils\\fake_libc_include\\math.h" 2
# 22 "./ex_codegen_dsp.h" 2
# 1 "c:\\pycparser\\utils\\fake_libc_include\\stddef.h" 1
# 23 "./ex_codegen_dsp.h" 2
# 1 "c:\\pycparser\\utils\\fake_libc_include\\string.h" 1
# 24 "./ex_codegen_dsp.h" 2
# 1 "./rtwtypes.h" 1
# 29 "./rtwtypes.h"
# 1 "c:\\pycparser\\utils\\fake_libc_include\\limits.h" 1
# 30 "./rtwtypes.h" 2
# 48 "./rtwtypes.h"
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef short int16_T;
typedef unsigned short uint16_T;
typedef int int32_T;
typedef unsigned int uint32_T;
typedef float real32_T;
typedef double real64_T;





typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;






typedef struct {
  real32_T re;
  real32_T im;
} creal32_T;

typedef struct {
  real64_T re;
  real64_T im;
} creal64_T;

typedef struct {
  real_T re;
  real_T im;
} creal_T;



typedef struct {
  int8_T re;
  int8_T im;
} cint8_T;



typedef struct {
  uint8_T re;
  uint8_T im;
} cuint8_T;



typedef struct {
  int16_T re;
  int16_T im;
} cint16_T;



typedef struct {
  uint16_T re;
  uint16_T im;
} cuint16_T;



typedef struct {
  int32_T re;
  int32_T im;
} cint32_T;



typedef struct {
  uint32_T re;
  uint32_T im;
} cuint32_T;
# 177 "./rtwtypes.h"
typedef void * pointer_T;






typedef enum {
  FALLING_ZERO_CROSSING = -1,
  ANY_ZERO_CROSSING = 0,
  RISING_ZERO_CROSSING = 1
} ZCDirection;


typedef uint8_T ZCSigState;
# 200 "./rtwtypes.h"
typedef enum {
  FALLING_ZCEVENT = -1,
  NO_ZCEVENT = 0,
  RISING_ZCEVENT = 1
} ZCEventType;
# 25 "./ex_codegen_dsp.h" 2


# 1 "./ex_codegen_dsp_types.h" 1
# 22 "./ex_codegen_dsp_types.h"
typedef struct P_ex_codegen_dsp_T_ P_ex_codegen_dsp_T;


typedef struct tag_RTM_ex_codegen_dsp_T RT_MODEL_ex_codegen_dsp_T;
# 28 "./ex_codegen_dsp.h" 2
# 39 "./ex_codegen_dsp.h"
typedef struct {
  real_T RandomSource;
  real_T LMSFilter_o3[32];
  real_T GeneratedFilterBlock;
} B_ex_codegen_dsp_T;


typedef struct {
  real_T GeneratedFilterBlock_states[31];
  real_T LMSFilter_IN_BUFFER_DWORK[32];
  real_T LMSFilter_WGT_IC_DWORK[32];
  int32_T GeneratedFilterBlock_circBuf;
  uint32_T RandomSource_SEED_DWORK;
  uint32_T RandomSource_STATE_DWORK[2];
  uint32_T LMSFilter_BUFF_IDX_DWORK;
} DW_ex_codegen_dsp_T;


struct P_ex_codegen_dsp_T_ {
  real_T RandomSource_MeanRTP;


  real_T RandomSource_VarianceRTP;


  real_T GeneratedFilterBlock_InitialSta;


  real_T GeneratedFilterBlock_Coefficien[32];


  real_T LMSFilter_LEAKAGE_RTP;


  real_T LMSFilter_MU_RTP;


  uint32_T RandomSource_InitSeed;


};


struct tag_RTM_ex_codegen_dsp_T {
  const char_T * volatile errorStatus;
};


extern P_ex_codegen_dsp_T ex_codegen_dsp_P;


extern B_ex_codegen_dsp_T ex_codegen_dsp_B;


extern DW_ex_codegen_dsp_T ex_codegen_dsp_DW;


extern void ex_codegen_dsp_initialize(void);
extern void ex_codegen_dsp_step(void);
extern void ex_codegen_dsp_terminate(void);


extern RT_MODEL_ex_codegen_dsp_T *const ex_codegen_dsp_M;
# 18 "ex_codegen_dsp.c" 2
# 1 "./ex_codegen_dsp_private.h" 1
# 34 "./ex_codegen_dsp_private.h"
extern void RandSrcInitState_GZ(const uint32_T seed[], uint32_T state[], int32_T
  nChans);
extern void RandSrc_GZ_D(real_T y[], const real_T mean[], int32_T meanLen, const
  real_T xstd[], int32_T xstdLen, uint32_T state[], int32_T nChans, int32_T
  nSamps);
extern void MWSPCGlmsnw_D(const real_T x[], const real_T d[], const real_T mu,
  uint32_T *startIdx, real_T xBuf[], real_T wBuf[], const int32_T wLen, const
  real_T leakFac, const int32_T xLen, real_T y[], real_T eY[], real_T wY[]);
# 19 "ex_codegen_dsp.c" 2


B_ex_codegen_dsp_T ex_codegen_dsp_B;


DW_ex_codegen_dsp_T ex_codegen_dsp_DW;


RT_MODEL_ex_codegen_dsp_T ex_codegen_dsp_M_;
RT_MODEL_ex_codegen_dsp_T *const ex_codegen_dsp_M = &ex_codegen_dsp_M_;
void RandSrcInitState_GZ(const uint32_T seed[], uint32_T state[], int32_T nChans)
{
  int32_T i;



  for (i = 0; i < nChans; i++) {
    state[i << 1] = 362436069U;
    state[(i << 1) + 1] = seed[i] == 0U ? 521288629U : seed[i];
  }


}

void RandSrc_GZ_D(real_T y[], const real_T mean[], int32_T meanLen, const real_T
                  xstd[], int32_T xstdLen, uint32_T state[], int32_T nChans,
                  int32_T nSamps)
{
  int32_T i;
  int32_T j;
  real_T r;
  real_T x;
  real_T s;
  real_T y_0;
  int32_T chan;
  real_T std;
  uint32_T icng;
  uint32_T jsr;
  int32_T samp;
  real_T mean_0;
  static const real_T vt[65] = { 0.340945, 0.4573146, 0.5397793, 0.6062427,
    0.6631691, 0.7136975, 0.7596125, 0.8020356, 0.8417227, 0.8792102, 0.9148948,
    0.9490791, 0.9820005, 1.0138492, 1.044781, 1.0749254, 1.1043917, 1.1332738,
    1.161653, 1.189601, 1.2171815, 1.2444516, 1.2714635, 1.298265, 1.3249008,
    1.3514125, 1.3778399, 1.4042211, 1.4305929, 1.4569915, 1.4834527, 1.5100122,
    1.5367061, 1.5635712, 1.5906454, 1.617968, 1.6455802, 1.6735255, 1.7018503,
    1.7306045, 1.7598422, 1.7896223, 1.8200099, 1.851077, 1.8829044, 1.9155831,
    1.9492166, 1.9839239, 2.0198431, 2.0571356, 2.095993, 2.136645, 2.1793713,
    2.2245175, 2.2725186, 2.3239338, 2.3795008, 2.4402218, 2.5075117, 2.5834658,
    2.6713916, 2.7769942, 2.7769942, 2.7769942, 2.7769942 };



  for (chan = 0; chan < nChans; chan++) {
    mean_0 = mean[meanLen > 1 ? chan : 0];
    std = xstd[xstdLen > 1 ? chan : 0];
    icng = state[chan << 1];
    jsr = state[(chan << 1) + 1];
    for (samp = 0; samp < nSamps; samp++) {
      icng = 69069U * icng + 1234567U;
      jsr ^= jsr << 13;
      jsr ^= jsr >> 17;
      jsr ^= jsr << 5;
      i = (int32_T)(icng + jsr);
      j = (i & 63) + 1;
      r = (real_T)i * 4.6566128730773926E-10 * vt[j];
      if (!(fabs(r) <= vt[j - 1])) {
        x = (fabs(r) - vt[j - 1]) / (vt[j] - vt[j - 1]);
        icng = 69069U * icng + 1234567U;
        jsr ^= jsr << 13;
        jsr ^= jsr >> 17;
        jsr ^= jsr << 5;
        y_0 = (real_T)(int32_T)(icng + jsr) * 2.328306436538696E-10 + 0.5;
        s = x + y_0;
        if (s > 1.301198) {
          r = r < 0.0 ? 0.4878992 * x - 0.4878992 : 0.4878992 - 0.4878992 * x;
        } else {
          if (!(s <= 0.9689279)) {
            x = 0.4878992 - 0.4878992 * x;
            if (y_0 > 12.67706 - exp(-0.5 * x * x) * 12.37586) {
              r = r < 0.0 ? -x : x;
            } else {
              if (!(exp(-0.5 * vt[j] * vt[j]) + y_0 * 0.01958303 / vt[j] <= exp(
                    -0.5 * r * r))) {
                do {
                  icng = 69069U * icng + 1234567U;
                  jsr ^= jsr << 13;
                  jsr ^= jsr >> 17;
                  jsr ^= jsr << 5;
                  x = log((real_T)(int32_T)(icng + jsr) * 2.328306436538696E-10
                          + 0.5) / 2.776994;
                  icng = 69069U * icng + 1234567U;
                  jsr ^= jsr << 13;
                  jsr ^= jsr >> 17;
                  jsr ^= jsr << 5;
                } while (log((real_T)(int32_T)(icng + jsr) *
                             2.328306436538696E-10 + 0.5) * -2.0 <= x * x);

                r = r < 0.0 ? x - 2.776994 : 2.776994 - x;
              }
            }
          }
        }
      }

      y[chan * nSamps + samp] = std * r + mean_0;
    }

    state[chan << 1] = icng;
    state[(chan << 1) + 1] = jsr;
  }


}

void MWSPCGlmsnw_D(const real_T x[], const real_T d[], const real_T mu, uint32_T
                   *startIdx, real_T xBuf[], real_T wBuf[], const int32_T wLen,
                   const real_T leakFac, const int32_T xLen, real_T y[], real_T
                   eY[], real_T wY[])
{
  int32_T i;
  int32_T j;
  real_T divideResult;
  real_T bufEnergy;
  int32_T j_0;


  for (i = 0; i < xLen; i++) {
    y[i] = 0.0;
  }

  for (i = 0; i < xLen; i++) {
    bufEnergy = 0.0;



    xBuf[*startIdx] = x[i];
    (*startIdx)++;
    if (*startIdx == (uint32_T)wLen) {
      *startIdx = 0U;
    }





    j_0 = 0;
    for (j = (int32_T)*startIdx; j < wLen; j++) {
      y[i] += wBuf[j_0] * xBuf[j];
      bufEnergy += xBuf[j] * xBuf[j];
      j_0++;
    }

    for (j = 0; j < (int32_T)*startIdx; j++) {
      y[i] += wBuf[j_0] * xBuf[j];
      bufEnergy += xBuf[j] * xBuf[j];
      j_0++;
    }



    eY[i] = d[i] - y[i];



    j_0 = 0;
    for (j = (int32_T)*startIdx; j < wLen; j++) {
      divideResult = xBuf[j] / (bufEnergy + 2.2204460492503131E-16);
      wBuf[j_0] = eY[i] * divideResult * mu + leakFac * wBuf[j_0];
      j_0++;
    }

    for (j = 0; j < (int32_T)*startIdx; j++) {
      divideResult = xBuf[j] / (bufEnergy + 2.2204460492503131E-16);
      wBuf[j_0] = eY[i] * divideResult * mu + leakFac * wBuf[j_0];
      j_0++;
    }
  }

  j_0 = wLen;
  for (j = 0; j < wLen; j++) {
    wY[j] = wBuf[j_0 - 1];
    j_0--;
  }


}


void ex_codegen_dsp_step(void)
{
  int32_T cff;
  real_T acc;
  int32_T j;
  real_T rtb_LMSFilter_o1;
  real_T rtb_LMSFilter_o2;


  RandSrc_GZ_D(&ex_codegen_dsp_B.RandomSource,
               &ex_codegen_dsp_P.RandomSource_MeanRTP, 1,
               &ex_codegen_dsp_P.RandomSource_VarianceRTP, 1,
               ex_codegen_dsp_DW.RandomSource_STATE_DWORK, 1, 1);


  acc = ex_codegen_dsp_B.RandomSource *
    ex_codegen_dsp_P.GeneratedFilterBlock_Coefficien[0];
  cff = 1;
  for (j = ex_codegen_dsp_DW.GeneratedFilterBlock_circBuf; j < 31; j++) {
    acc += ex_codegen_dsp_DW.GeneratedFilterBlock_states[j] *
      ex_codegen_dsp_P.GeneratedFilterBlock_Coefficien[cff];
    cff++;
  }

  for (j = 0; j < ex_codegen_dsp_DW.GeneratedFilterBlock_circBuf; j++) {
    acc += ex_codegen_dsp_DW.GeneratedFilterBlock_states[j] *
      ex_codegen_dsp_P.GeneratedFilterBlock_Coefficien[cff];
    cff++;
  }

  ex_codegen_dsp_B.GeneratedFilterBlock = acc;




  MWSPCGlmsnw_D(&ex_codegen_dsp_B.RandomSource,
                &ex_codegen_dsp_B.GeneratedFilterBlock,
                ex_codegen_dsp_P.LMSFilter_MU_RTP,
                &ex_codegen_dsp_DW.LMSFilter_BUFF_IDX_DWORK,
                &ex_codegen_dsp_DW.LMSFilter_IN_BUFFER_DWORK[0U],
                &ex_codegen_dsp_DW.LMSFilter_WGT_IC_DWORK[0U], 32,
                ex_codegen_dsp_P.LMSFilter_LEAKAGE_RTP, 1, &rtb_LMSFilter_o1,
                &rtb_LMSFilter_o2, &ex_codegen_dsp_B.LMSFilter_o3[0U]);


  ex_codegen_dsp_DW.GeneratedFilterBlock_circBuf--;
  if (ex_codegen_dsp_DW.GeneratedFilterBlock_circBuf < 0) {
    ex_codegen_dsp_DW.GeneratedFilterBlock_circBuf = 30;
  }

  ex_codegen_dsp_DW.GeneratedFilterBlock_states[ex_codegen_dsp_DW.GeneratedFilterBlock_circBuf]
    = ex_codegen_dsp_B.RandomSource;


}


void ex_codegen_dsp_initialize(void)
{



  ((ex_codegen_dsp_M)->errorStatus = ((0)));


  (void) memset(((void *) &ex_codegen_dsp_B), 0,
                sizeof(B_ex_codegen_dsp_T));


  (void) memset((void *)&ex_codegen_dsp_DW, 0,
                sizeof(DW_ex_codegen_dsp_T));

  {
    int32_T i;


    ex_codegen_dsp_DW.RandomSource_SEED_DWORK =
      ex_codegen_dsp_P.RandomSource_InitSeed;
    RandSrcInitState_GZ(&ex_codegen_dsp_DW.RandomSource_SEED_DWORK,
                        ex_codegen_dsp_DW.RandomSource_STATE_DWORK, 1);


    ex_codegen_dsp_DW.GeneratedFilterBlock_circBuf = 0;
    for (i = 0; i < 31; i++) {
      ex_codegen_dsp_DW.GeneratedFilterBlock_states[i] =
        ex_codegen_dsp_P.GeneratedFilterBlock_InitialSta;
    }




    ex_codegen_dsp_DW.LMSFilter_BUFF_IDX_DWORK = 0U;
    for (i = 0; i < 32; i++) {
      ex_codegen_dsp_DW.LMSFilter_WGT_IC_DWORK[i] = 0.0;
      ex_codegen_dsp_DW.LMSFilter_IN_BUFFER_DWORK[i] = 0.0;
    }


  }
}


void ex_codegen_dsp_terminate(void)
{

}
