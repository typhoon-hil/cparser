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
# 1 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\math.h" 1 3
# 11 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\math.h" 3
# 1 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 1 3
# 11 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
# 1 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 1 3
# 10 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 3
# 1 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 1 3
# 45 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 3
# 1 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\sal.h" 1 3
# 2970 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\sal.h" 3
# 1 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\concurrencysal.h" 1 3
# 2971 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\sal.h" 2 3
# 46 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 2 3
# 1 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\vadefs.h" 1 3
# 32 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\vadefs.h" 3
# 1 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vadefs.h" 1 3
# 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vadefs.h" 3
#pragma pack(push, 8)
# 28 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vadefs.h" 3
 typedef unsigned __int64 uintptr_t;
# 39 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vadefs.h" 3
        typedef char* va_list;
# 112 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vadefs.h" 3
    void __cdecl __va_start(va_list* , ...);
# 163 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vadefs.h" 3
#pragma pack(pop)
# 33 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\vadefs.h" 2 3
# 47 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 2 3
# 81 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 3
#pragma pack(push, 8)
# 180 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 3
 typedef unsigned __int64 size_t;
    typedef __int64 ptrdiff_t;
    typedef __int64 intptr_t;
# 196 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 3
    typedef _Bool __vcrt_bool;
# 215 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 3
    typedef unsigned short wchar_t;
# 277 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 3
    void __cdecl __security_init_cookie(void);





        void __cdecl __security_check_cookie( uintptr_t _StackCookie);
        __declspec(noreturn) void __cdecl __report_gsfailure( uintptr_t _StackCookie);



extern uintptr_t __security_cookie;







#pragma pack(pop)
# 11 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 2 3

#pragma pack(push, 8)
# 145 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 3
 typedef _Bool __crt_bool;
# 253 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 3
             void __cdecl _invalid_parameter_noinfo(void);
         __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void);

__declspec(noreturn)
         void __cdecl _invoke_watson(
               wchar_t const* _Expression,
               wchar_t const* _FunctionName,
               wchar_t const* _FileName,
               unsigned int _LineNo,
               uintptr_t _Reserved);
# 482 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 3
typedef int errno_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef long __time32_t;
typedef __int64 __time64_t;

typedef struct __crt_locale_data_public
{
      unsigned short const* _locale_pctype;
                        int _locale_mb_cur_max;
               unsigned int _locale_lc_codepage;
} __crt_locale_data_public;

typedef struct __crt_locale_pointers
{
    struct __crt_locale_data* locinfo;
    struct __crt_multibyte_data* mbcinfo;
} __crt_locale_pointers;

typedef __crt_locale_pointers* _locale_t;

typedef struct _Mbstatet
{
    unsigned long _Wchar;
    unsigned short _Byte, _State;
} _Mbstatet;

typedef _Mbstatet mbstate_t;
# 523 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 3
        typedef __time64_t time_t;
# 533 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 3
    typedef size_t rsize_t;
# 1982 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt.h" 3
#pragma pack(pop)
# 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 2 3

#pragma pack(push, 8)

#pragma warning(push)
#pragma warning(disable: 4738)
#pragma warning(disable: 4820)






 struct _exception
    {
        int type;
        char* name;
        double arg1;
        double arg2;
        double retval;
    };






        struct _complex
        {
            double x, y;
        };
# 60 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
    typedef float float_t;
    typedef double double_t;
# 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
        extern double const _HUGE;
# 170 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
void __cdecl _fperrraise( int _Except);

                        short __cdecl _dclass( double _X);
                        short __cdecl _ldclass( long double _X);
                        short __cdecl _fdclass( float _X);

                        int __cdecl _dsign( double _X);
                        int __cdecl _ldsign( long double _X);
                        int __cdecl _fdsign( float _X);

                        int __cdecl _dpcomp( double _X, double _Y);
                        int __cdecl _ldpcomp( long double _X, long double _Y);
                        int __cdecl _fdpcomp( float _X, float _Y);

                        short __cdecl _dtest( double* _Px);
                        short __cdecl _ldtest( long double* _Px);
                        short __cdecl _fdtest( float* _Px);

         short __cdecl _d_int( double* _Px, short _Xexp);
         short __cdecl _ld_int( long double* _Px, short _Xexp);
         short __cdecl _fd_int( float* _Px, short _Xexp);

         short __cdecl _dscale( double* _Px, long _Lexp);
         short __cdecl _ldscale( long double* _Px, long _Lexp);
         short __cdecl _fdscale( float* _Px, long _Lexp);

         short __cdecl _dunscale( short* _Pex, double* _Px);
         short __cdecl _ldunscale( short* _Pex, long double* _Px);
         short __cdecl _fdunscale( short* _Pex, float* _Px);

                        short __cdecl _dexp( double* _Px, double _Y, long _Eoff);
                        short __cdecl _ldexp( long double* _Px, long double _Y, long _Eoff);
                        short __cdecl _fdexp( float* _Px, float _Y, long _Eoff);

                        short __cdecl _dnorm( unsigned short* _Ps);
                        short __cdecl _fdnorm( unsigned short* _Ps);

                        double __cdecl _dpoly( double _X, double const* _Tab, int _N);
                        long double __cdecl _ldpoly( long double _X, long double const* _Tab, int _N);
                        float __cdecl _fdpoly( float _X, float const* _Tab, int _N);

                        double __cdecl _dlog( double _X, int _Baseflag);
                        long double __cdecl _ldlog( long double _X, int _Baseflag);
                        float __cdecl _fdlog( float _X, int _Baseflag);

                        double __cdecl _dsin( double _X, unsigned int _Qoff);
                        long double __cdecl _ldsin( long double _X, unsigned int _Qoff);
                        float __cdecl _fdsin( float _X, unsigned int _Qoff);


typedef union
{
    unsigned short _Sh[4];
    double _Val;
} _double_val;


typedef union
{
    unsigned short _Sh[2];
    float _Val;
} _float_val;


typedef union
{
    unsigned short _Sh[4];
    long double _Val;
} _ldouble_val;

typedef union
{
    unsigned short _Word[4];
    float _Float;
    double _Double;
    long double _Long_double;
} _float_const;

extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C;
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C;
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C;

extern const _float_const _Eps_C, _Rteps_C;
extern const _float_const _FEps_C, _FRteps_C;
extern const _float_const _LEps_C, _LRteps_C;

extern const double _Zero_C, _Xbig_C;
extern const float _FZero_C, _FXbig_C;
extern const long double _LZero_C, _LXbig_C;
# 465 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
                   int __cdecl abs( int _X);
                   long __cdecl labs( long _X);
                   long long __cdecl llabs( long long _X);

                   double __cdecl acos( double _X);
                   double __cdecl asin( double _X);
                   double __cdecl atan( double _X);
                   double __cdecl atan2( double _Y, double _X);

                   double __cdecl cos( double _X);
                   double __cdecl cosh( double _X);
                   double __cdecl exp( double _X);
                                      double __cdecl fabs( double _X);
                   double __cdecl fmod( double _X, double _Y);
                   double __cdecl log( double _X);
                   double __cdecl log10( double _X);
                   double __cdecl pow( double _X, double _Y);
                   double __cdecl sin( double _X);
                   double __cdecl sinh( double _X);
                                      double __cdecl sqrt( double _X);
                   double __cdecl tan( double _X);
                   double __cdecl tanh( double _X);

                            double __cdecl acosh( double _X);
                            double __cdecl asinh( double _X);
                            double __cdecl atanh( double _X);
                             double __cdecl atof( char const* _String);
                             double __cdecl _atof_l( char const* _String, _locale_t _Locale);
                            double __cdecl _cabs( struct _complex _Complex_value);
                            double __cdecl cbrt( double _X);
                            double __cdecl ceil( double _X);
                            double __cdecl _chgsign( double _X);
                            double __cdecl copysign( double _Number, double _Sign);
                            double __cdecl _copysign( double _Number, double _Sign);
                            double __cdecl erf( double _X);
                            double __cdecl erfc( double _X);
                            double __cdecl exp2( double _X);
                            double __cdecl expm1( double _X);
                            double __cdecl fdim( double _X, double _Y);
                            double __cdecl floor( double _X);
                            double __cdecl fma( double _X, double _Y, double _Z);
                            double __cdecl fmax( double _X, double _Y);
                            double __cdecl fmin( double _X, double _Y);
                            double __cdecl frexp( double _X, int* _Y);
                            double __cdecl hypot( double _X, double _Y);
                            double __cdecl _hypot( double _X, double _Y);
                            int __cdecl ilogb( double _X);
                            double __cdecl ldexp( double _X, int _Y);
                            double __cdecl lgamma( double _X);
                            long long __cdecl llrint( double _X);
                            long long __cdecl llround( double _X);
                            double __cdecl log1p( double _X);
                            double __cdecl log2( double _X);
                            double __cdecl logb( double _X);
                            long __cdecl lrint( double _X);
                            long __cdecl lround( double _X);

    int __cdecl _matherr( struct _exception* _Except);

                            double __cdecl modf( double _X, double* _Y);
                            double __cdecl nan( char const* _X);
                            double __cdecl nearbyint( double _X);
                            double __cdecl nextafter( double _X, double _Y);
                            double __cdecl nexttoward( double _X, long double _Y);
                            double __cdecl remainder( double _X, double _Y);
                            double __cdecl remquo( double _X, double _Y, int* _Z);
                            double __cdecl rint( double _X);
                            double __cdecl round( double _X);
                            double __cdecl scalbln( double _X, long _Y);
                            double __cdecl scalbn( double _X, int _Y);
                            double __cdecl tgamma( double _X);
                            double __cdecl trunc( double _X);
                            double __cdecl _j0( double _X );
                            double __cdecl _j1( double _X );
                            double __cdecl _jn(int _X, double _Y);
                            double __cdecl _y0( double _X);
                            double __cdecl _y1( double _X);
                            double __cdecl _yn( int _X, double _Y);

                            float __cdecl acoshf( float _X);
                            float __cdecl asinhf( float _X);
                            float __cdecl atanhf( float _X);
                            float __cdecl cbrtf( float _X);
                            float __cdecl _chgsignf( float _X);
                            float __cdecl copysignf( float _Number, float _Sign);
                            float __cdecl _copysignf( float _Number, float _Sign);
                            float __cdecl erff( float _X);
                            float __cdecl erfcf( float _X);
                            float __cdecl expm1f( float _X);
                            float __cdecl exp2f( float _X);
                            float __cdecl fdimf( float _X, float _Y);
                            float __cdecl fmaf( float _X, float _Y, float _Z);
                            float __cdecl fmaxf( float _X, float _Y);
                            float __cdecl fminf( float _X, float _Y);
                            float __cdecl _hypotf( float _X, float _Y);
                            int __cdecl ilogbf( float _X);
                            float __cdecl lgammaf( float _X);
                            long long __cdecl llrintf( float _X);
                            long long __cdecl llroundf( float _X);
                            float __cdecl log1pf( float _X);
                            float __cdecl log2f( float _X);
                            float __cdecl logbf( float _X);
                            long __cdecl lrintf( float _X);
                            long __cdecl lroundf( float _X);
                            float __cdecl nanf( char const* _X);
                            float __cdecl nearbyintf( float _X);
                            float __cdecl nextafterf( float _X, float _Y);
                            float __cdecl nexttowardf( float _X, long double _Y);
                            float __cdecl remainderf( float _X, float _Y);
                            float __cdecl remquof( float _X, float _Y, int* _Z);
                            float __cdecl rintf( float _X);
                            float __cdecl roundf( float _X);
                            float __cdecl scalblnf( float _X, long _Y);
                            float __cdecl scalbnf( float _X, int _Y);
                            float __cdecl tgammaf( float _X);
                            float __cdecl truncf( float _X);
# 590 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
                                float __cdecl _logbf( float _X);
                                float __cdecl _nextafterf( float _X, float _Y);
                                int __cdecl _finitef( float _X);
                                int __cdecl _isnanf( float _X);
                                int __cdecl _fpclassf( float _X);

                                int __cdecl _set_FMA3_enable( int _Flag);
                                int __cdecl _get_FMA3_enable(void);
# 610 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
                                float __cdecl acosf( float _X);
                                float __cdecl asinf( float _X);
                                float __cdecl atan2f( float _Y, float _X);
                                float __cdecl atanf( float _X);
                                float __cdecl ceilf( float _X);
                                float __cdecl cosf( float _X);
                                float __cdecl coshf( float _X);
                                float __cdecl expf( float _X);
# 669 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
                       __inline float __cdecl fabsf( float _X)
        {
            return (float)fabs(_X);
        }





                                float __cdecl floorf( float _X);
                                float __cdecl fmodf( float _X, float _Y);
# 695 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
                   __inline float __cdecl frexpf( float _X, int *_Y)
    {
        return (float)frexp(_X, _Y);
    }

                   __inline float __cdecl hypotf( float _X, float _Y)
    {
        return _hypotf(_X, _Y);
    }

                   __inline float __cdecl ldexpf( float _X, int _Y)
    {
        return (float)ldexp(_X, _Y);
    }



                                float __cdecl log10f( float _X);
                                float __cdecl logf( float _X);
                                float __cdecl modff( float _X, float *_Y);
                                float __cdecl powf( float _X, float _Y);
                                float __cdecl sinf( float _X);
                                float __cdecl sinhf( float _X);
                                float __cdecl sqrtf( float _X);
                                float __cdecl tanf( float _X);
                                float __cdecl tanhf( float _X);
# 774 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
                            long double __cdecl acoshl( long double _X);

                   __inline long double __cdecl acosl( long double _X)
    {
        return acos((double)_X);
    }

                            long double __cdecl asinhl( long double _X);

                   __inline long double __cdecl asinl( long double _X)
    {
        return asin((double)_X);
    }

                   __inline long double __cdecl atan2l( long double _Y, long double _X)
    {
        return atan2((double)_Y, (double)_X);
    }

                            long double __cdecl atanhl( long double _X);

                   __inline long double __cdecl atanl( long double _X)
    {
        return atan((double)_X);
    }

                            long double __cdecl cbrtl( long double _X);

                   __inline long double __cdecl ceill( long double _X)
    {
        return ceil((double)_X);
    }

                   __inline long double __cdecl _chgsignl( long double _X)
    {
        return _chgsign((double)_X);
    }

                            long double __cdecl copysignl( long double _Number, long double _Sign);

                   __inline long double __cdecl _copysignl( long double _Number, long double _Sign)
    {
        return _copysign((double)_Number, (double)_Sign);
    }

                   __inline long double __cdecl coshl( long double _X)
    {
        return cosh((double)_X);
    }

                   __inline long double __cdecl cosl( long double _X)
    {
        return cos((double)_X);
    }

                            long double __cdecl erfl( long double _X);
                            long double __cdecl erfcl( long double _X);

                   __inline long double __cdecl expl( long double _X)
    {
        return exp((double)_X);
    }

                            long double __cdecl exp2l( long double _X);
                            long double __cdecl expm1l( long double _X);

                   __inline long double __cdecl fabsl( long double _X)
    {
        return fabs((double)_X);
    }

                            long double __cdecl fdiml( long double _X, long double _Y);

                   __inline long double __cdecl floorl( long double _X)
    {
        return floor((double)_X);
    }

                            long double __cdecl fmal( long double _X, long double _Y, long double _Z);
                            long double __cdecl fmaxl( long double _X, long double _Y);
                            long double __cdecl fminl( long double _X, long double _Y);

                   __inline long double __cdecl fmodl( long double _X, long double _Y)
    {
        return fmod((double)_X, (double)_Y);
    }

                   __inline long double __cdecl frexpl( long double _X, int *_Y)
    {
        return frexp((double)_X, _Y);
    }

                            int __cdecl ilogbl( long double _X);

                   __inline long double __cdecl _hypotl( long double _X, long double _Y)
    {
        return _hypot((double)_X, (double)_Y);
    }

                   __inline long double __cdecl hypotl( long double _X, long double _Y)
    {
        return _hypot((double)_X, (double)_Y);
    }

                   __inline long double __cdecl ldexpl( long double _X, int _Y)
    {
        return ldexp((double)_X, _Y);
    }

                            long double __cdecl lgammal( long double _X);
                            long long __cdecl llrintl( long double _X);
                            long long __cdecl llroundl( long double _X);

                   __inline long double __cdecl logl( long double _X)
    {
        return log((double)_X);
    }

                   __inline long double __cdecl log10l( long double _X)
    {
        return log10((double)_X);
    }

                            long double __cdecl log1pl( long double _X);
                            long double __cdecl log2l( long double _X);
                            long double __cdecl logbl( long double _X);
                            long __cdecl lrintl( long double _X);
                            long __cdecl lroundl( long double _X);

                   __inline long double __cdecl modfl( long double _X, long double* _Y)
    {
        double _F, _I;
        _F = modf((double)_X, &_I);
        *_Y = _I;
        return _F;
    }

                            long double __cdecl nanl( char const* _X);
                            long double __cdecl nearbyintl( long double _X);
                            long double __cdecl nextafterl( long double _X, long double _Y);
                            long double __cdecl nexttowardl( long double _X, long double _Y);

                   __inline long double __cdecl powl( long double _X, long double _Y)
    {
        return pow((double)_X, (double)_Y);
    }

                            long double __cdecl remainderl( long double _X, long double _Y);
                            long double __cdecl remquol( long double _X, long double _Y, int* _Z);
                            long double __cdecl rintl( long double _X);
                            long double __cdecl roundl( long double _X);
                            long double __cdecl scalblnl( long double _X, long _Y);
                            long double __cdecl scalbnl( long double _X, int _Y);

                   __inline long double __cdecl sinhl( long double _X)
    {
        return sinh((double)_X);
    }

                   __inline long double __cdecl sinl( long double _X)
    {
        return sin((double)_X);
    }

                   __inline long double __cdecl sqrtl( long double _X)
    {
        return sqrt((double)_X);
    }

                   __inline long double __cdecl tanhl( long double _X)
    {
        return tanh((double)_X);
    }

                   __inline long double __cdecl tanl( long double _X)
    {
        return tan((double)_X);
    }

                            long double __cdecl tgammal( long double _X);
                            long double __cdecl truncl( long double _X);
# 975 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_math.h" 3
            extern double HUGE;




        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_j0" ". See online help for details.")) double __cdecl j0( double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_j1" ". See online help for details.")) double __cdecl j1( double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_jn" ". See online help for details.")) double __cdecl jn( int _X, double _Y);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_y0" ". See online help for details.")) double __cdecl y0( double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_y1" ". See online help for details.")) double __cdecl y1( double _X);
        __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_yn" ". See online help for details.")) double __cdecl yn( int _X, double _Y);





#pragma warning(pop)

#pragma pack(pop)
# 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\math.h" 2 3
# 22 "./ex_codegen_dsp.h" 2
# 1 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\stddef.h" 1 3
# 51 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\stddef.h" 3
typedef long long int ptrdiff_t;
# 62 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\stddef.h" 3
typedef long long unsigned int size_t;
# 90 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\stddef.h" 3
typedef unsigned short wchar_t;
# 118 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\stddef.h" 3
# 1 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include/__stddef_max_align_t.h" 1 3
# 30 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include/__stddef_max_align_t.h" 3
typedef double max_align_t;
# 119 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\stddef.h" 2 3
# 23 "./ex_codegen_dsp.h" 2
# 1 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 1 3
# 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
# 1 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h" 1 3
# 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h" 3
# 1 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memcpy_s.h" 1 3
# 11 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memcpy_s.h" 3
# 1 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\errno.h" 1 3
# 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\errno.h" 3
#pragma pack(push, 8)




 int* __cdecl _errno(void);


             errno_t __cdecl _set_errno( int _Value);
             errno_t __cdecl _get_errno( int* _Value);

             unsigned long* __cdecl __doserrno(void);


             errno_t __cdecl _set_doserrno( unsigned long _Value);
             errno_t __cdecl _get_doserrno( unsigned long * _Value);
# 129 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\errno.h" 3
#pragma pack(pop)
# 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memcpy_s.h" 2 3
# 1 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime_string.h" 1 3
# 10 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime_string.h" 3
# 1 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 1 3
# 11 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime_string.h" 2 3



#pragma pack(push, 8)




 void * __cdecl memchr(
                                    void const* _Buf,
                                    int _Val,
                                    size_t _MaxCount
    );


int __cdecl memcmp(
                            void const* _Buf1,
                            void const* _Buf2,
                            size_t _Size
    );
# 40 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime_string.h" 3
void* __cdecl memcpy(
                                  void* _Dst,
                                  void const* _Src,
                                  size_t _Size
    );


         void* __cdecl memmove(
                                      void* _Dst,
                                      void const* _Src,
                                      size_t _Size
    );
# 60 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime_string.h" 3
void* __cdecl memset(
                                  void* _Dst,
                                  int _Val,
                                  size_t _Size
    );


         char * __cdecl strchr(
           char const* _Str,
           int _Val
    );


         char * __cdecl strrchr(
           char const* _Str,
           int _Ch
    );


         char * __cdecl strstr(
           char const* _Str,
           char const* _SubStr
    );



         wchar_t * __cdecl wcschr(
           wchar_t const* _Str,
           wchar_t _Ch
    );


         wchar_t * __cdecl wcsrchr(
           wchar_t const* _Str,
           wchar_t _Ch
    );



         wchar_t * __cdecl wcsstr(
           wchar_t const* _Str,
           wchar_t const* _SubStr
    );



#pragma pack(pop)
# 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memcpy_s.h" 2 3

#pragma pack(push, 8)
# 35 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memcpy_s.h" 3
 static __inline errno_t __cdecl memcpy_s(
                                                                 void* const _Destination,
                                                                 rsize_t const _DestinationSize,
                                                                 void const* const _Source,
                                                                 rsize_t const _SourceSize
        )
    {
        if (_SourceSize == 0)
        {
            return 0;
        }

        { int _Expr_val=!!(_Destination != ((void*)0)); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        if (_Source == ((void*)0) || _DestinationSize < _SourceSize)
        {
            memset(_Destination, 0, _DestinationSize);

            { int _Expr_val=!!(_Source != ((void*)0)); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
            { int _Expr_val=!!(_DestinationSize >= _SourceSize); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; } };


            return 22;
        }

        memcpy(_Destination, _Source, _SourceSize);
        return 0;
    }


    static __inline errno_t __cdecl memmove_s(
                                                                 void* const _Destination,
                                                                 rsize_t const _DestinationSize,
                                                                 void const* const _Source,
                                                                 rsize_t const _SourceSize
        )
    {
        if (_SourceSize == 0)
        {
            return 0;
        }

        { int _Expr_val=!!(_Destination != ((void*)0)); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        { int _Expr_val=!!(_Source != ((void*)0)); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; } };
        { int _Expr_val=!!(_DestinationSize >= _SourceSize); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; } };

        memmove(_Destination, _Source, _SourceSize);
        return 0;
    }





#pragma pack(pop)
# 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h" 2 3




#pragma pack(push, 8)




 int __cdecl _memicmp(
                                void const* _Buf1,
                                void const* _Buf2,
                                size_t _Size
    );


         int __cdecl _memicmp_l(
                                void const* _Buf1,
                                void const* _Buf2,
                                size_t _Size,
                                _locale_t _Locale
    );
# 78 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h" 3
    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_memccpy" ". See online help for details."))
             void* __cdecl memccpy(
                                      void* _Dst,
                                      void const* _Src,
                                      int _Val,
                                      size_t _Size
        );

                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_memicmp" ". See online help for details."))
             int __cdecl memicmp(
                                    void const* _Buf1,
                                    void const* _Buf2,
                                    size_t _Size
        );
# 114 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_memory.h" 3
#pragma pack(pop)
# 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 2 3
# 1 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 1 3
# 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
#pragma pack(push, 8)
# 28 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
 errno_t __cdecl wcscat_s(
                                        wchar_t* _Destination,
             rsize_t _SizeInWords,
               wchar_t const* _Source
        );


             errno_t __cdecl wcscpy_s(
                                     wchar_t* _Destination,
             rsize_t _SizeInWords,
               wchar_t const* _Source
        );


             errno_t __cdecl wcsncat_s(
                                        wchar_t* _Destination,
                                        rsize_t _SizeInWords,
                                        wchar_t const* _Source,
                                        rsize_t _MaxCount
        );


             errno_t __cdecl wcsncpy_s(
                                     wchar_t* _Destination,
                                     rsize_t _SizeInWords,
                                     wchar_t const* _Source,
                                     rsize_t _MaxCount
        );


             wchar_t* __cdecl wcstok_s(
                                      wchar_t* _String,
                                      wchar_t const* _Delimiter,
                                      wchar_t** _Context
        );
# 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
         __declspec(allocator) wchar_t* __cdecl _wcsdup(
           wchar_t const* _String
    );
# 97 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl wcscat( wchar_t *_Destination, wchar_t const* _Source);




#pragma warning(pop)



 int __cdecl wcscmp(
           wchar_t const* _String1,
           wchar_t const* _String2
    );







#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl wcscpy( wchar_t *_Destination, wchar_t const* _Source);




#pragma warning(pop)


 size_t __cdecl wcscspn(
           wchar_t const* _String,
           wchar_t const* _Control
    );


         size_t __cdecl wcslen(
           wchar_t const* _String
    );
# 150 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
         size_t __cdecl wcsnlen(
                               wchar_t const* _Source,
                               size_t _MaxCount
    );
# 166 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
    static __inline size_t __cdecl wcsnlen_s(
                                   wchar_t const* _Source,
                                   size_t _MaxCount
        )
    {
        return (_Source == 0) ? 0 : wcsnlen(_Source, _MaxCount);
    }
# 183 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl wcsncat( wchar_t *_Destination, wchar_t const* _Source, size_t _Count);
# 192 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
         int __cdecl wcsncmp(
                               wchar_t const* _String1,
                               wchar_t const* _String2,
                               size_t _MaxCount
    );
# 205 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl wcsncpy( wchar_t *_Destination, wchar_t const* _Source, size_t _Count);
# 214 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
         wchar_t * __cdecl wcspbrk(
           wchar_t const* _String,
           wchar_t const* _Control
    );


         size_t __cdecl wcsspn(
           wchar_t const* _String,
           wchar_t const* _Control
    );

               __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
         wchar_t* __cdecl wcstok(
                                      wchar_t* _String,
                                      wchar_t const* _Delimiter,
                                      wchar_t** _Context
    );
# 243 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
#pragma warning(push)
#pragma warning(disable: 4141 4996)

 __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
    static __inline wchar_t* __cdecl _wcstok(
                      wchar_t* const _String,
                      wchar_t const* const _Delimiter
        )
    {
        return wcstok(_String, _Delimiter, 0);
    }
# 270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
#pragma warning(pop)






 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
         wchar_t* __cdecl _wcserror(
         int _ErrorNumber
    );


         errno_t __cdecl _wcserror_s(
                                     wchar_t* _Buffer,
                                     size_t _SizeInWords,
                                     int _ErrorNumber
    );
# 297 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
               __declspec(deprecated("This function or variable may be unsafe. Consider using " "__wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
         wchar_t* __cdecl __wcserror(
               wchar_t const* _String
    );

                                errno_t __cdecl __wcserror_s(
                                     wchar_t* _Buffer,
                                     size_t _SizeInWords,
                                     wchar_t const* _ErrorMessage
    );







                        int __cdecl _wcsicmp(
           wchar_t const* _String1,
           wchar_t const* _String2
    );

                        int __cdecl _wcsicmp_l(
             wchar_t const* _String1,
             wchar_t const* _String2,
             _locale_t _Locale
    );

                        int __cdecl _wcsnicmp(
                               wchar_t const* _String1,
                               wchar_t const* _String2,
                               size_t _MaxCount
    );

                        int __cdecl _wcsnicmp_l(
                               wchar_t const* _String1,
                               wchar_t const* _String2,
                               size_t _MaxCount,
                               _locale_t _Locale
    );

                            errno_t __cdecl _wcsnset_s(
                                    wchar_t* _Destination,
                                    size_t _SizeInWords,
                                    wchar_t _Value,
                                    size_t _MaxCount
    );
# 352 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl _wcsnset( wchar_t *_String, wchar_t _Value, size_t _MaxCount);







         wchar_t* __cdecl _wcsrev(
              wchar_t* _String
    );

                            errno_t __cdecl _wcsset_s(
                                    wchar_t* _Destination,
                                    size_t _SizeInWords,
                                    wchar_t _Value
    );







__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl _wcsset( wchar_t *_String, wchar_t _Value);






                            errno_t __cdecl _wcslwr_s(
                                    wchar_t* _String,
                                    size_t _SizeInWords
    );






__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl _wcslwr( wchar_t *_String);





         errno_t __cdecl _wcslwr_s_l(
                                    wchar_t* _String,
                                    size_t _SizeInWords,
                                    _locale_t _Locale
    );







__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl _wcslwr_l( wchar_t *_String, _locale_t _Locale);







         errno_t __cdecl _wcsupr_s(
                             wchar_t* _String,
                             size_t _Size
    );






__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl _wcsupr( wchar_t *_String);





         errno_t __cdecl _wcsupr_s_l(
                             wchar_t* _String,
                             size_t _Size,
                             _locale_t _Locale
    );







__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) wchar_t* __cdecl _wcsupr_l( wchar_t *_String, _locale_t _Locale);
# 456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
         size_t __cdecl wcsxfrm(
                                              wchar_t* _Destination,
                                              wchar_t const* _Source,
                                              size_t _MaxCount
    );



         size_t __cdecl _wcsxfrm_l(
                                              wchar_t* _Destination,
                                              wchar_t const* _Source,
                                              size_t _MaxCount,
                                              _locale_t _Locale
    );


         int __cdecl wcscoll(
           wchar_t const* _String1,
           wchar_t const* _String2
    );


         int __cdecl _wcscoll_l(
             wchar_t const* _String1,
             wchar_t const* _String2,
             _locale_t _Locale
    );


         int __cdecl _wcsicoll(
           wchar_t const* _String1,
           wchar_t const* _String2
    );


         int __cdecl _wcsicoll_l(
             wchar_t const* _String1,
             wchar_t const* _String2,
             _locale_t _Locale
    );


         int __cdecl _wcsncoll(
                               wchar_t const* _String1,
                               wchar_t const* _String2,
                               size_t _MaxCount
    );


         int __cdecl _wcsncoll_l(
                               wchar_t const* _String1,
                               wchar_t const* _String2,
                               size_t _MaxCount,
                               _locale_t _Locale
    );


         int __cdecl _wcsnicoll(
                               wchar_t const* _String1,
                               wchar_t const* _String2,
                               size_t _MaxCount
    );


         int __cdecl _wcsnicoll_l(
                               wchar_t const* _String1,
                               wchar_t const* _String2,
                               size_t _MaxCount,
                               _locale_t _Locale
    );
# 579 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsdup" ". See online help for details."))
             wchar_t* __cdecl wcsdup(
               wchar_t const* _String
        );
# 591 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\corecrt_wstring.h" 3
                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsicmp" ". See online help for details."))
             int __cdecl wcsicmp(
               wchar_t const* _String1,
               wchar_t const* _String2
        );

                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsnicmp" ". See online help for details."))
             int __cdecl wcsnicmp(
                                   wchar_t const* _String1,
                                   wchar_t const* _String2,
                                   size_t _MaxCount
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsnset" ". See online help for details."))

             wchar_t* __cdecl wcsnset(
                                     wchar_t* _String,
                                     wchar_t _Value,
                                     size_t _MaxCount
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsrev" ". See online help for details."))

             wchar_t* __cdecl wcsrev(
                  wchar_t* _String
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsset" ". See online help for details."))

             wchar_t* __cdecl wcsset(
                  wchar_t* _String,
                  wchar_t _Value
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcslwr" ". See online help for details."))

             wchar_t* __cdecl wcslwr(
                  wchar_t* _String
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsupr" ". See online help for details."))

             wchar_t* __cdecl wcsupr(
                  wchar_t* _String
        );

                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_wcsicoll" ". See online help for details."))
             int __cdecl wcsicoll(
               wchar_t const* _String1,
               wchar_t const* _String2
        );





#pragma pack(pop)
# 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 2 3




#pragma pack(push, 8)








 errno_t __cdecl strcpy_s(
                                     char* _Destination,
                                     rsize_t _SizeInBytes,
                                     char const* _Source
        );


             errno_t __cdecl strcat_s(
                                        char* _Destination,
                                        rsize_t _SizeInBytes,
                                        char const* _Source
        );


             errno_t __cdecl strerror_s(
                                     char* _Buffer,
                                     size_t _SizeInBytes,
                                     int _ErrorNumber);


             errno_t __cdecl strncat_s(
                                        char* _Destination,
                                        rsize_t _SizeInBytes,
                                        char const* _Source,
                                        rsize_t _MaxCount
        );


             errno_t __cdecl strncpy_s(
                                     char* _Destination,
                                     rsize_t _SizeInBytes,
                                     char const* _Source,
                                     rsize_t _MaxCount
        );


             char* __cdecl strtok_s(
                                      char* _String,
                                      char const* _Delimiter,
                                      char** _Context
        );



         void* __cdecl _memccpy(
                                      void* _Dst,
                                      void const* _Src,
                                      int _Val,
                                      size_t _MaxCount
    );
# 86 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "strcat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl strcat( char *_Destination, char const* _Source);




#pragma warning(pop)




int __cdecl strcmp(
           char const* _Str1,
           char const* _Str2
    );


         int __cdecl _strcmpi(
           char const* _String1,
           char const* _String2
    );


         int __cdecl strcoll(
           char const* _String1,
           char const* _String2
    );


         int __cdecl _strcoll_l(
             char const* _String1,
             char const* _String2,
             _locale_t _Locale
    );







#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl strcpy( char *_Destination, char const* _Source);




#pragma warning(pop)


 size_t __cdecl strcspn(
           char const* _Str,
           char const* _Control
    );







         __declspec(allocator) char* __cdecl _strdup(
               char const* _Source
    );







               __declspec(deprecated("This function or variable may be unsafe. Consider using " "_strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
         char* __cdecl _strerror(
               char const* _ErrorMessage
    );


         errno_t __cdecl _strerror_s(
                                 char* _Buffer,
                                 size_t _SizeInBytes,
                                 char const* _ErrorMessage
    );
# 180 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
               __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
         char* __cdecl strerror(
         int _ErrorMessage
    );
# 192 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
         int __cdecl _stricmp(
           char const* _String1,
           char const* _String2
    );


         int __cdecl _stricoll(
           char const* _String1,
           char const* _String2
    );


         int __cdecl _stricoll_l(
             char const* _String1,
             char const* _String2,
             _locale_t _Locale
    );


         int __cdecl _stricmp_l(
             char const* _String1,
             char const* _String2,
             _locale_t _Locale
    );


size_t __cdecl strlen(
           char const* _Str
    );


         errno_t __cdecl _strlwr_s(
                             char* _String,
                             size_t _Size
    );






__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl _strlwr( char *_String);





         errno_t __cdecl _strlwr_s_l(
                             char* _String,
                             size_t _Size,
                             _locale_t _Locale
    );







__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl _strlwr_l( char *_String, _locale_t _Locale);
# 265 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl strncat( char *_Destination, char const* _Source, size_t _Count);
# 274 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
         int __cdecl strncmp(
                               char const* _Str1,
                               char const* _Str2,
                               size_t _MaxCount
    );


         int __cdecl _strnicmp(
                               char const* _String1,
                               char const* _String2,
                               size_t _MaxCount
    );


         int __cdecl _strnicmp_l(
                               char const* _String1,
                               char const* _String2,
                               size_t _MaxCount,
                               _locale_t _Locale
    );


         int __cdecl _strnicoll(
                               char const* _String1,
                               char const* _String2,
                               size_t _MaxCount
    );


         int __cdecl _strnicoll_l(
                               char const* _String1,
                               char const* _String2,
                               size_t _MaxCount,
                               _locale_t _Locale
    );


         int __cdecl _strncoll(
                               char const* _String1,
                               char const* _String2,
                               size_t _MaxCount
    );


         int __cdecl _strncoll_l(
                               char const* _String1,
                               char const* _String2,
                               size_t _MaxCount,
                               _locale_t _Locale
    );

         size_t __cdecl __strncnt(
                            char const* _String,
                            size_t _Count
    );
# 337 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl strncpy( char *_Destination, char const* _Source, size_t _Count);
# 354 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
         size_t __cdecl strnlen(
                               char const* _String,
                               size_t _MaxCount
    );
# 370 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
    static __inline size_t __cdecl strnlen_s(
                                   char const* _String,
                                   size_t _MaxCount
        )
    {
        return _String == 0 ? 0 : strnlen(_String, _MaxCount);
    }




         errno_t __cdecl _strnset_s(
                                    char* _String,
                                    size_t _SizeInBytes,
                                    int _Value,
                                    size_t _MaxCount
    );
# 395 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl _strnset( char *_Destination, int _Value, size_t _Count);
# 404 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
         char * __cdecl strpbrk(
           char const* _Str,
           char const* _Control
    );

         char* __cdecl _strrev(
              char* _Str
    );


         errno_t __cdecl _strset_s(
                                        char* _Destination,
                                        size_t _DestinationSize,
                                        int _Value
    );







__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl _strset( char *_Destination, int _Value);






         size_t __cdecl strspn(
           char const* _Str,
           char const* _Control
    );

               __declspec(deprecated("This function or variable may be unsafe. Consider using " "strtok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details."))
         char* __cdecl strtok(
                  char* _String,
                  char const* _Delimiter
    );


         errno_t __cdecl _strupr_s(
                             char* _String,
                             size_t _Size
    );






__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl _strupr( char *_String);





         errno_t __cdecl _strupr_s_l(
                             char* _String,
                             size_t _Size,
                             _locale_t _Locale
    );







__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char* __cdecl _strupr_l( char *_String, _locale_t _Locale);
# 482 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
         size_t __cdecl strxfrm(
                                              char* _Destination,
                                              char const* _Source,
                                              size_t _MaxCount
    );



         size_t __cdecl _strxfrm_l(
                                              char* _Destination,
                                              char const* _Source,
                                              size_t _MaxCount,
                                              _locale_t _Locale
    );
# 537 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.16299.0\\ucrt\\string.h" 3
                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strdup" ". See online help for details."))
             char* __cdecl strdup(
                   char const* _String
        );






                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strcmpi" ". See online help for details."))
             int __cdecl strcmpi(
               char const* _String1,
               char const* _String2
        );

                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_stricmp" ". See online help for details."))
             int __cdecl stricmp(
               char const* _String1,
               char const* _String2
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strlwr" ". See online help for details."))
             char* __cdecl strlwr(
                  char* _String
        );

                   __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strnicmp" ". See online help for details."))
             int __cdecl strnicmp(
                                   char const* _String1,
                                   char const* _String2,
                                   size_t _MaxCount
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strnset" ". See online help for details."))
             char* __cdecl strnset(
                                     char* _String,
                                     int _Value,
                                     size_t _MaxCount
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strrev" ". See online help for details."))
             char* __cdecl strrev(
                  char* _String
        );

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strset" ". See online help for details."))
    char* __cdecl strset(
                  char* _String,
                  int _Value);

    __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C " "and C++ conformant name: " "_strupr" ". See online help for details."))
             char* __cdecl strupr(
                  char* _String
        );





#pragma pack(pop)
# 24 "./ex_codegen_dsp.h" 2
# 1 "./rtwtypes.h" 1
# 29 "./rtwtypes.h"
# 1 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\limits.h" 1 3
# 37 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\limits.h" 3
# 1 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\limits.h" 1 3
# 11 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\limits.h" 3
# 1 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\vcruntime.h" 1 3
# 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\limits.h" 2 3

#pragma pack(push, 8)
# 88 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.13.26128\\include\\limits.h" 3
#pragma pack(pop)
# 38 "C:\\Program Files\\LLVM\\lib\\clang\\6.0.0\\include\\limits.h" 2 3
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



  ((ex_codegen_dsp_M)->errorStatus = ((((void*)0))));


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
