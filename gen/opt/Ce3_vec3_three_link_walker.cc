/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:52 GMT-04:00
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
  double t7447;
  double t7467;
  double t7475;
  double t7469;
  double t7489;
  double t7491;
  double t7483;
  double t7484;
  double t7485;
  double t7486;
  double t7487;
  double t7494;
  double t7495;
  double t7496;
  double t7497;
  double t7498;
  double t7468;
  double t7481;
  double t7482;
  double t7503;
  double t7504;
  double t7505;
  double t7490;
  double t7492;
  double t7493;
  double t7507;
  double t7508;
  double t7509;
  t7447 = Sin(var1[2]);
  t7467 = Cos(var1[3]);
  t7475 = Sin(var1[3]);
  t7469 = Cos(var1[2]);
  t7489 = Cos(var1[4]);
  t7491 = Sin(var1[4]);
  t7483 = Power(t7467,2);
  t7484 = 0.5*t7483;
  t7485 = Power(t7475,2);
  t7486 = 0.5*t7485;
  t7487 = t7484 + t7486;
  t7494 = Power(t7489,2);
  t7495 = 0.5*t7494;
  t7496 = Power(t7491,2);
  t7497 = 0.5*t7496;
  t7498 = t7495 + t7497;
  t7468 = -1.*t7467*t7447;
  t7481 = -1.*t7469*t7475;
  t7482 = t7468 + t7481;
  t7503 = -1.*t7469*t7467;
  t7504 = t7447*t7475;
  t7505 = t7503 + t7504;
  t7490 = -1.*t7489*t7447;
  t7492 = -1.*t7469*t7491;
  t7493 = t7490 + t7492;
  t7507 = -1.*t7469*t7489;
  t7508 = t7447*t7491;
  t7509 = t7507 + t7508;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(2.5*t7447 - 5.*t7482*t7487 - 5.*t7493*t7498)*var2[0] - 0.5*(2.5*t7469 - 5.*t7487*t7505 - 5.*t7498*t7509)*var2[1])*var2[2];
  p_output1[3]=(2.5*t7482*t7487*var2[0] + 2.5*t7487*t7505*var2[1])*var2[2];
  p_output1[4]=(2.5*t7493*t7498*var2[0] + 2.5*t7498*t7509*var2[1])*var2[2];
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

#include "Ce3_vec3_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce3_vec3_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
