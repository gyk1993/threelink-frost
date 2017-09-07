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
  double t3739;
  double t3756;
  double t3822;
  double t7302;
  double t7322;
  double t7334;
  double t7335;
  double t7353;
  double t7354;
  double t7355;
  double t7357;
  double t7358;
  double t7359;
  double t7368;
  double t7369;
  double t7370;
  double t7347;
  double t7348;
  double t7349;
  double t7350;
  double t7351;
  double t7356;
  double t7363;
  double t7364;
  double t7365;
  double t7366;
  double t7367;
  double t7371;
  double t7372;
  t3739 = Cos(var1[4]);
  t3756 = Sin(var1[2]);
  t3822 = -1.*t3739*t3756;
  t7302 = Cos(var1[2]);
  t7322 = Sin(var1[4]);
  t7334 = -1.*t7302*t7322;
  t7335 = t3822 + t7334;
  t7353 = t7302*t3739;
  t7354 = -1.*t3756*t7322;
  t7355 = t7353 + t7354;
  t7357 = t3739*t3756;
  t7358 = t7302*t7322;
  t7359 = t7357 + t7358;
  t7368 = -1.*t7302*t3739;
  t7369 = t3756*t7322;
  t7370 = t7368 + t7369;
  t7347 = Power(t3739,2);
  t7348 = 0.5*t7347;
  t7349 = Power(t7322,2);
  t7350 = 0.5*t7349;
  t7351 = t7348 + t7350;
  t7356 = 10.*t7335*t7355;
  t7363 = Power(t7335,2);
  t7364 = 5.*t7363;
  t7365 = 5.*t7335*t7359;
  t7366 = Power(t7355,2);
  t7367 = 5.*t7366;
  t7371 = 5.*t7355*t7370;
  t7372 = t7364 + t7365 + t7367 + t7371;
  p_output1[0]=var2[4]*(-0.5*(t7356 + 10.*t7355*t7359)*var2[0] - 0.5*t7372*var2[1] - 2.5*t7335*t7351*var2[2] - 1.25*t7335*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t7372*var2[0] - 0.5*(t7356 + 10.*t7335*t7370)*var2[1] - 2.5*t7351*t7370*var2[2] - 1.25*t7370*var2[4]);
  p_output1[2]=(-2.5*t7335*t7351*var2[0] - 2.5*t7351*t7370*var2[1])*var2[4];
  p_output1[3]=0;
  p_output1[4]=(-1.25*t7335*var2[0] - 1.25*t7370*var2[1])*var2[4];
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

#include "Ce2_vec5_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce2_vec5_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
