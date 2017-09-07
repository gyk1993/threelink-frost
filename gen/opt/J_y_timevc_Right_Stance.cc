/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:28 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t8483;
  double t2920;
  double t3152;
  double t3153;
  double t8473;
  double t8479;
  double t8487;
  double t8489;
  double t8491;
  double t8492;
  double t8493;
  double t8494;
  double t8495;
  double t8498;
  double t8499;
  double t8500;
  double t8501;
  double t8502;
  double t8505;
  double t8506;
  double t8507;
  double t8510;
  double t8511;
  double t8514;
  double t8535;
  double t8537;
  double t8551;
  double t8552;
  double t8529;
  double t8530;
  double t8531;
  double t8532;
  double t8533;
  double t8534;
  double t8536;
  t8483 = -1.*var4[1];
  t2920 = -1. + var5[0];
  t3152 = -1. + var6[0];
  t3153 = 1/t3152;
  t8473 = -1.*t2920*t3153;
  t8479 = 1. + t8473;
  t8487 = var4[0] + t8483;
  t8489 = Power(t8487,-5);
  t8491 = -1.*var1[0];
  t8492 = t8491 + var1[1];
  t8493 = t2920*t3153*t8492;
  t8494 = t8483 + var1[0] + t8493;
  t8495 = Power(t8494,4);
  t8498 = Power(t8487,-4);
  t8499 = Power(t8494,3);
  t8500 = 1/t8487;
  t8501 = -1.*t8500*t8494;
  t8502 = 1. + t8501;
  t8505 = Power(t8487,-3);
  t8506 = Power(t8494,2);
  t8507 = Power(t8502,2);
  t8510 = Power(t8487,-2);
  t8511 = Power(t8502,3);
  t8514 = Power(t8502,4);
  t8535 = Power(t8494,5);
  t8537 = Power(t8487,-6);
  t8551 = -1.*t8510*t8494;
  t8552 = t8500 + t8551;
  t8529 = Power(t8502,5);
  t8530 = -1.*t8529;
  t8531 = -5.*t8500*t8494*t8514;
  t8532 = -10.*t8510*t8506*t8511;
  t8533 = -10.*t8505*t8499*t8507;
  t8534 = -5.*t8498*t8495*t8502;
  t8536 = -1.*t8489*t8535;
  p_output1[0]=5.*t8479*t8500*t8514*var3[0] + 20.*t8479*t8494*t8510*t8511*var3[2] - 5.*t8479*t8500*t8514*var3[2] + 30.*t8479*t8505*t8506*t8507*var3[4] - 20.*t8479*t8494*t8510*t8511*var3[4] + 20.*t8479*t8498*t8499*t8502*var3[6] - 30.*t8479*t8505*t8506*t8507*var3[6] + 5.*t8479*t8489*t8495*var3[8] - 20.*t8479*t8498*t8499*t8502*var3[8] - 5.*t8479*t8489*t8495*var3[10];
  p_output1[1]=5.*t2920*t3153*t8500*t8514*var3[0] + 20.*t2920*t3153*t8494*t8510*t8511*var3[2] - 5.*t2920*t3153*t8500*t8514*var3[2] + 30.*t2920*t3153*t8505*t8506*t8507*var3[4] - 20.*t2920*t3153*t8494*t8510*t8511*var3[4] + 20.*t2920*t3153*t8498*t8499*t8502*var3[6] - 30.*t2920*t3153*t8505*t8506*t8507*var3[6] + 5.*t2920*t3153*t8489*t8495*var3[8] - 20.*t2920*t3153*t8498*t8499*t8502*var3[8] - 5.*t2920*t3153*t8489*t8495*var3[10];
  p_output1[2]=1.;
  p_output1[3]=t8530;
  p_output1[4]=t8531;
  p_output1[5]=t8532;
  p_output1[6]=t8533;
  p_output1[7]=t8534;
  p_output1[8]=t8536;
  p_output1[9]=-5.*t8494*t8510*t8514*var3[0] - 20.*t8505*t8506*t8511*var3[2] + 5.*t8494*t8510*t8514*var3[2] - 30.*t8498*t8499*t8507*var3[4] + 20.*t8505*t8506*t8511*var3[4] - 20.*t8489*t8495*t8502*var3[6] + 30.*t8498*t8499*t8507*var3[6] + 20.*t8489*t8495*t8502*var3[8] - 5.*t8535*t8537*var3[8] + 5.*t8535*t8537*var3[10];
  p_output1[10]=-5.*t8514*t8552*var3[0] + 5.*t8500*t8514*var3[2] - 5.*t8494*t8510*t8514*var3[2] - 20.*t8494*t8500*t8511*t8552*var3[2] - 20.*t8505*t8506*t8511*var3[4] + 20.*t8494*t8510*t8511*var3[4] - 30.*t8506*t8507*t8510*t8552*var3[4] - 30.*t8498*t8499*t8507*var3[6] + 30.*t8505*t8506*t8507*var3[6] - 20.*t8499*t8502*t8505*t8552*var3[6] - 20.*t8489*t8495*t8502*var3[8] + 20.*t8498*t8499*t8502*var3[8] - 5.*t8495*t8498*t8552*var3[8] + 5.*t8489*t8495*var3[10] - 5.*t8535*t8537*var3[10];
  p_output1[11]=5.*t8479*t8500*t8514*var3[1] + 20.*t8479*t8494*t8510*t8511*var3[3] - 5.*t8479*t8500*t8514*var3[3] + 30.*t8479*t8505*t8506*t8507*var3[5] - 20.*t8479*t8494*t8510*t8511*var3[5] + 20.*t8479*t8498*t8499*t8502*var3[7] - 30.*t8479*t8505*t8506*t8507*var3[7] + 5.*t8479*t8489*t8495*var3[9] - 20.*t8479*t8498*t8499*t8502*var3[9] - 5.*t8479*t8489*t8495*var3[11];
  p_output1[12]=5.*t2920*t3153*t8500*t8514*var3[1] + 20.*t2920*t3153*t8494*t8510*t8511*var3[3] - 5.*t2920*t3153*t8500*t8514*var3[3] + 30.*t2920*t3153*t8505*t8506*t8507*var3[5] - 20.*t2920*t3153*t8494*t8510*t8511*var3[5] + 20.*t2920*t3153*t8498*t8499*t8502*var3[7] - 30.*t2920*t3153*t8505*t8506*t8507*var3[7] + 5.*t2920*t3153*t8489*t8495*var3[9] - 20.*t2920*t3153*t8498*t8499*t8502*var3[9] - 5.*t2920*t3153*t8489*t8495*var3[11];
  p_output1[13]=1.;
  p_output1[14]=t8530;
  p_output1[15]=t8531;
  p_output1[16]=t8532;
  p_output1[17]=t8533;
  p_output1[18]=t8534;
  p_output1[19]=t8536;
  p_output1[20]=-5.*t8494*t8510*t8514*var3[1] - 20.*t8505*t8506*t8511*var3[3] + 5.*t8494*t8510*t8514*var3[3] - 30.*t8498*t8499*t8507*var3[5] + 20.*t8505*t8506*t8511*var3[5] - 20.*t8489*t8495*t8502*var3[7] + 30.*t8498*t8499*t8507*var3[7] + 20.*t8489*t8495*t8502*var3[9] - 5.*t8535*t8537*var3[9] + 5.*t8535*t8537*var3[11];
  p_output1[21]=-5.*t8514*t8552*var3[1] + 5.*t8500*t8514*var3[3] - 5.*t8494*t8510*t8514*var3[3] - 20.*t8494*t8500*t8511*t8552*var3[3] - 20.*t8505*t8506*t8511*var3[5] + 20.*t8494*t8510*t8511*var3[5] - 30.*t8506*t8507*t8510*t8552*var3[5] - 30.*t8498*t8499*t8507*var3[7] + 30.*t8505*t8506*t8507*var3[7] - 20.*t8499*t8502*t8505*t8552*var3[7] - 20.*t8489*t8495*t8502*var3[9] + 20.*t8498*t8499*t8502*var3[9] - 5.*t8495*t8498*t8552*var3[9] + 5.*t8489*t8495*var3[11] - 5.*t8535*t8537*var3[11];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_timevc_Right_Stance.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_y_timevc_Right_Stance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
