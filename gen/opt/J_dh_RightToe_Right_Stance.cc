/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:22 GMT-04:00
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
  double t8388;
  double t4143;
  double t8386;
  double t8389;
  double t8387;
  double t8390;
  double t8391;
  double t8392;
  double t8393;
  double t8394;
  double t8395;
  double t8396;
  double t8397;
  double t8404;
  double t8405;
  double t8406;
  double t8407;
  double t8408;
  double t8409;
  t8388 = Cos(var1[2]);
  t4143 = Cos(var1[3]);
  t8386 = Sin(var1[2]);
  t8389 = Sin(var1[3]);
  t8387 = -1.*t4143*t8386;
  t8390 = -1.*t8388*t8389;
  t8391 = t8387 + t8390;
  t8392 = var2[0]*t8391;
  t8393 = -1.*t8388*t4143;
  t8394 = t8386*t8389;
  t8395 = t8393 + t8394;
  t8396 = var2[1]*t8395;
  t8397 = t8392 + t8396;
  t8404 = t4143*t8386;
  t8405 = t8388*t8389;
  t8406 = t8404 + t8405;
  t8407 = var2[1]*t8406;
  t8408 = var2[0]*t8395;
  t8409 = t8407 + t8408;
  p_output1[0]=t8397;
  p_output1[1]=t8397;
  p_output1[2]=t4143*t8388 - 1.*t8386*t8389;
  p_output1[3]=t8391;
  p_output1[4]=Power(t4143,2) + Power(t8389,2);
  p_output1[5]=1.;
  p_output1[6]=t8409;
  p_output1[7]=t8409;
  p_output1[8]=t8391;
  p_output1[9]=t8395;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_RightToe_Right_Stance.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_dh_RightToe_Right_Stance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
