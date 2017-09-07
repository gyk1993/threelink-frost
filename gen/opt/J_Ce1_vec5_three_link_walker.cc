/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:02 GMT-04:00
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
  double t7867;
  double t7868;
  double t7869;
  double t7888;
  double t7896;
  double t7897;
  double t7898;
  double t7899;
  double t7900;
  double t7901;
  double t7902;
  double t7903;
  double t7904;
  double t7905;
  double t7910;
  double t7911;
  double t7912;
  double t7913;
  double t7914;
  double t7915;
  double t7916;
  t7867 = Cos(var1[2]);
  t7868 = Cos(var1[4]);
  t7869 = -1.*t7867*t7868;
  t7888 = Sin(var1[2]);
  t7896 = Sin(var1[4]);
  t7897 = t7888*t7896;
  t7898 = t7869 + t7897;
  t7899 = -1.25*var2[2]*t7898;
  t7900 = -1.25*var2[4]*t7898;
  t7901 = t7899 + t7900;
  t7902 = var2[4]*t7901;
  t7903 = -1.*t7868*t7888;
  t7904 = -1.*t7867*t7896;
  t7905 = t7903 + t7904;
  t7910 = t7868*t7888;
  t7911 = t7867*t7896;
  t7912 = t7910 + t7911;
  t7913 = -1.25*var2[2]*t7912;
  t7914 = -1.25*var2[4]*t7912;
  t7915 = t7913 + t7914;
  t7916 = var2[4]*t7915;
  p_output1[0]=t7902;
  p_output1[1]=t7902;
  p_output1[2]=-1.25*t7905*var2[4];
  p_output1[3]=-1.25*t7905*var2[2] - 2.5*t7905*var2[4];
  p_output1[4]=t7916;
  p_output1[5]=t7916;
  p_output1[6]=t7900;
  p_output1[7]=t7899 - 2.5*t7898*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 8, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec5_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce1_vec5_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
