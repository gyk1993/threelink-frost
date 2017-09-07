/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:31 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t2639;
  double t2655;
  double t4397;
  double t5389;
  double t8518;
  double t8519;
  double t8520;
  double t8526;
  double t8527;
  double t8528;
  double t8540;
  double t8546;
  double t8547;
  double t8548;
  double t8549;
  double t8550;
  double t8556;
  double t8557;
  double t8561;
  double t8562;
  double t8583;
  double t8592;
  double t8597;
  double t8605;
  t2639 = -1.*var6[1];
  t2655 = var6[0] + t2639;
  t4397 = Power(t2655,-5);
  t5389 = -1. + var7[0];
  t8518 = -1. + var8[0];
  t8519 = 1/t8518;
  t8520 = -1.*var1[0];
  t8526 = t8520 + var1[1];
  t8527 = t5389*t8519*t8526;
  t8528 = t2639 + var1[0] + t8527;
  t8540 = Power(t8528,3);
  t8546 = Power(t2655,-4);
  t8547 = Power(t8528,2);
  t8548 = 1/t2655;
  t8549 = -1.*t8548*t8528;
  t8550 = 1. + t8549;
  t8556 = Power(t2655,-3);
  t8557 = Power(t8550,2);
  t8561 = Power(t2655,-2);
  t8562 = Power(t8550,3);
  t8583 = Power(t8528,4);
  t8592 = Power(t8550,4);
  t8597 = Power(t8528,5);
  t8605 = Power(t8550,5);
  p_output1[0]=var4[3] - 20.*t8561*t8562*var5[0] - 60.*t8528*t8556*t8557*var5[2] + 40.*t8561*t8562*var5[2] - 60.*t8546*t8547*t8550*var5[4] + 120.*t8528*t8556*t8557*var5[4] - 20.*t8561*t8562*var5[4] - 20.*t4397*t8540*var5[6] + 120.*t8546*t8547*t8550*var5[6] - 60.*t8528*t8556*t8557*var5[6] + 40.*t4397*t8540*var5[8] - 60.*t8546*t8547*t8550*var5[8] - 20.*t4397*t8540*var5[10] + (var2[3] - 1.*t8605*var5[0] - 5.*t8528*t8548*t8592*var5[2] - 10.*t8547*t8561*t8562*var5[4] - 10.*t8540*t8556*t8557*var5[6] - 5.*t8546*t8550*t8583*var5[8] - 1.*t4397*t8597*var5[10])*var9[0] + (var3[3] + 5.*t8548*t8592*var5[0] + 20.*t8528*t8561*t8562*var5[2] - 5.*t8548*t8592*var5[2] + 30.*t8547*t8556*t8557*var5[4] - 20.*t8528*t8561*t8562*var5[4] + 20.*t8540*t8546*t8550*var5[6] - 30.*t8547*t8556*t8557*var5[6] - 20.*t8540*t8546*t8550*var5[8] + 5.*t4397*t8583*var5[8] - 5.*t4397*t8583*var5[10])*var9[1];
  p_output1[1]=var4[4] - 20.*t8561*t8562*var5[1] - 60.*t8528*t8556*t8557*var5[3] + 40.*t8561*t8562*var5[3] - 60.*t8546*t8547*t8550*var5[5] + 120.*t8528*t8556*t8557*var5[5] - 20.*t8561*t8562*var5[5] - 20.*t4397*t8540*var5[7] + 120.*t8546*t8547*t8550*var5[7] - 60.*t8528*t8556*t8557*var5[7] + 40.*t4397*t8540*var5[9] - 60.*t8546*t8547*t8550*var5[9] - 20.*t4397*t8540*var5[11] + (var2[4] - 1.*t8605*var5[1] - 5.*t8528*t8548*t8592*var5[3] - 10.*t8547*t8561*t8562*var5[5] - 10.*t8540*t8556*t8557*var5[7] - 5.*t8546*t8550*t8583*var5[9] - 1.*t4397*t8597*var5[11])*var9[0] + (var3[4] + 5.*t8548*t8592*var5[1] + 20.*t8528*t8561*t8562*var5[3] - 5.*t8548*t8592*var5[3] + 30.*t8547*t8556*t8557*var5[5] - 20.*t8528*t8561*t8562*var5[5] + 20.*t8540*t8546*t8550*var5[7] - 30.*t8547*t8556*t8557*var5[7] - 20.*t8540*t8546*t8550*var5[9] + 5.*t4397*t8583*var5[9] - 5.*t4397*t8583*var5[11])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_timevc_Right_Stance.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void d2y_timevc_Right_Stance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
