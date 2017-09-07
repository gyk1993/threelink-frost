/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:51:45 GMT-04:00
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
  double t906;
  double t7196;
  double t1814;
  double t7195;
  double t7229;
  double t7231;
  double t1932;
  double t7217;
  double t7218;
  double t7219;
  double t7220;
  double t7221;
  double t7222;
  double t7225;
  double t7230;
  double t7232;
  double t7233;
  double t7234;
  double t7240;
  double t7246;
  double t7247;
  double t7248;
  double t7257;
  double t7258;
  double t7259;
  double t7261;
  double t7262;
  double t7263;
  t906 = Cos(var1[3]);
  t7196 = Sin(var1[3]);
  t1814 = Sin(var1[2]);
  t7195 = Cos(var1[2]);
  t7229 = Cos(var1[4]);
  t7231 = Sin(var1[4]);
  t1932 = -1.*t906*t1814;
  t7217 = -1.*t7195*t7196;
  t7218 = t1932 + t7217;
  t7219 = Power(t906,2);
  t7220 = 0.5*t7219;
  t7221 = Power(t7196,2);
  t7222 = 0.5*t7221;
  t7225 = t7220 + t7222;
  t7230 = -1.*t7229*t1814;
  t7232 = -1.*t7195*t7231;
  t7233 = t7230 + t7232;
  t7234 = Power(t7229,2);
  t7240 = 0.5*t7234;
  t7246 = Power(t7231,2);
  t7247 = 0.5*t7246;
  t7248 = t7240 + t7247;
  t7257 = -1.*t7195*t906;
  t7258 = t1814*t7196;
  t7259 = t7257 + t7258;
  t7261 = -1.*t7195*t7229;
  t7262 = t1814*t7231;
  t7263 = t7261 + t7262;
  p_output1[0]=var2[2]*(-0.5*(-2.5*t1814 + 5.*t7218*t7225 + 5.*t7233*t7248)*var2[2] - 2.5*t7218*t7225*var2[3] - 2.5*t7233*t7248*var2[4]);
  p_output1[1]=var2[2]*(-0.5*(-2.5*t7195 + 5.*t7225*t7259 + 5.*t7248*t7263)*var2[2] - 2.5*t7225*t7259*var2[3] - 2.5*t7248*t7263*var2[4]);
  p_output1[2]=0;
  p_output1[3]=0;
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

#include "Ce1_vec3_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void Ce1_vec3_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
