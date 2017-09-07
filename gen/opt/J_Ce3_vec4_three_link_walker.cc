/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:13 GMT-04:00
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
  double t922;
  double t862;
  double t899;
  double t1829;
  double t905;
  double t3039;
  double t4116;
  double t4135;
  double t8223;
  double t8275;
  double t8276;
  double t8280;
  double t8292;
  double t8293;
  double t8294;
  double t8313;
  double t8314;
  double t8315;
  double t8316;
  double t8317;
  double t8318;
  double t8319;
  t922 = Cos(var1[2]);
  t862 = Cos(var1[3]);
  t899 = Sin(var1[2]);
  t1829 = Sin(var1[3]);
  t905 = t862*t899;
  t3039 = t922*t1829;
  t4116 = t905 + t3039;
  t4135 = 1.25*var2[1]*t4116;
  t8223 = -1.*t922*t862;
  t8275 = t899*t1829;
  t8276 = t8223 + t8275;
  t8280 = 1.25*var2[0]*t8276;
  t8292 = t4135 + t8280;
  t8293 = var2[3]*t8292;
  t8294 = -1.*t862*t899;
  t8313 = -1.*t922*t1829;
  t8314 = t8294 + t8313;
  t8315 = 1.25*var2[3]*t8314;
  t8316 = 1.25*var2[3]*t8276;
  t8317 = 1.25*var2[0]*t8314;
  t8318 = 1.25*var2[1]*t8276;
  t8319 = t8317 + t8318;
  p_output1[0]=t8293;
  p_output1[1]=t8293;
  p_output1[2]=t8315;
  p_output1[3]=t8316;
  p_output1[4]=t8319;
  p_output1[5]=t8293;
  p_output1[6]=t8293;
  p_output1[7]=t8315;
  p_output1[8]=t8316;
  p_output1[9]=t8319;
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

#include "J_Ce3_vec4_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce3_vec4_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
