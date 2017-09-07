/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 17:52:00 GMT-04:00
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
  double t7825;
  double t7829;
  double t7831;
  double t7833;
  double t7834;
  double t7848;
  double t7849;
  double t7853;
  double t7857;
  double t7858;
  double t7859;
  double t7860;
  double t7861;
  double t7862;
  double t7889;
  double t7890;
  double t7891;
  double t7892;
  double t7893;
  double t7894;
  double t7895;
  t7825 = Cos(var1[2]);
  t7829 = Cos(var1[3]);
  t7831 = -1.*t7825*t7829;
  t7833 = Sin(var1[2]);
  t7834 = Sin(var1[3]);
  t7848 = t7833*t7834;
  t7849 = t7831 + t7848;
  t7853 = -1.25*var2[2]*t7849;
  t7857 = -1.25*var2[3]*t7849;
  t7858 = t7853 + t7857;
  t7859 = var2[3]*t7858;
  t7860 = -1.*t7829*t7833;
  t7861 = -1.*t7825*t7834;
  t7862 = t7860 + t7861;
  t7889 = t7829*t7833;
  t7890 = t7825*t7834;
  t7891 = t7889 + t7890;
  t7892 = -1.25*var2[2]*t7891;
  t7893 = -1.25*var2[3]*t7891;
  t7894 = t7892 + t7893;
  t7895 = var2[3]*t7894;
  p_output1[0]=t7859;
  p_output1[1]=t7859;
  p_output1[2]=-1.25*t7862*var2[3];
  p_output1[3]=-1.25*t7862*var2[2] - 2.5*t7862*var2[3];
  p_output1[4]=t7895;
  p_output1[5]=t7895;
  p_output1[6]=t7857;
  p_output1[7]=t7853 - 2.5*t7849*var2[3];
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

#include "J_Ce1_vec4_three_link_walker.hh"

namespace Times[step, Pattern[tl, Blank[]]]
{

void J_Ce1_vec4_three_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
