/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:50 GMT-04:00
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
  double t1781;
  double t5438;
  double t1767;
  double t5437;
  double t7336;
  double t7352;
  double t7360;
  double t7378;
  double t7379;
  double t7380;
  double t7362;
  double t7373;
  double t7374;
  double t7375;
  double t7376;
  double t7386;
  double t7387;
  double t7388;
  double t7382;
  double t7383;
  double t7384;
  double t7390;
  double t7391;
  double t7392;
  double t7361;
  double t7417;
  double t7418;
  double t7419;
  double t7420;
  double t7421;
  double t7381;
  double t7385;
  double t7396;
  double t7397;
  double t7398;
  double t7399;
  double t7400;
  double t7401;
  double t7402;
  double t7403;
  double t7404;
  double t7377;
  double t7423;
  double t7424;
  double t7425;
  double t7426;
  double t7427;
  double t7389;
  double t7393;
  double t7405;
  double t7406;
  double t7407;
  double t7408;
  double t7409;
  double t7410;
  double t7411;
  double t7412;
  double t7413;
  t1781 = Sin(var1[2]);
  t5438 = Cos(var1[2]);
  t1767 = Cos(var1[3]);
  t5437 = -1.*t1767*t1781;
  t7336 = Sin(var1[3]);
  t7352 = -1.*t5438*t7336;
  t7360 = t5437 + t7352;
  t7378 = t5438*t1767;
  t7379 = -1.*t1781*t7336;
  t7380 = t7378 + t7379;
  t7362 = Cos(var1[4]);
  t7373 = -1.*t7362*t1781;
  t7374 = Sin(var1[4]);
  t7375 = -1.*t5438*t7374;
  t7376 = t7373 + t7375;
  t7386 = t5438*t7362;
  t7387 = -1.*t1781*t7374;
  t7388 = t7386 + t7387;
  t7382 = t1767*t1781;
  t7383 = t5438*t7336;
  t7384 = t7382 + t7383;
  t7390 = t7362*t1781;
  t7391 = t5438*t7374;
  t7392 = t7390 + t7391;
  t7361 = 1.25*var2[3]*t7360;
  t7417 = Power(t1767,2);
  t7418 = 0.5*t7417;
  t7419 = Power(t7336,2);
  t7420 = 0.5*t7419;
  t7421 = t7418 + t7420;
  t7381 = -10.*t7360*t7380;
  t7385 = -10.*t7384*t7380;
  t7396 = Power(t7360,2);
  t7397 = -5.*t7396;
  t7398 = -5.*t7360*t7384;
  t7399 = Power(t7380,2);
  t7400 = -5.*t7399;
  t7401 = -1.*t5438*t1767;
  t7402 = t1781*t7336;
  t7403 = t7401 + t7402;
  t7404 = -5.*t7380*t7403;
  t7377 = 1.25*var2[4]*t7376;
  t7423 = Power(t7362,2);
  t7424 = 0.5*t7423;
  t7425 = Power(t7374,2);
  t7426 = 0.5*t7425;
  t7427 = t7424 + t7426;
  t7389 = -10.*t7376*t7388;
  t7393 = -10.*t7392*t7388;
  t7405 = Power(t7376,2);
  t7406 = -5.*t7405;
  t7407 = -5.*t7376*t7392;
  t7408 = Power(t7388,2);
  t7409 = -5.*t7408;
  t7410 = -1.*t5438*t7362;
  t7411 = t1781*t7374;
  t7412 = t7410 + t7411;
  t7413 = -5.*t7388*t7412;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(t7361 + t7377 - 0.5*(t7381 + t7385 + t7389 + t7393)*var2[0] - 0.5*(t7397 + t7398 + t7400 + t7404 + t7406 + t7407 + t7409 + t7413)*var2[1] - 0.5*(2.5*t1781 - 5.*t7360*t7421 - 5.*t7376*t7427)*var2[2]);
  p_output1[3]=var2[0]*(t7361 - 0.5*(t7381 + t7385)*var2[0] - 0.5*(t7397 + t7398 + t7400 + t7404)*var2[1] + 2.5*t7360*t7421*var2[2]);
  p_output1[4]=var2[0]*(t7377 - 0.5*(t7389 + t7393)*var2[0] - 0.5*(t7406 + t7407 + t7409 + t7413)*var2[1] + 2.5*t7376*t7427*var2[2]);
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

#include "Ce3_vec1_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce3_vec1_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
