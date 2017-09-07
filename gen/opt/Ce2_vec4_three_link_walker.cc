/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:49 GMT-04:00
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
  double t4089;
  double t7252;
  double t7264;
  double t7272;
  double t7280;
  double t7281;
  double t7282;
  double t7323;
  double t7324;
  double t7325;
  double t7331;
  double t7332;
  double t7333;
  double t7342;
  double t7343;
  double t7344;
  double t7317;
  double t7318;
  double t7319;
  double t7320;
  double t7321;
  double t7326;
  double t7337;
  double t7338;
  double t7339;
  double t7340;
  double t7341;
  double t7345;
  double t7346;
  t4089 = Cos(var1[3]);
  t7252 = Sin(var1[2]);
  t7264 = -1.*t4089*t7252;
  t7272 = Cos(var1[2]);
  t7280 = Sin(var1[3]);
  t7281 = -1.*t7272*t7280;
  t7282 = t7264 + t7281;
  t7323 = t7272*t4089;
  t7324 = -1.*t7252*t7280;
  t7325 = t7323 + t7324;
  t7331 = t4089*t7252;
  t7332 = t7272*t7280;
  t7333 = t7331 + t7332;
  t7342 = -1.*t7272*t4089;
  t7343 = t7252*t7280;
  t7344 = t7342 + t7343;
  t7317 = Power(t4089,2);
  t7318 = 0.5*t7317;
  t7319 = Power(t7280,2);
  t7320 = 0.5*t7319;
  t7321 = t7318 + t7320;
  t7326 = 10.*t7282*t7325;
  t7337 = Power(t7282,2);
  t7338 = 5.*t7337;
  t7339 = 5.*t7282*t7333;
  t7340 = Power(t7325,2);
  t7341 = 5.*t7340;
  t7345 = 5.*t7325*t7344;
  t7346 = t7338 + t7339 + t7341 + t7345;
  p_output1[0]=var2[3]*(-0.5*(t7326 + 10.*t7325*t7333)*var2[0] - 0.5*t7346*var2[1] - 2.5*t7282*t7321*var2[2] - 1.25*t7282*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t7346*var2[0] - 0.5*(t7326 + 10.*t7282*t7344)*var2[1] - 2.5*t7321*t7344*var2[2] - 1.25*t7344*var2[3]);
  p_output1[2]=(-2.5*t7282*t7321*var2[0] - 2.5*t7321*t7344*var2[1])*var2[3];
  p_output1[3]=(-1.25*t7282*var2[0] - 1.25*t7344*var2[1])*var2[3];
  p_output1[4]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec4_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce2_vec4_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
