/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:07 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2368;
  double t2369;
  double t2371;
  double t2372;
  double t3807;
  double t4132;
  double t4481;
  double t7989;
  double t7990;
  double t7992;
  double t7986;
  double t7987;
  double t7988;
  double t7994;
  double t7995;
  double t7996;
  double t7951;
  double t7964;
  double t7965;
  double t7981;
  double t7982;
  double t7983;
  double t7985;
  double t7993;
  double t8002;
  double t8013;
  double t8014;
  double t8015;
  double t8016;
  double t8021;
  double t8022;
  double t8027;
  double t8032;
  double t8033;
  double t8038;
  double t8039;
  double t8040;
  double t8041;
  double t8042;
  double t8043;
  double t8044;
  double t8045;
  double t8047;
  double t8048;
  double t8049;
  double t8050;
  double t8051;
  double t8064;
  double t8065;
  double t8066;
  double t8067;
  double t8068;
  double t8069;
  double t8070;
  double t8071;
  double t8072;
  double t8052;
  double t8073;
  double t8074;
  double t8085;
  double t8090;
  double t8091;
  double t8092;
  double t8056;
  double t8076;
  double t8096;
  double t8097;
  double t8098;
  double t8099;
  t2368 = Cos(var1[2]);
  t2369 = Cos(var1[3]);
  t2371 = -1.*t2368*t2369;
  t2372 = Sin(var1[2]);
  t3807 = Sin(var1[3]);
  t4132 = t2372*t3807;
  t4481 = t2371 + t4132;
  t7989 = t2368*t2369;
  t7990 = -1.*t2372*t3807;
  t7992 = t7989 + t7990;
  t7986 = -1.*t2369*t2372;
  t7987 = -1.*t2368*t3807;
  t7988 = t7986 + t7987;
  t7994 = t2369*t2372;
  t7995 = t2368*t3807;
  t7996 = t7994 + t7995;
  t7951 = -1.25*var2[3]*t4481;
  t7964 = Power(t2369,2);
  t7965 = 0.5*t7964;
  t7981 = Power(t3807,2);
  t7982 = 0.5*t7981;
  t7983 = t7965 + t7982;
  t7985 = -2.5*var2[2]*t4481*t7983;
  t7993 = 15.*t7988*t7992;
  t8002 = 5.*t7996*t7992;
  t8013 = 15.*t7988*t4481;
  t8014 = 5.*t7996*t4481;
  t8015 = t7993 + t8002 + t8013 + t8014;
  t8016 = -0.5*var2[1]*t8015;
  t8021 = Power(t7988,2);
  t8022 = 10.*t8021;
  t8027 = 10.*t7988*t7996;
  t8032 = Power(t7992,2);
  t8033 = 10.*t8032;
  t8038 = 10.*t7992*t4481;
  t8039 = t8022 + t8027 + t8033 + t8038;
  t8040 = -0.5*var2[0]*t8039;
  t8041 = t7951 + t7985 + t8016 + t8040;
  t8042 = var2[3]*t8041;
  t8043 = 10.*t7988*t7992;
  t8044 = 10.*t7996*t7992;
  t8045 = t8043 + t8044;
  t8047 = 5.*t8021;
  t8048 = 5.*t7988*t7996;
  t8049 = 5.*t8032;
  t8050 = 5.*t7992*t4481;
  t8051 = t8047 + t8048 + t8049 + t8050;
  t8064 = -1.25*var2[3]*t7996;
  t8065 = -2.5*var2[2]*t7996*t7983;
  t8066 = -0.5*var2[0]*t8015;
  t8067 = Power(t4481,2);
  t8068 = 10.*t8067;
  t8069 = t8022 + t8027 + t8038 + t8068;
  t8070 = -0.5*var2[1]*t8069;
  t8071 = t8064 + t8065 + t8066 + t8070;
  t8072 = var2[3]*t8071;
  t8052 = -0.5*var2[3]*t8051;
  t8073 = 10.*t7988*t4481;
  t8074 = t8043 + t8073;
  t8085 = -2.5*var2[1]*t7996*t7983;
  t8090 = -2.5*var2[0]*t4481*t7983;
  t8091 = t8085 + t8090;
  t8092 = var2[3]*t8091;
  t8056 = -2.5*var2[3]*t7988*t7983;
  t8076 = -2.5*var2[3]*t4481*t7983;
  t8096 = -1.25*var2[1]*t7996;
  t8097 = -1.25*var2[0]*t4481;
  t8098 = t8096 + t8097;
  t8099 = var2[3]*t8098;
  p_output1[0]=t8042;
  p_output1[1]=t8042;
  p_output1[2]=-0.5*t8045*var2[3];
  p_output1[3]=t8052;
  p_output1[4]=t8056;
  p_output1[5]=-0.5*t8045*var2[0] - 0.5*t8051*var2[1] - 2.5*t7983*t7988*var2[2] - 2.5*t7988*var2[3];
  p_output1[6]=t8072;
  p_output1[7]=t8072;
  p_output1[8]=t8052;
  p_output1[9]=-0.5*t8074*var2[3];
  p_output1[10]=t8076;
  p_output1[11]=t7985 - 0.5*t8051*var2[0] - 0.5*t8074*var2[1] - 2.5*t4481*var2[3];
  p_output1[12]=t8092;
  p_output1[13]=t8092;
  p_output1[14]=t8056;
  p_output1[15]=t8076;
  p_output1[16]=-2.5*t7983*t7988*var2[0] - 2.5*t4481*t7983*var2[1];
  p_output1[17]=t8099;
  p_output1[18]=t8099;
  p_output1[19]=-1.25*t7988*var2[3];
  p_output1[20]=t7951;
  p_output1[21]=-1.25*t7988*var2[0] - 1.25*t4481*var2[1];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec4_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce2_vec4_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
