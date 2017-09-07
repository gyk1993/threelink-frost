/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:30 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t8496;
  double t4126;
  double t4380;
  double t4382;
  double t4395;
  double t4396;
  double t8497;
  double t8508;
  double t8509;
  double t8513;
  double t8515;
  double t8516;
  double t8517;
  double t8521;
  double t8522;
  double t8523;
  double t8524;
  double t8525;
  double t8538;
  double t8539;
  double t8543;
  double t8544;
  double t8564;
  double t8575;
  double t8580;
  double t8600;
  double t8601;
  double t8565;
  double t8566;
  double t8567;
  double t8568;
  double t8569;
  double t8570;
  double t8571;
  double t8572;
  double t8573;
  double t8574;
  double t8576;
  double t8577;
  double t8578;
  double t8579;
  t8496 = -1.*var5[1];
  t4126 = -1. + var6[0];
  t4380 = -1. + var7[0];
  t4382 = 1/t4380;
  t4395 = -1.*t4126*t4382;
  t4396 = 1. + t4395;
  t8497 = var5[0] + t8496;
  t8508 = Power(t8497,-5);
  t8509 = -1.*var1[0];
  t8513 = t8509 + var1[1];
  t8515 = t4126*t4382*t8513;
  t8516 = t8496 + var1[0] + t8515;
  t8517 = Power(t8516,3);
  t8521 = Power(t8497,-4);
  t8522 = Power(t8516,2);
  t8523 = 1/t8497;
  t8524 = -1.*t8523*t8516;
  t8525 = 1. + t8524;
  t8538 = Power(t8497,-3);
  t8539 = Power(t8525,2);
  t8543 = Power(t8497,-2);
  t8544 = Power(t8525,3);
  t8564 = Power(t8525,4);
  t8575 = Power(t8516,4);
  t8580 = Power(t8497,-6);
  t8600 = -1.*t8543*t8516;
  t8601 = t8523 + t8600;
  t8565 = 5.*t8523*t8564;
  t8566 = 20.*t8543*t8516*t8544;
  t8567 = -5.*t8523*t8564;
  t8568 = t8566 + t8567;
  t8569 = 30.*t8538*t8522*t8539;
  t8570 = -20.*t8543*t8516*t8544;
  t8571 = t8569 + t8570;
  t8572 = 20.*t8521*t8517*t8525;
  t8573 = -30.*t8538*t8522*t8539;
  t8574 = t8572 + t8573;
  t8576 = 5.*t8508*t8575;
  t8577 = -20.*t8521*t8517*t8525;
  t8578 = t8576 + t8577;
  t8579 = -5.*t8508*t8575;
  p_output1[0]=-20.*t4396*t8543*t8544*var4[0] - 60.*t4396*t8516*t8538*t8539*var4[2] + 40.*t4396*t8543*t8544*var4[2] - 60.*t4396*t8521*t8522*t8525*var4[4] + 120.*t4396*t8516*t8538*t8539*var4[4] - 20.*t4396*t8543*t8544*var4[4] - 20.*t4396*t8508*t8517*var4[6] + 120.*t4396*t8521*t8522*t8525*var4[6] - 60.*t4396*t8516*t8538*t8539*var4[6] + 40.*t4396*t8508*t8517*var4[8] - 60.*t4396*t8521*t8522*t8525*var4[8] - 20.*t4396*t8508*t8517*var4[10];
  p_output1[1]=-20.*t4126*t4382*t8543*t8544*var4[0] - 60.*t4126*t4382*t8516*t8538*t8539*var4[2] + 40.*t4126*t4382*t8543*t8544*var4[2] - 60.*t4126*t4382*t8521*t8522*t8525*var4[4] + 120.*t4126*t4382*t8516*t8538*t8539*var4[4] - 20.*t4126*t4382*t8543*t8544*var4[4] - 20.*t4126*t4382*t8508*t8517*var4[6] + 120.*t4126*t4382*t8521*t8522*t8525*var4[6] - 60.*t4126*t4382*t8516*t8538*t8539*var4[6] + 40.*t4126*t4382*t8508*t8517*var4[8] - 60.*t4126*t4382*t8521*t8522*t8525*var4[8] - 20.*t4126*t4382*t8508*t8517*var4[10];
  p_output1[2]=1.;
  p_output1[3]=t8565;
  p_output1[4]=t8568;
  p_output1[5]=t8571;
  p_output1[6]=t8574;
  p_output1[7]=t8578;
  p_output1[8]=t8579;
  p_output1[9]=20.*t8516*t8538*t8544*var4[0] - 5.*t8543*t8564*var4[0] + 60.*t8521*t8522*t8539*var4[2] - 60.*t8516*t8538*t8544*var4[2] + 5.*t8543*t8564*var4[2] + 60.*t8508*t8517*t8525*var4[4] - 150.*t8521*t8522*t8539*var4[4] + 40.*t8516*t8538*t8544*var4[4] - 140.*t8508*t8517*t8525*var4[6] + 90.*t8521*t8522*t8539*var4[6] + 20.*t8575*t8580*var4[6] + 80.*t8508*t8517*t8525*var4[8] - 45.*t8575*t8580*var4[8] + 25.*t8575*t8580*var4[10];
  p_output1[10]=5.*t8543*t8564*var4[0] + 20.*t8523*t8544*t8601*var4[0] + 40.*t8516*t8538*t8544*var4[2] - 20.*t8543*t8544*var4[2] - 5.*t8543*t8564*var4[2] + 60.*t8516*t8539*t8543*t8601*var4[2] - 20.*t8523*t8544*t8601*var4[2] + 90.*t8521*t8522*t8539*var4[4] - 60.*t8516*t8538*t8539*var4[4] - 40.*t8516*t8538*t8544*var4[4] + 20.*t8543*t8544*var4[4] + 60.*t8522*t8525*t8538*t8601*var4[4] - 60.*t8516*t8539*t8543*t8601*var4[4] + 80.*t8508*t8517*t8525*var4[6] - 60.*t8521*t8522*t8525*var4[6] - 90.*t8521*t8522*t8539*var4[6] + 60.*t8516*t8538*t8539*var4[6] + 20.*t8517*t8521*t8601*var4[6] - 60.*t8522*t8525*t8538*t8601*var4[6] - 20.*t8508*t8517*var4[8] - 80.*t8508*t8517*t8525*var4[8] + 60.*t8521*t8522*t8525*var4[8] + 25.*t8575*t8580*var4[8] - 20.*t8517*t8521*t8601*var4[8] + 20.*t8508*t8517*var4[10] - 25.*t8575*t8580*var4[10];
  p_output1[11]=-20.*t4396*t8543*t8544*var4[1] - 60.*t4396*t8516*t8538*t8539*var4[3] + 40.*t4396*t8543*t8544*var4[3] - 60.*t4396*t8521*t8522*t8525*var4[5] + 120.*t4396*t8516*t8538*t8539*var4[5] - 20.*t4396*t8543*t8544*var4[5] - 20.*t4396*t8508*t8517*var4[7] + 120.*t4396*t8521*t8522*t8525*var4[7] - 60.*t4396*t8516*t8538*t8539*var4[7] + 40.*t4396*t8508*t8517*var4[9] - 60.*t4396*t8521*t8522*t8525*var4[9] - 20.*t4396*t8508*t8517*var4[11];
  p_output1[12]=-20.*t4126*t4382*t8543*t8544*var4[1] - 60.*t4126*t4382*t8516*t8538*t8539*var4[3] + 40.*t4126*t4382*t8543*t8544*var4[3] - 60.*t4126*t4382*t8521*t8522*t8525*var4[5] + 120.*t4126*t4382*t8516*t8538*t8539*var4[5] - 20.*t4126*t4382*t8543*t8544*var4[5] - 20.*t4126*t4382*t8508*t8517*var4[7] + 120.*t4126*t4382*t8521*t8522*t8525*var4[7] - 60.*t4126*t4382*t8516*t8538*t8539*var4[7] + 40.*t4126*t4382*t8508*t8517*var4[9] - 60.*t4126*t4382*t8521*t8522*t8525*var4[9] - 20.*t4126*t4382*t8508*t8517*var4[11];
  p_output1[13]=1.;
  p_output1[14]=t8565;
  p_output1[15]=t8568;
  p_output1[16]=t8571;
  p_output1[17]=t8574;
  p_output1[18]=t8578;
  p_output1[19]=t8579;
  p_output1[20]=20.*t8516*t8538*t8544*var4[1] - 5.*t8543*t8564*var4[1] + 60.*t8521*t8522*t8539*var4[3] - 60.*t8516*t8538*t8544*var4[3] + 5.*t8543*t8564*var4[3] + 60.*t8508*t8517*t8525*var4[5] - 150.*t8521*t8522*t8539*var4[5] + 40.*t8516*t8538*t8544*var4[5] - 140.*t8508*t8517*t8525*var4[7] + 90.*t8521*t8522*t8539*var4[7] + 20.*t8575*t8580*var4[7] + 80.*t8508*t8517*t8525*var4[9] - 45.*t8575*t8580*var4[9] + 25.*t8575*t8580*var4[11];
  p_output1[21]=5.*t8543*t8564*var4[1] + 20.*t8523*t8544*t8601*var4[1] + 40.*t8516*t8538*t8544*var4[3] - 20.*t8543*t8544*var4[3] - 5.*t8543*t8564*var4[3] + 60.*t8516*t8539*t8543*t8601*var4[3] - 20.*t8523*t8544*t8601*var4[3] + 90.*t8521*t8522*t8539*var4[5] - 60.*t8516*t8538*t8539*var4[5] - 40.*t8516*t8538*t8544*var4[5] + 20.*t8543*t8544*var4[5] + 60.*t8522*t8525*t8538*t8601*var4[5] - 60.*t8516*t8539*t8543*t8601*var4[5] + 80.*t8508*t8517*t8525*var4[7] - 60.*t8521*t8522*t8525*var4[7] - 90.*t8521*t8522*t8539*var4[7] + 60.*t8516*t8538*t8539*var4[7] + 20.*t8517*t8521*t8601*var4[7] - 60.*t8522*t8525*t8538*t8601*var4[7] - 20.*t8508*t8517*var4[9] - 80.*t8508*t8517*t8525*var4[9] + 60.*t8521*t8522*t8525*var4[9] + 25.*t8575*t8580*var4[9] - 20.*t8517*t8521*t8601*var4[9] + 20.*t8508*t8517*var4[11] - 25.*t8575*t8580*var4[11];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_timevc_Right_Stance.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_d1y_timevc_Right_Stance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
