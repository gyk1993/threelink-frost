/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:51 GMT-04:00
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
  double t1822;
  double t3768;
  double t2887;
  double t3829;
  double t7431;
  double t7432;
  double t7433;
  double t2889;
  double t7394;
  double t7395;
  double t7415;
  double t7422;
  double t7439;
  double t7440;
  double t7441;
  double t7416;
  double t7428;
  double t7429;
  double t7434;
  double t7435;
  double t7436;
  double t7442;
  double t7443;
  double t7444;
  double t7414;
  double t7470;
  double t7471;
  double t7472;
  double t7473;
  double t7474;
  double t7437;
  double t7438;
  double t7449;
  double t7450;
  double t7451;
  double t7452;
  double t7453;
  double t7454;
  double t7455;
  double t7456;
  double t7457;
  double t7430;
  double t7476;
  double t7477;
  double t7478;
  double t7479;
  double t7480;
  double t7445;
  double t7446;
  double t7458;
  double t7459;
  double t7460;
  double t7461;
  double t7462;
  double t7463;
  double t7464;
  double t7465;
  double t7466;
  t1822 = Cos(var1[2]);
  t3768 = Sin(var1[2]);
  t2887 = Cos(var1[3]);
  t3829 = Sin(var1[3]);
  t7431 = -1.*t2887*t3768;
  t7432 = -1.*t1822*t3829;
  t7433 = t7431 + t7432;
  t2889 = -1.*t1822*t2887;
  t7394 = t3768*t3829;
  t7395 = t2889 + t7394;
  t7415 = Cos(var1[4]);
  t7422 = Sin(var1[4]);
  t7439 = -1.*t7415*t3768;
  t7440 = -1.*t1822*t7422;
  t7441 = t7439 + t7440;
  t7416 = -1.*t1822*t7415;
  t7428 = t3768*t7422;
  t7429 = t7416 + t7428;
  t7434 = t1822*t2887;
  t7435 = -1.*t3768*t3829;
  t7436 = t7434 + t7435;
  t7442 = t1822*t7415;
  t7443 = -1.*t3768*t7422;
  t7444 = t7442 + t7443;
  t7414 = 1.25*var2[3]*t7395;
  t7470 = Power(t2887,2);
  t7471 = 0.5*t7470;
  t7472 = Power(t3829,2);
  t7473 = 0.5*t7472;
  t7474 = t7471 + t7473;
  t7437 = -10.*t7433*t7436;
  t7438 = -10.*t7433*t7395;
  t7449 = Power(t7433,2);
  t7450 = -5.*t7449;
  t7451 = t2887*t3768;
  t7452 = t1822*t3829;
  t7453 = t7451 + t7452;
  t7454 = -5.*t7433*t7453;
  t7455 = Power(t7436,2);
  t7456 = -5.*t7455;
  t7457 = -5.*t7436*t7395;
  t7430 = 1.25*var2[4]*t7429;
  t7476 = Power(t7415,2);
  t7477 = 0.5*t7476;
  t7478 = Power(t7422,2);
  t7479 = 0.5*t7478;
  t7480 = t7477 + t7479;
  t7445 = -10.*t7441*t7444;
  t7446 = -10.*t7441*t7429;
  t7458 = Power(t7441,2);
  t7459 = -5.*t7458;
  t7460 = t7415*t3768;
  t7461 = t1822*t7422;
  t7462 = t7460 + t7461;
  t7463 = -5.*t7441*t7462;
  t7464 = Power(t7444,2);
  t7465 = -5.*t7464;
  t7466 = -5.*t7444*t7429;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(t7414 + t7430 - 0.5*(t7450 + t7454 + t7456 + t7457 + t7459 + t7463 + t7465 + t7466)*var2[0] - 0.5*(t7437 + t7438 + t7445 + t7446)*var2[1] - 0.5*(2.5*t1822 - 5.*t7395*t7474 - 5.*t7429*t7480)*var2[2]);
  p_output1[3]=var2[1]*(t7414 - 0.5*(t7450 + t7454 + t7456 + t7457)*var2[0] - 0.5*(t7437 + t7438)*var2[1] + 2.5*t7395*t7474*var2[2]);
  p_output1[4]=var2[1]*(t7430 - 0.5*(t7459 + t7463 + t7465 + t7466)*var2[0] - 0.5*(t7445 + t7446)*var2[1] + 2.5*t7429*t7480*var2[2]);
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

#include "Ce3_vec2_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce3_vec2_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
